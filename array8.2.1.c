/*
Q.1 Write a Program to perform the merge operation of two 1D arrays & store it in another array. Keep in mind that both array sizes can be different.
For example,
Input:
Enter array A's size: 5

enter count :-3
enter count :-3
enter count A : 1
enter count A : 2
enter count A : 3
enter count B : 4
enter count B : 5
enter count B : 6
 output :- 1  2  3  4  5  6
 
*/

#include<stdio.h>

 int main()
{
	int a[1000],b[1000],maerg[1000];
	int n,i,n1,k;
	
	printf("enter count :-");
	scanf("%d",&n);
	printf("enter count :-");
	scanf("%d",&n1);
	a[n];
	b[n1];

	
	for(i=0; i<n; i++){
		printf("enter count A : ");
		scanf("%d",&a[i]);
	
	}
	
		for(i=0; i<n1; i++){
		printf("enter count B : ");
		scanf("%d",&b[i]);
	
	}
	for(i=0; i<n; i++){
		maerg[i]=a[i];
	}

	for(i=0; i<n; i++){
		maerg[n+i]=b[i];
	
	
	}

	for(i=0; i<n+n1; i++){
		printf("  %d",maerg[i]);
		
	}
}
