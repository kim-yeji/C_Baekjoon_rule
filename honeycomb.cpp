#include<stdio.h>
long long num,ans=1,cnt;
int main() {
	scanf("%lld", &num);
	for (int i = 1; cnt * 6 + 1 < num; i++) {
		cnt += i;
		ans++;
	}
	printf("%lld", ans);
	return 0;
}