#include <iostream>
using namespace std;

namespace Inu{
    const char* Tiwawa = "tiwawa";

    void Inuname(const char* name){     //�����\���֐�
        cout << name << endl;
    }

    void Inuname(){                     //�����\���֐�
    cout << Tiwawa << endl;
    }
}

void Inuname(const char* name){         //�O���[�o���Ȍ����\���֐�
    cout << name << " " << name << endl;
}



int main()
{

    Inu::Inuname("sibainu");

    Inuname(Inu::Tiwawa);

}
