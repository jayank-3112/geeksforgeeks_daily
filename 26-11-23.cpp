/*
Print a sequence of numbers starting with N, without using loop, where replace N 
with N - 5, until N > 0. After that replace N with N + 5 until N 
regains its initial value.
Example 1:

Input: 
N = 16
Output: 
16 11 6 1 -4 1 6 11 16
Explaination: 
The value decreases until it is greater than 0. After that it increases and stops when it becomes 16 again.
*/
class Solution{
public:
    void util(vector<int>&ans,int val)
    {
       if(val<=0)
        {
            ans.push_back(val);
            return;
        }
        ans.push_back(val);
        util(ans,val-5);
        ans.push_back(val);
        
    }
    vector<int> pattern(int N){
        // code here
        vector<int> ans;
        util(ans,N);
        return ans;
    }
};