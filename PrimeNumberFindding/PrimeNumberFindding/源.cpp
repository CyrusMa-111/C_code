#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <math.h>
int main()
{
	int n = 0;
	int d = 0;
	for (n = 100; n <= 200; n++)
	{
		int is_prime = 1;
		// 每次检查一个新的 n 之前，先假设它是素数 (1代表是，0代表不是)
		int limit = (int)sqrt(n);
		//关键优化：只用算一次平方根，并强制转换为 int(会自动向下取整)
		for (d = 2; d <= limit; d++)
		{
			if (n % d == 0)
			//如果能被整除，说明不是素数
			{
				is_prime = 0;
				// 标记为不是素数
				break;
				// 既然已经查出它不是素数了，就不用继续往下除了，直接跳出内层循环
			}
		}
		if (is_prime == 1)
		//如果 is_prime 依然是 1，说明刚才的内层循环里没有任何一个数能整除它
		{
			printf("%d  ",n);
		}
			
	}
	return 0;
}