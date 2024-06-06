#include <stdio.h>
int validate(int y, int m, int d){
    if ((y<1000 || y>9999) || (m<1 || m>12) || d<1) return 0;
    else if ((m==1) || (m==3) || (m==5) || (m==7) || (m==8) || (m==10) || (m==12)){
        if (d>31) return 0;
    }
    else if ((m==4) || (m==6) || (m==9) || (m==11)){
        if (d>30) return 0;
    }
    else if (m==2 && y%4==0 ){
        if (d>29) return 0;
    }
    else if (m==2){
        if (d>28) return 0;
    }
    return 1;
}
int main(){
    int d, m, y;
    printf("Enter the year: ");
    scanf("%d", &y);
    printf("Enter the month: ");
    scanf("%d", &m);
    printf("Enter the date: ");
    scanf("%d", &d);
    int valid = validate(y, m, d);
    if (valid) printf("%d / %d / %d, is a valid Date.\n", d,m,y);
    else printf("%d / %d / %d, is a invalid Date.\n", d,m,y);
    return 0;
}