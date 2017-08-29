#include <cstdio>
#include <vector>
#include <algorithm> 
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
    std::sort(v.begin(), v.end());
    for(int i = 0; i < n; i++)
	printf("%d ", v[i]);
    return 0;
}
