#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    string oddNum;
    string evenNum;

    for (int num : num_list) {
        if (num % 2 == 0) {
            //TODO : to_string() function must be used to add number on String
            evenNum += to_string(num);
        }
        else {
            oddNum += to_string(num);
        }
    }

    answer = stoi(evenNum) + stoi(oddNum);
    return answer;
};


int main()
{
    std::cout << solution({ 3,4,5,2,1 }) << endl;
    std::cout << solution({5,7,8,3}) << endl;
}
