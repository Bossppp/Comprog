#include <iostream>

using namespace std;

int main() {
    int exam1_1, exam1_2, exam1_3, exam1_4;
    int w_ex1_1, w_ex1_2, w_ex1_3, w_ex1_4;
    cout << "Enter your 4 exam1 #1-#4 scores (0-100) >> ";
    cin >> exam1_1 >> exam1_2 >> exam1_3 >> exam1_4;
    cout << "Enter your proposed 4 exam1 weights (10%-40%) >> ";
    cin >> w_ex1_1 >> w_ex1_2 >> w_ex1_3 >> w_ex1_4;

    if (w_ex1_1 < 10 || w_ex1_1 > 40) w_ex1_1 = 25;
    if (w_ex1_2 < 10 || w_ex1_2 > 40) w_ex1_2 = 25;
    if (w_ex1_3 < 10 || w_ex1_3 > 40) w_ex1_3 = 25;
    if (w_ex1_4 < 10 || w_ex1_4 > 40) w_ex1_4 = 25;
    if (w_ex1_1 + w_ex1_2 + w_ex1_3 + w_ex1_4 > 100) {
        w_ex1_1 = w_ex1_2 = w_ex1_3 = w_ex1_4 = 25;
    }
    double exam1_term = (w_ex1_1*exam1_1 + w_ex1_2*exam1_2 + 
                         w_ex1_3*exam1_3 + w_ex1_4*exam1_4) / 25.0;
    cout << ">> Your exam1 score (0-400) = " << exam1_term << endl << endl;

    int exam2, w_exam2;
    cout << "Enter expected exam2 total score (0-400) >> ";
    cin >> exam2;
    cout << "Enter proposed exam2 weight (50%-80%) >> ";
    cin >> w_exam2;
    // if (w_exam2 < 50 || w_exam2 > 80) {
    //     w_exam2 = 60;
    // }

    double total = ((100-w_exam2)*exam1_term + w_exam2*exam2)/400.0;
    cout << ">> Your final total score = " << total << "%" << endl;
    cout << ">> You got " << (total < 60 ? "a U" : "an S") << endl;
}