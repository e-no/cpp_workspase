#include <iostream>
#include "string.h"

using namespace std;

class inu{

    public:

        int tiwawa;

        void display(){
            int num = tiwawa;
            cout << "�����" << num << "�C" << endl;
        };

};

class inu_2:public inu{

    public:

        int papiyon;
        void display_2(){
            int num_2 = papiyon;
            cout << "�ς҂��" << num_2 << "�C" << endl;
        };
};

int main(){

    inu     today;
    inu_2   yesterday;
    today.tiwawa = 2;
   // today.papiyon = 0;
    yesterday.tiwawa = 5;
    yesterday.papiyon = 8;

    cout << "���傤�̂���" << endl;
    today.display();
    //today.display_2();
    cout << "���̂��̂���" << endl;
    yesterday.display();
    yesterday.display_2();

    return 0;
}
