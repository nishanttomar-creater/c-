#include<iostream>
using namespace std;
int getbit(int n,int key){
    return n & (~(1<<key));
}
int main(){
    cout<<getbit(5,2);
    return 0;


}