#include <iostream>
#include <cstring>

using namespace std;

#define MAX 100

int main() {
  int n, m, last_long;
  char typed_data[MAX] [MAX];
  cout << "Type A Data <word_number> <rows> >>> ";
  cin >> n >> m;
  for (int i = 0; i < n; ++i) {
    cout << "Type word for [" << i << "]\n >>> ";
    cin >> typed_data[i];
  }
  last_long = strlen(typed_data[n-1]);
  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < n; ++j) {
      if (j < n - 1 || i < last_long)
         cout << typed_data[j] [i];
    }
    cout << " ";
  }
  return 0;
}
//created by @abra for Plexus Platinum Asistan in Plexus Network Labs
