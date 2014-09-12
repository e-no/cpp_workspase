#include <iostream>
using namespace std;

namespace Inu{
    const char* Tiwawa = "tiwawa";

    void Inuname(const char* name){     //犬名表示関数
        cout << name << endl;
    }

    void Inuname(){                     //犬名表示関数
    cout << Tiwawa << endl;
    }
}

void Inuname(const char* name){         //グローバルな犬名表示関数
    cout << name << " " << name << endl;
}



int main()
{

    Inu::Inuname("sibainu");

    Inuname(Inu::Tiwawa);

}
