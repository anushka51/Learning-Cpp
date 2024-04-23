//WAP in c++ to find the simple interest.
#include<iostream>
using namespace std;
int main(){
	int p,r,t,si;
	cout<<"Enter the values of p,r and t";
	cin>>p>>r>>t;
	si=p*r*t/100;
	cout<<"The simple interest is"<<si;
	return 0;
}
