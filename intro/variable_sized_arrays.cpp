#include <cstdio>
#include <vector>
using namespace std;


int main() {
    int n, q;
    scanf("%d", &n);
    scanf("%d", &q);
    vector<vector<int> > v;
    for(int i = 0; i < n; i++){
	int k;
	scanf("%d", &k);
	vector<int> a;
	for(int j = 0; j < k; j++){
	    int x;
	    scanf("%d", &x);
	    a.push_back(x);
	}
	v.push_back(a);
    }
    for(int k = 0; k < n; k++){
	int i, j;
	scanf("%d %d", &i, &j);
	printf("%d\n", v[i][j]);
    }
    return 0;
}
