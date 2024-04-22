#include <bits/stdc++.h>
using namespace std;


string modify(string s, const unordered_set<char> &words) {
    string ans;
    for(auto e : s) {
        if(!words.count(e)) {
            ans += e;
        }
    }
    return ans;
}

void Q1() {
    string operators  ,tmp;
    char word;
    int number;
    cout<<"enter: "<<endl;

    getline(cin,operators);
    unordered_set<char>words;
    istringstream iss(operators);
    while( iss>>word) {
        words.insert(word);
    }
    cin>>number;

    vector<string>targets(number);
    for(int i = 0 ; i < number ; i++) {
        cin>>tmp;
        targets[i] = modify(tmp,words);
    }

    for(auto e : targets) cout << e <<endl;
}

bool searchM(vector<vector<string>>matrix, string s) {
    return 0;
}

void Q2() {
    int row ,col , count;
    cin>>row>>col;
    vector<vector<string>>matrix(row,vector<string>(col));
    for(int i = 0 ; i <row ; i++) {
        for(int j = 0 ; j < col ; j++) {
            cin>>matrix[i][j];
        }
    }
    cin>>count;
    vector<string>candidates(count);
    for(int i = 0 ; i < count ; i++) cin>>candidates[i];



}

bool compareNums(std::string a, std::string b) {
    return a + b > b + a;
}

vector<int> maxItems(const vector<int>& cost, int x) {
    int n = cost.size();
    vector<vector<int>> dp(n+1, vector<int>(x+1, 0));

    // Build DP table
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= x; j++) {
            dp[i][j] = dp[i-1][j];  // Not taking the item
            if (j >= cost[i-1]) {
                dp[i][j] = max(dp[i][j], dp[i-1][j-cost[i-1]] + 1);
            }
        }
    }

    // Find the items that were included
    vector<int> items;
    int remainingCost = x;
    for (int i = n; i > 0; i--) {
        if (dp[i][remainingCost] != dp[i-1][remainingCost]) {
            items.push_back(i-1);  // Include this item
            remainingCost -= cost[i-1];
        }
    }

    // Reverse the items to print in original order
    reverse(items.begin(), items.end());

    return items;
}

int main() {
    std::vector<int> nums = {10,5,6,11,2,3};
    vector<int> ans =  maxItems(nums,10);
    for(auto e : ans) cout<<e<< " ";
    return 0;
}

