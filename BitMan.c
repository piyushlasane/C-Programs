#include <stdio.h>

int getbit(int n, int pos){
    return ((n & (1<<pos)) != 0);   // for returning only 0 or 1 there is need of '!= 0'
}
int setbit(int n, int pos){
    return n | (1<<pos);
}
int clrbit(int n, int pos){
    return n & (~(1<<pos));         // taken the once complement of shifted 1 --> '~'
}
int toggle(int n, int pos){
    return n ^ 1<<pos;
}
int isOdd(int n){
    return (n & 1);
}
int isEven(int n){
    return !(n & 1);
}
int isPowerOfTwo(int n){
    return (n & (n-1)) == 0;        // doesn't work for 0 <-- zero is not power of two but 
}
int main()
{
    printf("%d\n", getbit(5, 1));   // To know the positinal bit
    printf("%d\n", setbit(0, 9));   // Here bit becomes 1
    printf("%d\n", clrbit(5, 2));   // Here bit becomes 0
    printf("%d\n", toggle(9, 1));   // (if bit is 0 --> 1)  OR   (if bit is 1 --> 0)
    printf("%d\n", isOdd(16244));
    printf("%d\n", isEven(16244));
    printf("%d\n", isPowerOfTwo(1024));
    printf("");
    return 0;
}