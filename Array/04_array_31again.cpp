#include <iostream>
using namespace std;

const string num1digit[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
const string num2digit1[] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
const string num2digit2up[] = {"twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
const string num3digitup[] = {"", "thousand", "million", "billion", "trillion"};

// Helper function to process numbers below 1000
string processBelow1000(long long n) {
    string result = "";
    if (n >= 100) {
        result += num1digit[n / 100] + " hundred";
        n %= 100;
        if (n > 0) result += " ";
    }
    if (n >= 20) {
        result += num2digit2up[n / 10 - 2];
        if (n % 10 != 0) result += " " + num1digit[n % 10];
    } else if (n >= 10) {
        result += num2digit1[n - 10];
    } else if (n > 0) {
        result += num1digit[n];
    }
    return result;
}

// Main function to read the number in words
string numberToWords(long long n) {
    if (n == 0) return "zero";

    string result = "";
    int group = 0; // Keeps track of the thousand/million/billion group
    while (n > 0) {
        if (n % 1000 != 0) {
            string chunk = processBelow1000(n % 1000);
            if (group > 0) chunk += " " + num3digitup[group];
            if (!result.empty()) result = chunk + " " + result;
            else result = chunk;
        }
        n /= 1000;
        group++;
    }
    return result;
}

int main() {
    long long n;
    cin >> n;
    cout << numberToWords(n) << endl;
    return 0;
}
