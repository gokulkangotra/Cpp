#include<bits/stdc++.h>
using namespace std;
int main()
{
    //Braced intilizers
    //Variable may contain random garbage variable. Warning
    int elephant_count;
    int lion_count; // Initializers to zero
    int dog_count; // Initializers to 10
    int cat_count; //Intilializers to 15
    // Can use expression as Initlizers 
    int domesticated_animal {dog_count + cat_count};

    //int new_number{doesnt_exixits};
    // int narrowing_conversions {2.9}; //Complier error
    cout<<"elephant count: "<<elephant_count<<endl;
    cout<<"Lion count : "<<lion_count<<endl;
    cout<<"Dog count : "<<dog_count<<endl;
    cout<<"cat count : "<<cat_count<<endl;
    cout<<"Domesticated Animals Count : "<<domesticated_animal<<endl;

return 0;
}
 
    

}