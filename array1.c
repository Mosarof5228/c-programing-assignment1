#include<stdio.h>
int main(){
//  int ages[]={20,22,18,35,48,26,87,70};  
// for(int i=7;i>=0;i--){
//     printf("%d\n",ages[i]);
// }

// for(int i=0;i<8;i++){
//     printf("%d\n",ages[i]);
// }


 int ages[]={20,22,18,100,35,48,26,87,70,1};
 int size=sizeof(ages);
//  printf("size of ages is: %d\n",size);
 int length=sizeof(ages)/sizeof(ages[0]);
//  printf("length is : %d",length);
int lowesetAge=ages[0];

// for(int i=0;i<length;i++){
//     if(lowesetAge>ages[i]){
//         lowesetAge=ages[i];
//     }
// }
// printf("lowest age is: %d",lowesetAge);
int highestAge=ages[0];
for(int i=0;i<length;i++){
    if(highestAge<ages[i]){
        highestAge=ages[i];
    }
}
printf("highest ages is: %d",highestAge);


}