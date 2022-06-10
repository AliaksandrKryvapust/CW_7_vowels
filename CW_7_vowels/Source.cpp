#include<iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> vowelIndices(const string& word){
    vector<int> res;
    string temp={ "aeiouyAEIOUY" };
    for (int i = 0; i < word.length(); ++i)    {
        if (temp.find(word[i])!=string::npos)
        res.push_back(i+1);
    }
    return res;
}
int main() {
    string word = { "super" };
    vowelIndices(word);
    return 0;
}