#include <iostream>
using namespace std;

int main(){
	int a,b;
	char belgi;
	cout<<"birinchi sonni kirit" ; cin>>a;
	cout<<"ikkinchi sonni kirit" ; cin>>b;
	cout<<"belgini kirit" ;  cin>>belgi;
	if (belgi== '+'){
	cout<<a+b<<endl;
	}else if(belgi== '-'){
		cout<<a-b<<endl;
    }else if(belgi== '*'){
    	cout<<a*b<<endl;			
	}else if(belgi== '/'){	cout<<a/b<<endl;
    }
	return 0;	
}