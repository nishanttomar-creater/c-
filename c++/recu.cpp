#include<iostream>
using namespace std;

void rep(string s){
    if(s.length()==0){
        return;
    }
    if(s[0]=='p' && s[1]=='i'){
        cout<<"3.14";
        rep(s.substr(2));

    }else{
        cout<<s[0];
        rep(s.substr(1));

    }
}
void tower( int n, char s, char dest, char hel){
    if(n==0){
        return;
    }
    tower(n-1,s,hel,dest);
    cout<<"move from source to destination"<<s<< "to"<< dest<<endl;
    tower(n-1,hel,dest,s);

}
string dup(string c){
    if(c.length()==0){
        return "";
    }
    char ch= c[0];
    string ans= dup(c.substr(1));
    if(ch==ans[0]){
        return ans;
    }else{
        return (ch+ans);
    }



}
string dis(string s){
    if(s.length()==0){
        return "";
    }
    char a =s[0];
    string ans=dis(s.substr(1));
    if(a=='x' || a=='X'){
        return ans+a;

    }
    else{
        return a+ans;
    }
}
string sub(string s, string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return "";


    }
    char c=s[0];
    string as=(s.substr(1));
    sub(as,ans);
    sub(as,ans+c);

}
int main(){
    
    //rev(n);
    //rep("pipipxxxxpipi");
    //tower(5,'a','c','b');
    //cout<<dup("deeepakkallllaala");
    //cout<<dis("mymoviesxxxxnameXXyup");
    sub("ABC","");




    return 0;

}
