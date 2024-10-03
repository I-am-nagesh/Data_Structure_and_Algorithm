#include <iostream>
#include <string>
using namespace std;

int main() {
  string str;
  cout << "Enter a string: ";
  cin >> str;

  int n = str.length();
  int lps[n];
  lps[0] = 0;

  for (int i = 1; i < n; i++) {
    int j = lps[i - 1];
    while (j > 0 && str[i] != str[j]) {
      j = lps[j - 1];
    }
    if (str[i] == str[j]) {
      lps[i] = j + 1;
    } else {
      lps[i] = 0;
    }
  }

  int longestPrefixSuffix = lps[n - 1];
  cout << "The longest prefix which is also a suffix is: " << str.substr(0, longestPrefixSuffix) << endl;

  return 0;
}
