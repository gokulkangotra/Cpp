#include<bits/stdc++.h>
using namespace std;
int main()
{
    bool red_light {false};
    bool green_light{true};
    if(red_light == true){
        cout<<"STOP!" << endl;
    }
    else {
        cout<<"Go through! "<< endl;
    }

    if (green_light){
        cout<<"The light is green! " << endl;
    }
    else {
        cout<<"The light is not Green! "<<endl;
    }
    cout<<"sizeof(bool) : "<<sizeof(bool) << endl;
    cout<< endl;
    cout<<"red_light : "<<red_light << endl;
    cout<<"green_light: "<<green_light<<endl;
    cout<<boolalpha;
    cout<<"red_light : "<<red_light<< endl;
    cout<<"green_light : "<<green_light <<endl;

    return 0;
}