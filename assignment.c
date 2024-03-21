#include<stdio.h>
int calculateSquare(int number){
    int square= number*number;
    return square;
}
int main(){
{
int number, square;
printf("Enter any number: ");
scanf("%d", &number);
 square=calculateSquare(number);
printf("Square of %d is %d",number,square);
return 0;
}
}










// printf("Please enter a last number: ");
//     int n,sum=0;
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         sum=sum+(i*i);
//     }
//     printf("Total sum is: %d",sum);
// }








    // printf("Please enter a last number: ");
    // int n,sum=0;
    // scanf("%d",&n);
    // for(int i=1;i<=n;i++){
    //     sum=sum+i;
    // }
    // printf("Total sum is: %d",sum);
    // }



    // printf("Please enter a last number: ");
    // int n,sum=0;
    // scanf("%d",&n);
    // for(int i=1;i<=n;i++){
    //     sum=sum+(i*i);
    // }
    // printf("Total sum is: %d",sum);




// int num1,num2,num3;
// printf("Please enter three integer number: ");
// scanf("%d %d %d",&num1,&num2,&num3);
// if(num1>=num2 && num1>=num3){
//     printf("num1 is maximum number: %d",num1);
// }
// else if(num2>=num1 && num2>=num3){
//     printf("num2 is maximum number: %d",num2);
// }
// else{
//     printf("num3 is maximum number: %d",num3);
// }





/*
int row=4;
int col=3;
for(int i=0;i<row;i++){
    for(int c=0;c<col;c++){
        printf("#");
    }
printf("\n");
}
*/

/*


int n,row,col;
printf("Enter N= ");
scanf("%d",&n);

for(row=1;row<=n;row++){
    for(col=1;col<=row;col++){
        printf("%d",col);
    }
    printf("\n");
}
*/


// int n=4,row ,col;

// for(row=1;row<=n;row++){
//     for(col=0;col<3;col++){
//         printf("#");
//     }
//     printf("\n");
// }






