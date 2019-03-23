#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int ans=0;
vector <string> m; 

int main(){
	string s="aaabbbbccccc";
	do{
		
		for(int i=0;i<m.size();i++){
			if(m[i].find(s)!=string::npos){
				goto finish;
			}
		}
		
		goto ok;
		finish:
			continue;
		ok:
			m.push_back(s+s);
			string s1=s;
			reverse(s1.begin(),s1.end());
			m.push_back(s1+s1);
			ans++;
			
		
	}while(next_permutation(s.begin(),s.end()));

	cout<<ans;
	return 0;
}

