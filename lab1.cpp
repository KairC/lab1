#include <iostream>
using namespace std;

int main(){
	int num=0;
	cin>>num;
	cout<<num<<" ";
	while(num!=1){
		if(num%2 == 1)
		{
			num=3*num+1;
			cout<<num<<" ";
		}
		else if(num%2 != 1)
		{
			num=num/2;
			cout<<num<<" ";
		}
	}
	cout<<endl;
	return 0;
}
