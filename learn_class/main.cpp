#include <iostream>
#include <string.h>

using namespace std;

class inu
{
    private:
        char    name[20];
        int     age;
    public:
        inu(){ cout << "wanwan" << endl; }//コンストラクタ
        void setname(char* inuname){ strcpy(name,inuname); }//名前設定関数
        void setage(int inuage){ if(inuage<0)    age = 0; else age = inuage; }//年齢設定関数
        void display();
};


void inu::display()
{
    cout << "名前:" << name << endl;
    cout << "年齢:" <<  age << endl;
}

int main()
{
    inu tiwawa;
/*
    tiwawa.setname("チワワ");
    tiwawa.setage(10);
    tiwawa.display();
    */
}
