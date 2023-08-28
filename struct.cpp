#include<bits/stdc++.h>
using namespace std;

struct student {
    string name;
    int marks[5];
};

void bs(float crt[],int indArr[],int n){
    
    for(int i=0;i<5;i++){
        indArr[i]=i; 
    }

    while(--n){
        for(int i=0;i<n;i++){
            if(crt[indArr[i]]>crt[indArr[i+1]]){
                float c= indArr[i];
                indArr[i]=indArr[i+1];
                indArr[i+1]=c;
            }
        }
    }
}

void crtInput(student s[], float crt[]){
    // we have considered max marks this time
    for(int i=0;i<5;i++){
        int max=0;
        for(int j=0;j<5;j++){
            if(s[i].marks[j]> max){
                max= s[i].marks[j];
            }
        }
        crt[i]= max;
    }
}

int main(){

int n=5;
student *s = new student[n];
float *crt = new float[n];
int* indArr = new int[5];

//Taking the input

for(int i=0;i<n;i++){
    cout<<"enter the name of "<<i+1<<" student"<<endl;
    cin>> s[i].name;    
    cout<<"enter the marks of "<<i+1<<" student"<<endl;
    for(int j=0;j<n;j++){
        cin>> s[i].marks[j];        
    }    
}

crtInput(s, crt);

cout<<endl;

// printing original criteria array

for (int i = 0; i < n; i++){
    cout<< crt[i] << " ";
}
cout<<endl;
cout<<endl;

bs(crt,indArr, n);

// printing students name and criteria after sorting

for (int i = 0; i < n; i++){
    cout<< s[indArr[i]].name << "  ";
}
cout<<endl;

for (int i = 0; i < n; i++){
    cout<< crt[indArr[i]] << "  ";
}
cout<<endl;

}