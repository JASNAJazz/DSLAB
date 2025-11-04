#include<stdio.h>
int main(){
	int n,i;
	printf("enter number of elements :");
	scanf("%d",&n);
	int arr[n];
	printf("enter %d elements :\n",n);
	for(i=0;i<n;i++){
	scanf("%d",&arr[i]);
	}
	int max=arr[0];
	for(i=0;i<n;i++){
	if(arr[i] > max){
	max=arr[i];		
	}}
	printf("maximum elements in the array =%d \n",max);
	return 0;
	}

