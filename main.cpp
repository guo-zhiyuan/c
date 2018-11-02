#include <stdio.h>
int main(void)
{
    int arr[10] = {10,10,10,10,0,6,4,9};
    int max;
    int smax;
    max = arr[0]; smax = arr[1];
    for(int i=2; i<10; i++)
    {
        if(arr[i] >max)
        {
            smax = max;
            max = arr[i];
        }
        else if(smax == max)
        {
            smax = arr[i];
        }
        else if(arr[i]>smax)
        {
            smax = arr[i];
        }
    }
    printf("max = %d\n",max);
    printf("smax = %d\n",smax);
    return 0;
}
