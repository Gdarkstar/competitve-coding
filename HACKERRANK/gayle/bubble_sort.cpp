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

using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
    }
    int count=0;
    for(int a_i = 0;a_i < n;a_i++){
        for(int a_j = a_i;a_j < n;a_j++){
            if(a[a_i]>a[a_j])
            {
                int x=a[a_i];
                a[a_i]=a[a_j];
                a[a_j]=x;
                ++count;
            } 
        }
    }
    cout<<"Array is sorted in "<<count<< " swaps."<<endl;
    cout<<"First Element: "<<a[0]<<endl;
cout<<"Last Element: "<<a[n-1]<<endl;
    return 0;
}

