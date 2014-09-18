#include <iostream>

using namespace std;

class testclass
{
private:
    int num_int;
    double num_dou;

public:
    testclass()
        :num_int( 0 )
        ,num_dou( 1.2 )
    {
    }
};

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
