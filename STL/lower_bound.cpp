#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    int n, vi;
    scanf("%d", &n);
    vector<int> v;
    for(int i = 0; i < n; i++){
	scanf("%d", &vi);
	v.push_back(vi);
    }
    int q, x;
    std::vector<int>::iterator k;
    scanf("%d", &q);
    for(int i = 0; i < q; i++){
	scanf("%d", &x);
	k = std::lower_bound(v.begin(), v.end(), x);
	(*k == x) ? printf("Yes ") : printf("No ");
	printf("%ld\n", k - v.begin() + 1);
    }
    return 0;
}
