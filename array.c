#include<stdio.h>
int main(){
    // int myNumbers[]={10,25,50,78,100};
//      myNumbers[2]=500;
   
//    for(int i=0;i<4;i++){
//     printf("%d\n",myNumbers[i]);
//    }

// for(int i=3;i>=0;i--){
//     printf("End to First: %d\n",myNumbers[i]);
// }
    
// printf("Size of this array: %lu",sizeof(myNumbers)/sizeof(myNumbers[0]));

// printf(" arry size is: %lu\n",sizeof(myNumbers));
// printf("Other is : %d\n",sizeof(myNumbers[0]));
// printf("Array Length is: %d",sizeof(myNumbers)/sizeof(myNumbers[0]));
  /* int myNumbers[]={10,25,50,78,100};
   int length=sizeof(myNumbers)/sizeof(myNumbers[0]);
    printf("Length is: %d\n",length);
    for(int i=0;i<length;i++){
        printf("%d\n",myNumbers[i]);
    }
    */

//    int ages[]={20,22,18,35,48,26,87,70};
//    int length=sizeof(ages)/sizeof(ages[0]);
//     int sum=0;
//     for(int i=0;i<length;i++){
//         sum=sum+ages[i];
//     }
//     printf("%d\n",sum);
//     float avg=sum/length;
//     printf("Average is: %.2f",avg);

int ages[]={20,22,18,35,48,26,87,70};
int length=sizeof(ages)/sizeof(ages[0]);


int lowestAge=ages[0];
for(int i=0;i<length;i++){
    if(lowestAge>ages[i]){
        lowestAge=ages[i];
    }
}
printf("%d",lowestAge);




}