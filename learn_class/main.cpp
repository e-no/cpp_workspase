#include <iostream>
#include <string.h>

using namespace std;

class inu
{
    private:
        char    name[20];
        int     age;
    public:
        inu(){ cout << "wanwan" << endl; }//�R���X�g���N�^
        void setname(char* inuname){ strcpy(name,inuname); }//���O�ݒ�֐�
        void setage(int inuage){ if(inuage<0)    age = 0; else age = inuage; }//�N��ݒ�֐�
        void display();
};


void inu::display()
{
    cout << "���O:" << name << endl;
    cout << "�N��:" <<  age << endl;
}

int main()
{
    inu tiwawa;
/*
    tiwawa.setname("�`����");
    tiwawa.setage(10);
    tiwawa.display();
    */
}
