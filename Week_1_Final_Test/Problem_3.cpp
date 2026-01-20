#include <bits/stdc++.h>
using namespace std;

int main() {
    int m;
    cin>>m;

    if (m>=1000) {
        cout<<"Three Kacchi";
    }
    else if (m>=500) {
        cout<<" One Large Pizza";
    }

    else if ( m >= 250) {
        cout<<"Three Small Burger";
    }
      else if (m>=100) {
        cout<<"Three Fuchka";
        }
        
     else {
        cout<<"Nothing";
    }

    return 0;
}
