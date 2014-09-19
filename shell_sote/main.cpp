#include <iostream>
#include <stdio.h>
#define NUM_DATA 20

using namespace std;

void    ShellSort(int num[ ], int n) ;
void    InsSort(int num[ ], int gap, int n);
void    ShowData(int num[ ], int n);
int      main(void);

/* n �̃f�[�^�̃V�F���\�[�g���s�� */
void ShellSort(int num[ ], int n)
{
    int gap;

    for (gap = n / 2; gap > 0; gap /= 2)
        InsSort(num, gap, n);
}

/* n �̃f�[�^�̒P���}���\�[�g���s�� */
void InsSort(int num[ ], int gap, int n)
{
    int i, j, temp;

    for (i = gap; i < n; i ++)
    {
        for (j = i - gap; j >= 0; j -= gap)      /* ���̃��[�v�� */
        {
            if (num[j] <= num[j + gap])         /* j �Ԗڂ�j + gap �ԖڂƔ�r */
                break;
            else{
                temp = num[j];                          /* �v�f�̓���ւ� */
                num[j] = num[j + gap];
                num[j + gap] = temp;
                ShowData(num, NUM_DATA);      /* �r���o�߂�\�� */
            }
        }
    }
    printf("\n");        /* InsSort(  ) �𔲂��鎞���s */
}

/* n �̃f�[�^�̕\�� */
void ShowData(int num[ ], int n)
{
    while(n--)     cout << *num++ <<" ";//printf("%2d  ", *num++);
    printf("\n");
}

int main(void)
{
    /* �\�[�g�Ώۂ̃f�[�^ */
    int num[ ] = {20,16, 6, 7, 1,17, 5,11, 4 ,15,13, 3,14, 9,12,18, 2, 8,10,19};

    /* �\�[�g�O�̃f�[�^�̕\�� */
    cout << "before sort" << endl;
    ShowData(num, NUM_DATA);
    cout <<"\n"<<endl;

    /* �V�F���\�[�g */
    ShellSort(num, NUM_DATA);
    cout <<"\n"<<endl;

    /* �\�[�g��̃f�[�^�̕\�� */
    cout << "after sort" << endl;

    ShowData(num, NUM_DATA);
     cout <<"\n"<<endl;

    return 0;
}
