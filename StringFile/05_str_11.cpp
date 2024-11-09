#include <iostream>
#include <string>


using namespace std;

int main(){
    string code;
    //check special ไปเรื่อยๆ ถ้าเจอก็เอาตัวนั้นเก็บเข้า decode

    //input code
    while(getline(cin,code)){
        char special = code[code.size()-1];
        //char special = code.size()-1;
        string decode = "";

            for(int i=0;i<code.size();i++){
                if(code[i] == special){

                    for(int j=i+1;j<code.size();j++){
                        if(code[j] == special){
                            i = j;
                            break;
                        } else{
                            decode += code[j];
                        }
                    }

                }
            }
             cout << decode << endl;
    }
   
}
//Is!I s!ee!ee trees of gr!sk!een!!