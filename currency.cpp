#include<bits/stdc++.h>
using namespace std;
void PoundtoRs(float a){
    cout<<a*106.99<<endl;
}
void RstoPound(float a){
    cout<<a*0.0093<<endl;
}
void RstoUSD(float a){
    cout<<a*0.012<<endl;
}
void USDtoRS(float a){
    cout<<a*83.23<<endl;
}
void RstoYuan(float a){
    cout<<a*0.087<<endl;
}
void YuantoRs(float a){
    cout<<a*11.48<<endl;
}

int main()
{
    PoundtoRs(10);
    RstoPound(200);
    RstoUSD(300);
    USDtoRS(99);
    RstoYuan(43);
    YuantoRs(23);

    return 0;
}