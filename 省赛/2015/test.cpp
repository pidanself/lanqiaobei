#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;
int sum = 0;
int ans = 0;
void dfs(int cnt)
{
    if(sum > 13 || cnt > 13)   //����жϲ���ɾ�������򡣡���������Ϊʲô����Ϊ�������������������ڵ�ʱ���return����Щʱ��һֱ��һֱ��Ҳû��return������Ҫ���������
        return ;
    if(sum == 13 && cnt == 13)
    {
        ans++;
        return;
    }
    for(int i=0; i<5; i++)
    {
        sum += i;
        dfs(cnt+1);
        sum -= i;
    }
}

int main()
{
    dfs(0);
    cout << ans << endl;
    return 0;
}

