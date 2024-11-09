#include <iostream>
#include <string>

using namespace std;

string add(string a, string b){
    string sum = "";
    int carry = 0;
    int i = a.size() - 1;
    int j = b.size() - 1;
    while(i >= 0 || j >= 0){
        int x = i >= 0 ? a[i] - '0' : 0;
        int y = j >= 0 ? b[j] - '0' : 0;
        int z = x + y + carry;
        carry = z / 10;
        sum = to_string(z % 10) + sum;
        i--; j--;
    }
    if(carry) sum = to_string(carry) + sum;
    return sum;
}

string addbigNum(string num1,string num2){
    string result = "";
    int tod = 0;
    
    //make the length of num1 and num2 equal by add 0 repeat until the length of num1 and num2 equal
    while (num1.size() < num2.size()) num1 = '0' + num1;
    while (num2.size() < num1.size()) num2 = '0' + num2;

    //add the number from the last index
    for(int i=num1.size()-1;i >=0;i--){
        int sum = (num1[i]-'0') + (num2[i]-'0') + tod;
        tod = sum/10; //ตัวทดเลขก็ถ้าเกิน 10 จะทด 1 ไม่เกิน ทด 0
        result = to_string(sum%10) + result;
    }

    if(tod) result = '1' + result;

    return result;
}

int main() {
    string num;
    string sum = "0"; 
    while (true){
        cin >> num;
        //cout << num << endl;
        if(num == "END") break;
        //sum = add(sum, num);
        sum = addbigNum(sum,num);

    }
    std::cout << sum << endl;

}

