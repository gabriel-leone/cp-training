#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int sequencia[10000];

  for (int i = 0; i < n; i++)
  {
    cin >> sequencia[i];
  }

  int ans = 0;
  for (int i = 0; i < n - 2; i++)
  {
    if (sequencia[i] == 1 && sequencia[i + 1] == 0 && sequencia[i + 2] == 0)
    {
      ans++;
      i += 2;
    }
  }

  cout << ans;
}
