#include <iostream>
#include <map>
using namespace std;

int main() {
    int n, t, q, y;
    map<string, int> m;
    string x;
    cin >> n;
    for(int i = 0; i < n; i++){
	cin >> t >> x;
	switch(t){
	    case 1:
		cin >> y;
		m[x] += y;
		break;
	    case 2:
		m.erase(x);
		break;
	    case 3:
		cout << m[x] << endl;
	}
    }
    return 0;
}
