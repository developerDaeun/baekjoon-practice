#include <cstdio>
#include <algorithm>
using namespace std;
#pragma warning (disable : 4996)

int main() {

	int P = 0, L = 0, V = 0, i = 1;

	while(1){
		scanf("%d %d %d", &L, &P, &V);
		if (L == 0 && P == 0 && V == 0)
			break;
		
		printf("Case %d: %d\n", i++, ((V / P) * L) + min(V % P, L));
	}

	return 0;
}