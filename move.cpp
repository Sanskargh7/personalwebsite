/*#include<iostream>
using namespace std;
string moveString(string s){
    if(s.length()==0){
        return " ";
    }
    char ch=s[0];
    string ans=moveString(s.substr(1));
    if(ch=='x'){
        return ans+ch;
    }
    return ch+ans;
}
int main(){
    moveString("neerajneegam");
    return 0;
}*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    cout<<n<<endl;
}
