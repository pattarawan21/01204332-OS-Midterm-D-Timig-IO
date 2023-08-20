#include <stdio.h>
#include <time.h>


int main(){
    int a;
    //withio;
    int start_time_withio = clock();
    scanf("%d",&a);
    printf("%d",a+10);
    int end_time_withio=clock();
    printf("\nTotal Time with I/O : %d \n",end_time_withio-start_time_withio);
    //withoutio;
    int start_time_withoutio = clock();
    a=a+10;
    //printf("%d\n",a);
    int end_time_withoutio=clock();
    printf("Total Time without I/O : %d \n ",end_time_withoutio-start_time_withoutio);
    return 0;
}