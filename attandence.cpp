#include<bits/stdc++.h>
using namespace std;
int main ()
{
    float classes_held,classes_attended;
    cout<<"Enter the number of classes held: "<<endl;
    cin>>classes_held;
    cout<<"Enter the number of classes attended: "<<endl;
    cin>>classes_attended;


   float Total_percent = (classes_attended/classes_held)*100;

    if (Total_percent >= 75){
        cout<<"You are allowed to sit in exam and you attandence is "<<Total_percent<<"%"<<endl;
    }
    else {
        cout<<"You are not allowed to sit in exam Because your attandance is "<<Total_percent<<"%"<<endl;
    }
    return 0;
}