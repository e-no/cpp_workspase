#include <iostream>
#include <string.h>

using namespace std;

class think
{
    public:
        char siwaku[20];
        char tatemae[20];
        void actuary(void);
    private:
        char honne[20];
};

void think::actuary()
{
    strcpy(honne,siwaku);
}

int main(void)
{
    think meeting;
    strcpy(meeting.tatemae,"‚ª‚ñ‚Î‚é");
    strcpy(meeting.siwaku,"‚©‚¦‚è‚½‚¢");

    cout << meeting.tatemae <<endl;
    cout <<meeting.siwaku << endl;
    return 0;
}
