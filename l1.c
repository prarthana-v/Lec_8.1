#include<stdio.h>
main(){
	// Write a Program to find the length of a 1D array.
	
	int i,n,count=0;
	int a[100];
	
	printf("enter the size of array:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		printf("enter a[%d] : ",i);
		scanf("%d",&a[i]);
		count++;
	}

	printf("Length of an Array: %d",count);
}
