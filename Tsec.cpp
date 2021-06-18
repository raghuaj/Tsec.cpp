#include<iostream>
using namespace std;
class hours{ 
protected:
int hours;
int min;
int sec;
int tsec;
};
class totaltime: public hours{
public:
display(){

cout<<"enter total time in terms of hours:minutes:sec"<<endl;
cin>>hours>>min>>sec;
tsec=hours*60*60+min*60+sec;
cout<<tsec<<endl;
}
};
main(){
	 totaltime t;
	t.display();
}
