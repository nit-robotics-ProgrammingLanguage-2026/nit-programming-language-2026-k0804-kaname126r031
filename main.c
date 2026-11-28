#include <stdio.h>
/*入力のビット列を逆順にした値を計算する*/
void reverseBits(int *inputValue, int *reversedValue);
int main(void)
{
    int inputNumber;
    int resultNumber;
    scanf("%d", &inputNumber);
    if (inputNumber <= 0)
    {
        printf("NG");
        return 0;
    }
    reverseBits(&inputNumber, &resultNumber);
    printf("%d,%d", inputNumber, resultNumber);
    return 0;
}
void reverseBits(int *inputValue, int *reversedValue)
{
    int workingValue = *inputValue;
    int reversedBits = 0;
    /* 下位ビットから順に取り出して逆順に並べる */
    while (workingValue > 0)
    {
        reversedBits = (reversedBits << 1) | (workingValue & 1);
        workingValue >>= 1;
    }
    /* 計算結果を呼び出し元へ返す */
    *reversedValue = reversedBits;
}