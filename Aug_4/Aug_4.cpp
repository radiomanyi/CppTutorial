#include<iostream>
using namespace std;

void getMinandMax(int numbers[],int size,int *min,int *max){
    for (int i = 1; i < size; i++) {
        if (numbers[i] > *max) 
        *max = numbers[i];
        if (numbers[i] < *min) 
        *min = numbers[i];
    }
}

int main()
{
    int numbers[5] = {5,4,-2,29,6};
    int min = numbers[0];
    int max = numbers[0];
    getMinandMax(numbers,5,&min,&max);
    cout<<"Max is "<<max<<endl;
    cout<<"Min is "<<min<<endl;
}