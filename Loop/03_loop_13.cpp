#include <iostream>
#include <string>
using namespace std;


int main() {
    string word,sentence;
    getline(cin,word);
    getline(cin,sentence);

    int count = 0;
    string interest = "";
    sentence += " ";

    for (int i=0;i<sentence.length();i++) {
        if(sentence[i] == ' ' || sentence[i] == '"' || sentence[i] == '(' || sentence[i] == ')' || sentence[i] == '.' || sentence[i] == ',' || sentence[i] == '\''){
            if (interest == word) {
                count++;
            }
            //cout << interest << " " << count << '\n';
            interest = "";
        } else {
            interest += sentence[i];
        }
    }

    cout << count;

}
