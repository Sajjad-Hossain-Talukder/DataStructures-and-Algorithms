#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(i, s, e) for (ll i = s; i < e; i++)
#define rfr(i, e, s) for (ll i = e; i >= s; i--)
#define nl "\n"
#define mod 1000000007
using namespace std;

vector<int> createPatternArray(string pattern)
{
    int n = pattern.size(), i = 1, j = 0;
    vector<int> lps(n, 0);
    while (i < n){
        if (pattern[i] == pattern[j]){
            j++;
            lps[i] = j;
            i++;
        }
        else{
            if (j != 0){
                j = lps[j - 1];
            }
            else{
                lps[i] = 0;
                i++;
            }
        }
    }
    return lps;
}

vector<int> KMP(string text, string pattern){
    std::vector<int> matches;
    if (pattern.empty())
        return matches;

    vector<int> lps = createPatternArray(pattern);

    int i = 0, j = 0;

    while (i < text.length()){
        if (pattern[j] == text[i]){
            i++;
            j++;
        }

        if (j == pattern.length()){
            matches.push_back(i - j);
            j = lps[j - 1];
        }
        else if (i < text.length() && pattern[j] != text[i]){
            if (j != 0){
                j = lps[j - 1];
            }
            else {
                i++;
            }
        }
    }
    return matches;
}

int main(){
    string text = "abxabcdabxabcdabcdabcy", pattern = "abcdabcy";
    // cin >> text >> pattern ;
    vector<int> pos;

    vector<int> matches = KMP(text, pattern);

    cout << "Found Pattern : " << matches.size() << endl;
    cout << "Matched Positions : ";
    for (auto a : matches)
        cout << a << " ";
    cout << endl;

    return 0;
}
