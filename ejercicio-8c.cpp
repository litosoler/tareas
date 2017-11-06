#include <iostream>
using namespace std;
using std::endl;
#include <iomanip>
using std::setw;
#include <cstring>


int main(int argc, char *argv[]) {
	char *s1="nadie pone orden en el RNA";
	char *s2="nadie pone orden en el RNP";
	char *s3="nadie pone orden";
	int n,i,c = 0 ;
	n = strcmp(s1,s2);
	cout<<"n="<<n<<endl;
	if(n>0){
		cout<<*(s1+25);
	}
	else{
		cout<<*(s2+25);
	}
	for (i=0; strlen(s3);i++){
	if(s1[i]==s2[i]){
	   c++;
	}
	}
	if(c==strlen(s3) ){
		cout<<setw(2)<<0;
	}
	
	
return 0;
}

