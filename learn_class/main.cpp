#include <iostream>
#include <string.h>

using namespace std;

class inu
{
    private:
        char    name[20];
        int     age;
    public:
        void setname(char* inuname);
        void setage(int inuage);
        void display();
};

void inu::setname(char* inuname)
{
    strcpy(name,inuname);
}

void inu::setage(int inuage)
{
    if(inuage<0)    age = 0; else age = inuage;
}

void inu::display()
{
    cout << "���O:" << name << endl;
    cout << "�N��:" <<  age << endl;
}

int main()
{
    inu tiwawa;

    tiwawa.setname("�`����");
    tiwawa.setage(10);
    tiwawa.display();
}
