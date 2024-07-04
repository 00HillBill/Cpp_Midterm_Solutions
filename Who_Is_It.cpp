#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    int ID;
    char* name;
    char sec;
    int marks;

    Student() {
        name = new char[101];
    }
    void input(){
        cin>> ID >> name >> sec >> marks;
    }
    void output(){
        cout<<ID<<" "<<name<<" "<<sec<<" "<<marks<<endl;
    }
    
};

int main(){
    int T;
    cin>>T;


    while(T--){

    Student *A= new Student();
    Student *B= new Student();
    Student *C= new Student();
    
    A->input();
    B->input();
    C->input();
    
    Student* temp=A;

    if(B->marks>temp->marks || (B->marks == temp->marks && B->ID<temp->ID)){
        temp=B;
    }
    if(C->marks>temp->marks || (C->marks == temp->marks && C->ID<temp->ID)){
       temp=C;
    }

    temp->output();
      

    }

    return 0;
}