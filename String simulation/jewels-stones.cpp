#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0;
        for(char s: stones){
            for(char j : jewels){
                if(s == j){
                    count++;
                    break;
                }
            }
        }
        return count;
    }
};

int main() {
    Solution sol;

    // Test cases
    string jewels1 = "aA";
    string stones1 = "aAAbbbb";
    
    string jewels2 = "z";
    string stones2 = "ZZ";

    cout << "Test 1 (\"" << jewels1 << "\", \"" << stones1 << "\") -> " 
         << sol.numJewelsInStones(jewels1, stones1) << endl;
         
    cout << "Test 2 (\"" << jewels2 << "\", \"" << stones2 << "\") -> " 
         << sol.numJewelsInStones(jewels2, stones2) << endl;

    return 0;
}