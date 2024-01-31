#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void random(int arr[],int n){
    for(int i=0;i<n;i++){
        arr[i]=rand()%100;
    }
}
int second_S(int arr[],int n){
    int first,second;
    if(arr[0]<arr[1]){
        first=arr[0];
        second=arr[1];
    }
    else{
        first=arr[1];
        second=arr[0];
    }
    for(int i=2;i<n;i++){
        if(arr[i]<first){
            second=first;
            first=arr[i];
        }
        else if(arr[i]<second && arr[i]!=first){
            second=arr[i];
        }
    }
    return second;

}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main()
{
    int n;
    clock_t start,end;
    double time;
     start=clock();
    scanf("%d",&n);
    int arr[n];
    random(arr,n);
    print(arr,n);
   
    int x=  second_S(arr,n);
    end=clock();
    time=(double)(end-start)/CLOCKS_PER_SEC;
    printf(" second smallest:-%d\n",x);
    printf("time taken:-%f",time); 
    return 0;
}
