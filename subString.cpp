//#include<iostream>
//using namespace std;
//void subString(string s,string ans){
//	if(s.length()==0){
//		cout<<ans<<endl;
//		return;
//	}
//	char ch=s[0];
//	string ros=s.substr(1);
//	subString(ros,ans);
//	subString(ros,ans+ch);
//	
//}
//int main(){
//	subString("ABC"," ");
//	return 0;
//	
//}
#include<iostream>
using namespace std;
void func(int n){
	if(n==0)
		return;
	
	func(n-1);
	cout<<n<<endl;
}

int main(){
	func(5);
	return 0;
}
