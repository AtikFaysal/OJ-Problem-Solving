#include <bits/stdc++.h>
#include <vector>

using namespace std;
class Solution{
public:
    vector<int> twoSum(vector<int> numbers, int target)
    {
        vector<int> output;

        for(int i=0 ; i<numbers.size() ; i++)
        {
            output.push_back(i);
            for(int j=0 ; j<numbers.size() ; j++)
            {
                if((numbers[i] + numbers[j]) == target && i != j)
                    output.push_back(j);
            }
            if(output.size() == 2)
                break;
            else output.clear();
        }

        return output;
    }
};

int main() {
    vector<int> numbers;
    string input;
    getline(cin, input);
    istringstream is(input);
    int num;
    char c;
    while(true)
    {
        is>>num;
        numbers.push_back(num);
        if(!is.eof()) is>>c;
        else break;
    }
    int target;
    cin >> target;

    Solution solution;
    auto size = solution.twoSum(numbers, target).size();
    auto output = solution.twoSum(numbers, target);
    for(int i=0 ; i<size ; i++)
    {
        if(i == size-1)
            cout << output[i];
        else cout << output[i] << ",";
    }

    return 0;
}
