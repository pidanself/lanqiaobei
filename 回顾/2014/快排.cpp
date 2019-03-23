//©Леей╣ож
 
#include<iostream>
using namespace std;

void quicksort(int a[],int l,int r){
	if(l>=r) return;
	int t=a[l];
	int i=l,j=r;
	while(i<j){
		
		while(i<j&&a[j]>=t){
			j--;
		}
		if(i<j){
			a[i]=a[j];
			i++;
		}
		while(i<j&&a[i]<=t){
			i++;
		}
		if(i<j){
			a[j]=a[i];
			j--;
		}
		
	}
	a[i]=t;
	quicksort(a,l,i-1);
	quicksort(a,i+1,r);
} 

int main(){

	int a[10]={1,3,4,25,6,56,33,15,22,32};
	quicksort(a,0,9);
	for(int i=0;i<10;i++){
		cout<<a[i]<<endl;
	}

	return 0;
}

