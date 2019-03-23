// 
#include<iostream>
#include<sstream>
#include<algorithm>
using namespace std;
void s2i(string str,int &num){
	stringstream sstr;
	sstr<<str;
	sstr>>num;
}
int main(){
	int data[10000];
	int line,index=0;
	cin>>line;
	fflush(stdin);
	for(int i=0;i<line;i++){
		string s;
		getline(cin,s);
		istringstream str(s);
		string tmp;
		while(getline(str,tmp,' ')){
			
			s2i(tmp,data[index++]);
		}
		
	} 
	
	sort(data,data+index);
	for(int i=1;i<index;i++){
		if(data[i]==data[i-1]){
			cout<<data[i]<<endl;
		}
		if(data[i]==data[i-1]+2){
			cout<<data[i]-1<<endl;
		}
	}
	return 0;
}

