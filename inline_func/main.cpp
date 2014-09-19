#include <iostream>

using namespace std;

//inline関数について

//inline関数は関数callの高速化の指令であって必ずインライン展開されるわけではない


//ケース　１
//static関数にinlineがついた場合
static inline int inca(int *a)
{
  return (*a)++;
}

//ケース　２
//inline なしで宣言された後、 inline 付きで定義された場合
extern int incb(int *b);

inline int incb(int *b)
{
  return (*b)++;
}

//ケース　３
// inline付きで定義された場合
inline int incc(int *c)
{
  return (*c)++;
}


//ケース　４
//extern と inline が同時に指定された場合
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
