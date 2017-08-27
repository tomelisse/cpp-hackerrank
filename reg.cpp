#include <iostream>
#include <string>
#include <regex>
using namespace std;

int main(){
    string s;
    cin >> s;
    regex r(("a+"));
    smatch m;
    if(regex_search(s, m, r)){
	printf("found");
	cout << m.str() << endl;
    }
    // for(auto v: m) cout << v << endl;
    // cout << m.str() << endl;
    return 0;
}
