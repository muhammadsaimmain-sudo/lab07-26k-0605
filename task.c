#include <stdio.h>

int main(){
int arr[7]={31,33,35,34,38,36,32};

int len=sizeof(arr)/sizeof(arr[0]);
int sum=0;
int avg;
int lowest=arr[0];
int high=arr[0];
for(int i=0;i<len;i++){

printf("DAY:%d: %d C\n",i+1,arr[i]);

sum+=arr[i];
avg=sum/len;
 
if(arr[i]>high){
    high=arr[i];



}


if(arr[i]<lowest){
lowest=arr[i];

}
arr[2]=37;
printf("The memory address of %d is %d\n",arr[i],&arr[i]);
}













printf("%d \n",avg);

printf("%d\n",high);
printf("%d\n",lowest);
}