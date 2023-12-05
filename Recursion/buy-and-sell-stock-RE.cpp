#include<iostream>
#include<vector>
using namespace std;

void maxProfitFinder(vector<int>& prices, int i, int& minPrice, int& maxProfit) {
    // base
    if(i == prices.size()) return;

    // sol for one case
    if(prices[i] < minPrice) minPrice = prices[i];
    int todaysProfit = prices[i] - minPrice;
    if(todaysProfit > maxProfit) maxProfit = todaysProfit;

    // RE
    maxProfitFinder(prices, i+1, minPrice, maxProfit);
}

int main() {
    vector<int> prices{7,1,5,3,6,4};
    int minPrice = INT8_MAX;
    int maxProfit = INT8_MIN;
    maxProfitFinder(prices, 0, minPrice, maxProfit);
    
    cout <<"ans: " << maxProfit<< endl;
}