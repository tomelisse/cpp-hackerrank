#include <cstdio>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    set<int> s;
    int q, t, x;
    scanf("%d", &q);
    for(int i = 0; i < q; i++){
	scanf("%d %d", &t, &x);
	switch(t){
	    case 1:
		s.insert(x);
		break;
	    case 2:
		s.erase(x);
		break;
	    case 3:
		printf((s.find(x) == s.end()) ? "No\n" : "Yes\n");
		break;
	}
    }
    return 0;
}
