//
// Created by zhengwei.
//
/*
垒骰子

赌圣atm晚年迷恋上了垒骰子，就是把骰子一个垒在另一个上边，不能歪歪扭扭，要垒成方柱体。
经过长期观察，atm 发现了稳定骰子的奥秘：有些数字的面贴着会互相排斥！
我们先来规范一下骰子：1 的对面是 4，2 的对面是 5，3 的对面是 6。
假设有 m 组互斥现象，每组中的那两个数字的面紧贴在一起，骰子就不能稳定的垒起来。
atm想计算一下有多少种不同的可能的垒骰子方式。
两种垒骰子方式相同，当且仅当这两种方式中对应高度的骰子的对应数字的朝向都相同。
由于方案数可能过多，请输出模 10^9 + 7 的结果。

不要小看了 atm 的骰子数量哦～

「输入格式」
第一行两个整数 n m
n表示骰子数目
接下来 m 行，每行两个整数 a b ，表示 a 和 b 数字不能紧贴在一起。

「输出格式」
一行一个数，表示答案模 10^9 + 7 的结果。

「样例输入」
2 1
1 2

「样例输出」
544

「数据范围」
对于 30% 的数据：n <= 5
对于 60% 的数据：n <= 100
对于 100% 的数据：0 < n <= 10^9, m <= 36


资源约定：
峰值内存消耗 < 256M
CPU消耗  < 2000ms


请严格按要求输出，不要画蛇添足地打印类似：“请您输入...” 的多余内容。

所有代码放在同一个源文件中，调试通过后，拷贝提交该源码。

注意: main函数需要返回0
注意: 只使用ANSI C/ANSI C++ 标准，不要调用依赖于编译环境或操作系统的特殊函数。
注意: 所有依赖的函数必须明确地在源文件中 #include <xxx>， 不能通过工程设置而省略常用头文件。

提交时，注意选择所期望的编译器类型。


*/
#define MOD 1000000007

#include <map>
#include <vector>
#include <iostream>

using namespace std;

long long dp[2][7];//dp[i][j]表示有i层，限定朝上的数字为j的稳定方案数
int n, m;
bool conflict[7][7];
map<int, int> op;

void init() {
    op[1] = 4;
    op[4] = 1;
    op[2] = 5;
    op[5] = 2;
    op[3] = 6;
    op[6] = 3;
}

int main(int argc, const char *argv[]) {
    init();
    scanf("%d %d", &n, &m);
    for (int i = 0; i < m; ++i) {
        int a, b;
        scanf("%d %d", &a, &b);
        conflict[a][b] = true;
        conflict[b][a] = true;
    }
//    输入完成
    for (int j = 1; j <= 6; ++j) {
        dp[0][j] = 1;
    }

    int cur = 0;
//    迭代层数
    for (int level = 2; level <= n; ++level) {
        cur = 1 - cur;
//     尝试将6个面放在当前一层朝上的方向
        for (int j = 1; j <= 6; ++j) {
            dp[cur][j] = 0;
//            将与op[j]不冲突的上一层格子里面的数累加起来
            for (int i = 1; i <= 6; ++i) {
                if (conflict[op[j]][i])continue;//冲突的面朝上是不可取的
                dp[cur][j] = (dp[cur][j] + dp[1 - cur][i]) % MOD;
            }
        }
    }
    long long sum = 0;
    for (int k = 1; k <= 6; ++k) {
        sum = (sum + dp[cur][k]) % MOD;
    }

//    快速幂，求4的n次方
    long long ans = 1;
    long long tmp = 4;
    long long p = n;

    while (p != 0) {
        if (p & 1 == 1) ans = (ans * tmp) % MOD;
        tmp = (tmp * tmp) % MOD;
        p >>= 1;
    }
    printf("%d\n", (sum * ans) % MOD);
    return 0;
}
