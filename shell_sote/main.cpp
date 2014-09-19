#include <iostream>
#include <stdio.h>
#define NUM_DATA 20

using namespace std;

void    ShellSort(int num[ ], int n) ;
void    InsSort(int num[ ], int gap, int n);
void    ShowData(int num[ ], int n);
int      main(void);

/* n 個のデータのシェルソートを行う */
void ShellSort(int num[ ], int n)
{
    int gap;

    for (gap = n / 2; gap > 0; gap /= 2)
        InsSort(num, gap, n);
}

/* n 個のデータの単純挿入ソートを行う */
void InsSort(int num[ ], int gap, int n)
{
    int i, j, temp;

    for (i = gap; i < n; i ++)
    {
        for (j = i - gap; j >= 0; j -= gap)      /* このループで */
        {
            if (num[j] <= num[j + gap])         /* j 番目とj + gap 番目と比較 */
                break;
            else{
                temp = num[j];                          /* 要素の入れ替え */
                num[j] = num[j + gap];
                num[j + gap] = temp;
                ShowData(num, NUM_DATA);      /* 途中経過を表示 */
            }
        }
    }
    printf("\n");        /* InsSort(  ) を抜ける時改行 */
}

/* n 個のデータの表示 */
void ShowData(int num[ ], int n)
{
    while(n--)     cout << *num++ <<" ";//printf("%2d  ", *num++);
    printf("\n");
}

int main(void)
{
    /* ソート対象のデータ */
    int num[ ] = {20,16, 6, 7, 1,17, 5,11, 4 ,15,13, 3,14, 9,12,18, 2, 8,10,19};

    /* ソート前のデータの表示 */
    cout << "before sort" << endl;
    ShowData(num, NUM_DATA);
    cout <<"\n"<<endl;

    /* シェルソート */
    ShellSort(num, NUM_DATA);
    cout <<"\n"<<endl;

    /* ソート後のデータの表示 */
    cout << "after sort" << endl;

    ShowData(num, NUM_DATA);
     cout <<"\n"<<endl;

    return 0;
}
