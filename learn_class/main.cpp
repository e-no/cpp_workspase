#include <iostream>
#include <string.h>

using namespace std;

class inu
{
    private:
        char    name[20];
        int     age;

    public:
        //�R���X�g���N�^
        inu(char* inuname,int inuage){
            strcpy(name,inuname);
            if(inuage<0) age = 0; else age = inuage;
            cout << "wanwan" << endl;
        }

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
    inu tiwawa("pochi",10);

    tiwawa.setname("�`����");
    tiwawa.setage(20);
    tiwawa.display();

}
