#include <stdio.h>
int main(int argc, char const *argv[])
{
    double r_1,r_2,r_s;
    printf("Please enter the values of r1 and r2: ");//Serial Connection1
    scanf("%lf %lf",&r_1,&r_2);
    r_s = r_1 + r_2;
    printf("The sum resistance is:%4.1lf\n",r_s);
    return 0;
     //17:14 July 22
}
