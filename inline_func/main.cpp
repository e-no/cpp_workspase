#include <iostream>

using namespace std;

//inline�֐��ɂ���

//inline�֐��͊֐�call�̍������̎w�߂ł����ĕK���C�����C���W�J�����킯�ł͂Ȃ�


//�P�[�X�@�P
//static�֐���inline�������ꍇ
static inline int inca(int *a)
{
  return (*a)++;
}

//�P�[�X�@�Q
//inline �Ȃ��Ő錾���ꂽ��A inline �t���Œ�`���ꂽ�ꍇ
extern int incb(int *b);

inline int incb(int *b)
{
  return (*b)++;
}

//�P�[�X�@�R
// inline�t���Œ�`���ꂽ�ꍇ
inline int incc(int *c)
{
  return (*c)++;
}


//�P�[�X�@�S
//extern �� inline �������Ɏw�肳�ꂽ�ꍇ
extern inline int incd(int *d)
{
  return (*d)++;
}


class Kitty {

public:
	int func(int x) {
		return x + (int)(x * 0.05);
	}

} obj ;

int main() {

	cout << obj.func(100);

	return 0;
}
