#include<bits/stdc++.h>
using namespace std;

struct student {
    string name;
    int marks[5];
};

void bs(float arr[],int n){
    while(--n){
        for(int i=0;i<n;i++){
            if(arr[i]>arr[i+1]){
                float c= arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=c;
            }
        }
    }
}

int main(){

int n=5;
student *s = new student[n];
float *avg = new float[n];

for(int i=0;i<n;i++){
    cout<<"enter the name of "<<i+1<<" student"<<endl;
    cin>> s[i].name;
    avg[i]=0;
    cout<<"enter the marks of "<<i+1<<" student"<<endl;
    for(int j=0;j<n;j++){
        cin>> s[i].marks[j];
        avg[i]+=s[i].marks[j];
    }
    avg[i]/=n;
}

cout<<endl;

for (int i = 0; i < n; i++){
    cout<< avg[i] << " ";
}
cout<<endl;
cout<<endl;

bs(avg, n);

for (int i = 0; i < n; i++){
    cout<< avg[i] << "  ";
}
cout<<endl;

}