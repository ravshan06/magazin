#include <iostream>
using namespace std;

int main(){
	string login,password;
	int sanovchi;
	
	while(sanovchi<4){
		cout<<"loginni kiriting:"; cin>>login;
		cout<<"passwordni kiriting:"; cin>>password;
	if(login=="ravshan" && password=="10101010"){
		cout<<"xush kelibsiz";
		break;
	}else{
		cout<<endl;
		sleep(5);
		cout<<"qaytadan urunib ko'rinng";
		sleep(5);
		system("CLS");
		sanovchi++;
	}
	if(sanovchi==4){
		cout<<"urinishlar soni ko'payib ketti,5 minutdan keyin urunib ko'ring"<<endl;
		return 0;
}	
