#include <iostream>
#include <stdlib.h>
using namespace std;

class CTest {
public:
  CTest() {
    cout << "Constructor " << endl;
  }
};

int main(int argc, char* argv[]) {

  CTest *test1 = new CTest();
  CTest *test2 = (CTest*)malloc(sizeof(CTest));
  delete test1;
  free(test2);
  return(0);
}
