#include <iostream>
#include "string.h"

using namespace std;

class inu{

    public:

        int tiwawa;

        void display(){
            int num = tiwawa;
            cout << "‚¿‚í‚í" << num << "•C" << endl;
        };

};

class inu_2:public inu{

    public:

        int papiyon;
        void display_2(){
            int num_2 = papiyon;
            cout << "‚Ï‚Ò‚æ‚ñ" << num_2 << "•C" << endl;
        };
};

int main(){

    inu     today;
    inu_2   yesterday;
    today.tiwawa = 2;
   // today.papiyon = 0;
    yesterday.tiwawa = 5;
    yesterday.papiyon = 8;

    cout << "‚«‚å‚¤‚Ì‚¢‚Ê" << endl;
    today.display();
    //today.display_2();
    cout << "‚«‚Ì‚¤‚Ì‚¢‚Ê" << endl;
    yesterday.display();
    yesterday.display_2();

    return 0;
}
