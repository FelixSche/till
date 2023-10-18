# include <stdio.h>

void leftCandle(int days, int row)
{
    int maxVal = days - row;
    for (int i = maxVal; i > 0; --i)
    {
        printf(".");
    }
    printf("i/");
}

void main(){
    leftCandle(5, 2); //...i/
    leftCandle(5, 3); //..i/
    leftCandle(7, 2); //.....i/
}