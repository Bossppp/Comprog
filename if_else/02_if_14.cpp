#include <iostream>
#include <string>

int gradeTovalue (char grade) {
    switch (grade) {
        case 'A': return 4;
        case 'B': return 3;
        case 'C': return 2;
        case 'D': return 1;
        case 'F': return 0;
        //default : return -1;
    }

}
bool passCriteria(char com,char cal1,char cal2) {
    return com == 'A' && gradeTovalue(cal1) >= 2 && gradeTovalue(cal2) >= 2;
}

int main() {
    std::string IDnum1,IDnum2;
    double gpax1,gpax2;
    char com_1,cal1_1,cal2_1,com_2,cal1_2,cal2_2;
    std::cin >> IDnum1 >> gpax1 >> com_1 >> cal1_1 >> cal2_1;
    std::cin >> IDnum2 >> gpax2 >> com_2 >> cal1_2 >> cal2_2;

    bool stu1pass = passCriteria(com_1,cal1_1,cal2_1);
    bool stu2pass = passCriteria(com_2,cal1_2,cal2_2);

    if (stu1pass && stu2pass) {
        if (gpax1 > gpax2) {
            std::cout << IDnum1;
        } else if (gpax2 > gpax1) {
            std::cout << IDnum2;
        } else {
            if(gradeTovalue(cal1_1) > gradeTovalue(cal1_2)) {
                std::cout << IDnum1;
            } else if (gradeTovalue(cal1_2)>gradeTovalue(cal1_1)){
                std::cout << IDnum2;
            } else {
                if (gradeTovalue(cal2_1)>gradeTovalue(cal2_2)){
                    std::cout << IDnum1;
                } else if (gradeTovalue(cal2_2) >gradeTovalue(cal2_1)){
                    std::cout << IDnum2;
                } else {
                    std::cout << "Both";
                }
            }
        }
    } else if (stu1pass && !stu2pass) {
        std::cout << IDnum1;
    } else if (!stu1pass && stu2pass) {
        std::cout << IDnum2;
    } else {
        std::cout << "None";
    }

}