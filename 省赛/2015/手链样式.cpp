/*
ans=27720 
������ʽ

С����3�ź�ɺ����4�Ű�ɺ����5�Ż���觡�
���������Ǵ���һȦ��Ϊ�������͸�Ů���ѡ�
����С����֪�����������������������
ת����ת��һ�������ж��ٲ�ͬ�������ʽ�أ�

�����ύ����������Ҫ��д�κζ��������
��˵���Ե����֡�
*/ 
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int ans=0;
int main(){
	string s="aaabbbbccccc";
	vector<string> ss;
	do{
		int i=0;
		for(i=0;i<ss.size();i++){
			if(ss[i].find(s)!=string::npos) break;
		}
		if(i!=ss.size()){
			continue;
		}
		string s1=s+s;
		ss.push_back(s1);
		reverse(s1.begin(),s1.end());
		ss.push_back(s1);
		ans++; 
	}while(next_permutation(s.begin(),s.end()));
	cout<<ans;
	return 0;
}

