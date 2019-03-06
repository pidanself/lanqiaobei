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
    if(sum > 13 || cnt > 13)   //这个判断不能删掉，否则。。。至于是为什么，因为下面是两个条件都等于的时候才return，有些时候一直加一直加也没有return，所以要加上这个。
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

