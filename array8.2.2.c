/*
Q.2 Write a Program to find leap years between two given numbers and store them in an array. And then print that array.
For example,
Input:
Enter the first number: 2002

Enter the second number: 2024

enter start yeras :- 2002
enter end yeras :- 2024
2002---2024
2004
2008
2012
2016
2020
2024
*/

#include <stdio.h>

int main() {
   
    int start,end;
   
    printf("enter start yeras :- ");
    scanf("%d",&start);
    printf("enter end yeras :- ");
    scanf("%d",&end);
   
    int a[100];
    int c=0;
    int j,i;
   
    for(j=start; j<=end; j++){
        if((j%4==0 && j%100!=0) || (j%400==0)){
            a[c]=j;
            c++;
        }
    }
    printf("%d---%d\n",start,end);
    for(i=0; i<c; i++){
        printf("%d\n",a[i]);
    }
    printf("\n");
}

