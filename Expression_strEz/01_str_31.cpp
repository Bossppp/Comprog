#include <iostream>
#include <string>

using namespace std;

long gcd(long a, long b) {
 if (b == 0) return a;
 return gcd(b, a%b);
}

int main() {
    string a,b,b_dup;
    cin >> a >> b >> b_dup;

    //a.b(b_dup)

    long up = stoi(a+b+b_dup) - stoi(a+b);
    long down = stoi(string(b_dup.length(),'9') + string(b.length(),'0'));

    long g = gcd(up,down);
    cout << up/g << " / " << down/g;
}