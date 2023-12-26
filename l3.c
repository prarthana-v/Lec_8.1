// Write a Program to find the average of a 1D array.
#include<stdio.h>
main(){
	
	int i,n;
	int a[100],sum=0,avg;
	
	printf("enter the size of array:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		printf("Enter a[%d] : ",i);
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	
	avg=sum/n;
	printf("Average of an array: %d ",avg);
	
}
