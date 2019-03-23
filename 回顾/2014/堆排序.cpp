//堆排序实现
//很难理解
//但我偏要勉强
//只用来理解算法，傻子才自己写，你要会用queue!!! 
//#include<iostream>
//using namespace std;
//int a[1000];
////最小堆 
//void insert(int a[],int &len,int num){
//	a[len]=num;
//	int i=len;
//	len++;
//	while(i>0){
//		int pa=(i-1)/2;
//		if(a[pa]>a[i]){
//			swap(a[pa],a[i]);
//			i=pa;
//		}
//		else{
//			break;
//		}
//		
//	}
//}
//
////提取最小值
//int pop(int a[],int &len){
//	int ans=a[0];
//	a[0]=a[len-1];
//	len--;
//	int i=0;
//	while(i<=len-1){
//		int son=2*i+1;
//		if(son>len-1){
//			break;
//		}
//		if(son+1<=len-1&&a[son]>a[son+1]){
//			son++;
//		}
//		if(a[i]>a[son]){
//			swap(a[i],a[son]);
//		}
//		else{
//			break;
//		}
//		i=son;
//	}
//	return ans;
//} 
//
//int main(){
//	int len=0;
//	insert(a,len,1);
//	insert(a,len,10);
//	insert(a,len,6);
//	insert(a,len,23);
//	insert(a,len,12);
//	insert(a,len,4);
//	int j=len;
//	
//	for(int i=0;i<j;i++){
//		int o=pop(a,len);
//		cout<<o<<endl;
//	}
//	
//	return 0;
//}

//利用queue中堆
#include<iostream>
#include<queue>
#include<vector>
using namespace std;
priority_queue<int,vector<int>,greater<int> > m;

int main(){
	int a[10]={1,10,6,23,12,4};
	for(int i=0;a[i]!=0;i++){
		m.push(a[i]);
	}
	for(int i=0;i<a[i]!=0;i++){
		cout<<m.top()<<endl;
		m.pop();
	}
	
	
	return 0;
}


 
