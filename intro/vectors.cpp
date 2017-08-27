#include <cstdio>
#include <vector>
using namespace std;


void print(vector<int> v){
    for(int i = 0; i < v.size(); i++)
	printf("%d ", v[i]);
    printf("\n");
}

int main() {
    // int a[3] = {1, 2, 3};
    // vector<int> v(a, a+3);
    vector<int> v = {1,2,3};
    v.push_back(6);
    v.push_back(2);
    print(v);
    v.pop_back();
    print(v);
    v.insert(v.begin()+1,9);
    print(v);
    v.erase(v.begin()+3);
    print(v);
    vector<int> w = {2,3,4};
    v.swap(w);
    print(v);
    print(w);
    v.emplace(v.begin()+1,5);
    print(v);
    printf("%d\n",v.at(1));
    return 0;
}
