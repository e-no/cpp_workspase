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
    strcpy(meeting.tatemae,"がんばる");
    strcpy(meeting.siwaku,"かえりたい");

    cout << meeting.tatemae <<endl;
    cout <<meeting.siwaku << endl;
    return 0;
}
