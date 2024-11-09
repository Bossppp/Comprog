#include <iostream>
#include <limits.h>

using namespace std;

int main(){
    //1.INPUT part
    //รับจำนวนลิฟ 
    int totalLift;
    cin >> totalLift;
    //ใส่ข้อมูลให้ลิฟ (เลขลิฟ ชั้นลิฟปัจจุบัน ชั้นลิฟปลายทาง)
    int lift[totalLift][3];
    for(int i=0;i<totalLift;i++){
        cin >> lift[i][0] >> lift[i][1] >> lift[i][2];
    }

    //รับจำนวนคำถาม
    int totalQuiz;
    cin >> totalQuiz;
    //ใส่ข้อมูลคำถาม (ชั้นปัจจุบัน ชั้นปลายทาง)
    int quiz[totalQuiz][2];
    for (int i=0;i<totalQuiz;i++){
        cin >> quiz[i][0] >> quiz[i][1];
    }

    //2.PROCESS part
    /*
    --lift load--
    1) if in the lift way -> lift load = quiz destination - lift destination
    2) if not lift way -> lift load = (quiz current - lift destination) + (quiz destination - quiz current)
    3) if lift นิ่ง[lift current = lift destination] -> lift load = (quiz current - lift destination) + (quiz destination - quiz current)
    */

    for (int i=0; i<totalQuiz; i++){
        int quiz_current = quiz[i][0];
        int quiz_desti = quiz[i][1];
        int quizMove = 0;
        int minLoad = INT_MAX;
        int load = INT_MAX;
        if(quiz_current < quiz_desti){
            quizMove = 1; //move up
        } else if(quiz_current > quiz_desti){
            quizMove = -1; //move down
        }

        for(int j=0; j<totalLift; j++){
            int lift_current = lift[j][1];
            int lift_desti = lift[j][2];
            int liftMove = 0;
            
            if(lift_current < lift_desti){
                liftMove = 1; //lift up
            } else if (lift_current > lift_desti){
                liftMove = -1; //lift down
            }

            int minlift = min(lift_current, lift_desti);
            int maxlift = max(lift_current, lift_desti);
            int newload;
            if(liftMove != quizMove || quiz_current < minlift || quiz_current > maxlift){
                newload = abs(quiz_current - lift_desti) + abs(quiz_desti - quiz_current);
                if(newload <= load){
                    if(newload == load){
                        minLoad = min(minLoad, lift[j][0]);
                    } else {
                        minLoad = lift[j][0];
                    }
                    load = newload;
                }
            } else {
                newload = abs(quiz_desti - lift_desti);
                if(newload <= load){
                    if(newload == load){
                        minLoad = min(minLoad, lift[j][0]);
                    } else {
                        minLoad = lift[j][0];
                    }
                load = newload;
            }
            
        }
            //cout << i << " " << lift[j][0] << " " << load << " " << newload << " "<< minLoad <<endl;

        }
        cout << ">> " << minLoad << endl;
    }
}