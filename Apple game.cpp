#include<iostream>
using namespace std;
int main(){
	int user,apple=21,computer,turn=0;
	cout<<"\t******** WELCOME TO APPLE GAME*************"<<endl;
	cout<<"\t number of apples are 21"<<endl;
	cout<<"You can choose only min 1 apple and max 2 apple,if you choose other value then enter again"<<endl;
	while(apple!=1){
		if(turn==0){
			cout<"Choose the number";
			cin>>user;
			if(user<0||user>4){
				cout<<"follow the rule"<<endl;
				continue;
			}
			apple= apple-user;
			cout<<"Remaining apples:"<<apple<<endl;
			turn=1;
		}
		if(turn==1){
			computer=5-user;
			cout<<"computer choose:"<<computer<<endl;
			apple=apple-computer;
			cout<<"Remaining apple:"<<apple<<endl;
			turn=0;
		}
			if(apple==1){
				break;
			}
		}
		if("apple==1 && turn==0")
			cout<<"You are looser";
	else if(apple==1&& turn==1)
		cout<<"Computer loose";
	
	return 0;
}


