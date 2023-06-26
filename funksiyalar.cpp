#include <iostream>
using namespace std;
int qoshish(int x,int y){
	return x+y;
int ayirish(int x,int y){
	return x-y;
int kopaytirish(int x,int y){
	return x*y;
int bolish(int x, int y){
}
}	
}
}
int main(){
	int x,y;
	char belgi;
	cout<<"birinchi sonni kirit: "<<endl; cin>>x;
	cout<<"ikkinchi sonni kirit: "<<endl; cin>>y;
	cout<<"belgini kirit: "<<endl; cin>>belgi;
	
	if(belgi == '+'){
		cout<<qoshish(x,y)<<endl;
		
		}else if(belgi == '-'){
	    cout<<ayirish(x,y)<<endl;
	    
		}else if(belgi =='*'){
		cout<<kopaytirish(x,y)<<endl;
			
		}else if(belgi =='/'){
		cout<<bolish(x,y)<<endl;	
		}
}
return 0;
		
}