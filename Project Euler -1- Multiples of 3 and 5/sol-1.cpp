#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
using namespace std;

#define mp(A, B) make_pair(A, B)
#define ff(i, m, n) for(i = m; i < n; i++)
#define ffr(i, m, n) for(i = m; i >= n; i--)
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<vector<char>> vvc;
typedef vector<pair<int, int>> vpii;
typedef vector<bool> vb;
typedef vector<vector<bool>> vvb;
typedef vector<string> vs;
typedef vector<vector<string>> vvs;
typedef stack<int> stki;
typedef queue<int> qi;
typedef deque<int> dqi;
typedef queue<pair<int, int>> qpii;
typedef unordered_map<int, int> umpii;
typedef set<int> si;
typedef unordered_set<int> usi;
vpii steps = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

template <typename T>
void printVec(T const& t){
    for(auto e :  t)
        cout << e << ",";
    cout << endl;
}

void printSum(int);
ll findSum(int, ll);
int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        printSum(n - 1);
    }
    return 0;
}

void printSum(int n){
    int k1 = n / 3, k2 = n / 5, k3 = n / 15;
    
    // k1 : number of multiple of 3
    // k2 : number of multiples of 5
    // k3 : number of multiples of 15
    // using including and exlusion priciple
    // 3 * sum(k1) + 5 * sum(k1) - 15 * sum(k2)
    ll threeSum = findSum(3, k1);
    ll fiveSum = findSum(5, k2);
    ll fifteenSum = findSum(15, k3);
    cout << threeSum - fifteenSum + fiveSum << endl;
}

ll findSum(int n, ll k){
    //cerr << n << ": " << n * k * (k + 1) / 2 << endl;
    return n * k * (k + 1) / 2;
}
