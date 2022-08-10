#include<iostream>
#include <string>
using namespace std;
int main(){

int n, i;
string s1 = "I hate that";
string s2 = "I love that";

cin>>n;


for(i=1; i<n; i++){
	if(i%2 == 0){
			cout<<"I love that ";
	} else{
	    cout<<"I hate that ";
	}
}


if(n%2==0){
	cout<<"I love it";
} else{
	cout<<"I hate it";

}





}
