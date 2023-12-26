//Write a Program to perform the addition operation of two 1D arrays & store it in another array.
// Keep in mind that both array sizes must be the same.
#include<stdio.h>
main(){
	
	int i,n;
	int a[100],b[100],c[100];
	
	printf("enter the size of array:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		printf("Enter a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++){
		printf("Enter b[%d] : ",i);
		scanf("%d",&b[i]);
	}
	printf("array c is:");
	for(i=0;i<n;i++){
		c[i]=a[i]+b[i];
		printf("%d ",c[i]);
	}
	
}
