#include <cstring>
#include <iostream>
#include <stdio.h>
using namespace std;

class bubble {
  unsigned short int roll;
  char name[30];
  float percent;

public:
  void getdata() {
    cout << "Enter roll no., name and percent: " << endl;
    cin >> roll >> name >> percent;
  }
  void putdata() { cout << "\n" << roll << " " << name << " " << percent; }
  int check(bubble x) {
    if (strcmp(name, x.name) > 0)
      return 1;
    else
      return 0;
  }
};
int main() {
  bubble z[100], t;
  int i, j, n;
  cout << "\nEnter no. of students:";
  cin >> n;
  for (i = 0; i <= n - 1; i++)
    z[i].getdata();
  for (i = 1; i <= n - 1; i++) {
    for (j = 0; j <= n - i - 1; j++) {
      if (z[j].check(z[j + 1])) {
        t = z[j];
        z[j] = z[j + 1];
        z[j + 1] = t;
      }
    }
  }
  for (i = 0; i <= n - 1; i++)
    z[i].putdata();
  return 0;
}
