#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    stringstream ss(str);
    vector<int> v;
    char c;
    int x;
    while(ss >> x){
	v.push_back(x);
	ss >> c;
    }
    return v;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
	cout << integers[i] << "\n";
    }
    return 0;
}