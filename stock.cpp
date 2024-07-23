#include<bits/stdc++.h>
using namespace std;
    
class Solution {
public:
int maxProfit(vector<int>& prices) {
/*int Price = prices[0];
        int profit = 0;
        int i;
        for(i=0;i<prices.size();i++){
            if(Price>prices[i]){
                Price = prices[i];
            }
            else{
            profit=max(profit,prices[i]-Price);
            }
        }
        return profit;
    }    
  */
    int min=prices[0];
    int sum=0;
    for(int i=1;i<prices.size();i++){
        if(sum<(prices[i]-min)){
            sum=prices[i]-min;
        }
        if(prices[i]<min){
            min=prices[i];
        }
    }
    return sum; 
}     
};
