#include<bits/stdc++.h>
using namespace std;

class Box{
    private:
	long long l, b, h;
    public:
	Box(){
	    l = 0;
	    b = 0;
	    h = 0;
	}
        Box(int x, int y, int z){
	    l = x;
	    b = y;
	    h = z;
	}
        Box(Box &B){
	    l = B.getLength();
	    b = B.getBreadth();
	    h = B.getHeight();
	}
	int getLength(){
	    return l;
	}
	int getBreadth(){
	    return b;
	}
	int getHeight(){
	    return h;
	}
	long long CalculateVolume(){
	    return l*b*h;
	}
	bool operator<(Box& Bo){
	    int L = Bo.getLength();
	    int B = Bo.getBreadth();
	    int H = Bo.getHeight();
	    return (l < L) || (b < B && l == L) || (h < H && b == B && l == L);
	}
	friend ostream &operator<<(ostream &out, Box &B){
	    out << B.getLength() << " " << B.getBreadth() << " " << B.getHeight();
	    return out;
	}            
};

void check2()
{
    int n;
    cin>>n;
    Box temp;
    for(int i=0;i<n;i++)
    {
	int type;
	cin>>type;
	if(type ==1)
	{
	    cout<<temp<<endl;
	}
	if(type == 2)
	{
	    int l,b,h;
	    cin>>l>>b>>h;
	    Box NewBox(l,b,h);
	    temp=NewBox;
	    cout<<temp<<endl;
	}
	if(type==3)
	{
	    int l,b,h;
	    cin>>l>>b>>h;
	    Box NewBox(l,b,h);
	    if(NewBox<temp)
	    {
		cout<<"Lesser\n";
	    }
	    else
	    {
	        cout<<"Greater\n";
	    }
	}
	if(type==4)
	{
	    cout<<temp.CalculateVolume()<<endl;
	}
	if(type==5)
	{
	    Box NewBox(temp);
	    cout<<NewBox<<endl;
	}
    }
}

int main()
{
    check2();
}
