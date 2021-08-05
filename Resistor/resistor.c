#include <stdio.h>
int main(int argc, char const *argv[])
{
    double r_1,r_2,r_s;
    printf("Please enter the values of r1 and r2: ");//Serial Connection1
    scanf("%lf %lf",&r_1,&r_2);
    r_s = r_1 + r_2;
    printf("The sum resistance is:%4.1lf %s\n",r_s,"Ohm");
    return 0;
    //20:58 2021 7 21
}
