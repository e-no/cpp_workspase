#include <iostream>
#include "string.h"

using namespace std;

class inu{

    public:

        int tiwawa;

        void display(){
            int num = tiwawa;
            cout << "ちわわ" << num << "匹" << endl;
        };

};

class inu_2:public inu{

    public:

        int papiyon;
        void display_2(){
            int num_2 = papiyon;
            cout << "ぱぴよん" << num_2 << "匹" << endl;
        };
};

int main(){

    inu     today;
    inu_2   yesterday;
    today.tiwawa = 2;
   // today.papiyon = 0;
    yesterday.tiwawa = 5;
    yesterday.papiyon = 8;

    cout << "きょうのいぬ" << endl;
    today.display();
    //today.display_2();
    cout << "きのうのいぬ" << endl;
    yesterday.display();
    yesterday.display_2();

    return 0;
}
