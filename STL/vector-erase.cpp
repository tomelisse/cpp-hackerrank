#include <cstdio>
#include <vector>
using namespace std;


int main() {
    int n;
    vector<int> v;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
	int x;
	scanf("%d", &x);
	v.push_back(x);
    }
    int k, i, j;
    scanf("%d", &k);
    v.erase(v.begin() + k - 1);
    scanf("%d %d", &i, &j);
    v.erase(v.begin() + i - 1, v.begin() + j - 1);
    int m = v.size();
    printf("%d\n", m);
    for(int i = 0; i < m; i++)
	printf("%d ", v[i]);
    return 0;
}
