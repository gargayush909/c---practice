#include <bits/stdc++.h>

class Solution {
  public:
    vector<int> quadraticRoots(int a, int b, int c) {
        vector<int> v;
    
    int D = b * b - 4 * a * c;
    if (D < 0) {
        return {-1};
    }
    
    double x1 = (-b + sqrt(D)) / (2.0 * a);
    double x2 = (-b - sqrt(D)) / (2.0 * a);
    double x3 = max(x1, x2);
    double x4 = min(x1, x2);
    
    v.push_back(floor(x3));
    //floor is for the floating values 
    v.push_back(floor(x4));
    return v;
    }
};