#include <iostream>

using namespace std;

//inline�֐��ɂ���

//inline�֐��͊֐�call�̍������̎w�߂ł����ĕK���C�����C���W�J�����킯�ł͂Ȃ�


//�P�[�X�@�P
//static�֐���inline�������ꍇ
static inline int inc(int *a)
{
  return (*a)++;
}

//�P�[�X�@�Q
//inline �Ȃ��Ő錾���ꂽ��A inline �t���Œ�`���ꂽ�ꍇ
extern int inc(int *b);

inline int inc(int *b)
{
  return (*b)++;
}

//�P�[�X�@�R
// inline�t���Œ�`���ꂽ�ꍇ
inline int inc(int *c)
{
  return (*c)++;
}


//�P�[�X�@�S
//extern �� inline �������Ɏw�肳�ꂽ�ꍇ
extern inline int inc(int *d)
{
  return (*d)++;
}



int main()
{

    cout << "Hello world!" << endl;

    return 0;
}
