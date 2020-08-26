
#include <bits/stdc++.h>




using namespace std;




int main() {

std::string s;

std::cin >> s;

if( (((s[0]-'0')+(s[1]-'0'))%2 == 0) &&

(((s[3]-'0')+(s[4]-'0'))%2 == 0) &&

(((s[4]-'0')+(s[5]-'0'))%2 == 0) &&

(((s[7]-'0')+(s[8]-'0'))%2 == 0) &&

(s[2]!='A') && (s[2]!='E') && (s[2]!='I') && (s[2]!='O') && (s[2]!='U') && (s[2]!='Y') ) {

std::cout << "valid";

}

else {

std::cout << "invalid";

}

return 0;

}

