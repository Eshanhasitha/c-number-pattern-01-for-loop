#include<stdio.h>
int main(){
    int a,b;
    //variable a is used to store the number of rows
    printf("Enter a number: ");
    scanf("%d", &a);


    //outer loop is used to print the number of rows
    for(a;a>=1;a--){

        b=a;

        //inner loop is used to print the numbers in each row
        for(b;b>=1;b--)
        {
            printf("%d",b);
        }

        printf("\n");
        
    }
}
