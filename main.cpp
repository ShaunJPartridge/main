#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxSubArray(vector<int>& nums) {
  int sum = 0;
  int c_max = INT32_MIN;
        
  for(int i = 0;i < nums.size();i++){
    sum += nums[i];
    c_max = max(sum,c_max);
    if(sum < 0){
      //c_max = 0;
      sum = 0;
    }
  }
  return c_max;
}

int main() {
  vector<int>A(9);
  A = {-2,1,-3,4,-1,2,1,-5,4};
  int res = 0;

  res = maxSubArray(A);
  cout << res;

} 