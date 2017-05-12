#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int a = 7;
	//cin>>a;
	char s[100];
	char sn[100];
	long long d = 0;
	for (int b = 0; b < pow(2,a); b++){
		itoa(b,s,2);
		strcpy(sn,strrev(s));
		for (int c = 0; c < a; c++){
			if (s[c] == '1'){
				d = - pow((c + 1),2) + d;
				//cout<<"n"<<endl;
			} else {
				d = pow((c + 1),2) + d;
				//cout<<"y"<<endl;
			}
		}
		if (d == 0){
			for (int h = 0; h < a; h++){
				if (s[h] == '1'){
					cout<<"-"<<(h+1)<<"^2";
				} else {
					cout<<"+"<<(h+1)<<"^2";
				}
			}
			cout<<" = 0"<<endl;
		}
		d = 0;
	}
}
