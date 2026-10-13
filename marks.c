#include <stdio.h>

int main(){
float arr[10];

int len=sizeof(arr)/sizeof(arr[0]);
float sum=0;
float avg;
int c=0;
for(int i=0;i<len;i++){
printf("Enter mark %d \n",i+1);
scanf("%f",&arr[i]);

if(arr[i]<0 || arr[i]>20){

    printf("INVALID INPUT AT fd\n",i+1);
    i--;   
}




}

for(int i=0;i<len;i++){
    if(arr[i]>=18){

        printf("Excellent marks %f\n",arr[i]);
    }
else if(arr[i]>14.00 || arr[i]==17.49){
    printf("good marks\n");
}
else if(arr[i]>=10 || arr[i]<=13.99){
    printf("Average \n");
}

else if( arr[i]<10){

    printf("Need improvement \n");
}

}




for(int i=0;i<len;i++){

sum+=arr[i];

avg=sum/len;
if(arr[i]>avg){
c++;
}
printf("%d student is above average\n",c);
}

for(int i=0;i<len;i++){
    if(arr[i]!=20){
printf("marks : %f \n" ,(arr[i]+1.5));
    }

}

}