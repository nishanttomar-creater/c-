#include<iostream>
using namespace std;
class student{
        string name;
        public:
        int age;
        bool gend;

        student(string s){
            name=s;
        }
        void set(string s){
            name=s;
        }

        void info(){
            cout<<"name="<<name<<endl;
            cout<<"age="<<age<<endl;
            cout<<"gender="<<gend<<endl;

        }
    };
int main(){
    // student a;
    // a.name="nishant";
    // a.age=19;
    // a.gend=1;
    student arr[3];
    for(int i=0;i<3;i++){
        string s;
        cin>>s;
        arr[i].set(s);
        cin>>arr[i].age;
        cin>>arr[i].gend;
    }


    for(int i=0;i<3;i++){
        arr[i].info();
    }

    
}
