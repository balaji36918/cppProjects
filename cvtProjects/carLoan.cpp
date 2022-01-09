Skip to content
Search or jump to…
Pull requests
Issues
Marketplace
Explore
 
@balaji36918 
balaji36918
/
cppProjects
Public
Code
Issues
Pull requests
Actions
Projects
Wiki
Security
Insights
Settings
cppProjects/Car_loan.cpp
@balaji36918
balaji36918 Rename 419142_Assignment1.cpp to Car_loan.cpp
Latest commit 2dd42af on Dec 2, 2021
 History
 1 contributor
35 lines (28 sloc)  710 Bytes
   
/* Matrikelnummer: 419142
Name:  Balaji Venkatasubramanian
Email:balajiv1818@gmail.com
Assignment: 1
*/

#include<iostream>//Forcoutandcin
#include<cmath> //Forsqrt()andpow()
#include<iomanip>//Forsetw()andsetprecision()

using namespace std;

int main()
{
	int k,n;
	float PMT,i,Balk,power;
	PMT = 165.25;
	i = (0.09)/12;
	n = 48;
	
	cout<<fixed<<showpoint<<setprecision(2);

	cout<<"Monthly installment is = "<<PMT<<endl;
	cout<<"Interest Rate is = "<<i<<endl;
	cout<<"Total number of payments = "<<n<<endl;
	
	for(k=1; k<=3; k++)
	{
	power = pow(1+i,k-n);
	Balk = PMT*(1-power)/i;
	cout<<"Balance after Installment"  <<k<< "=" << Balk << "Euros" <<endl;
	}
	
return(0);
}
© 2022 GitHub, Inc.
Terms
Privacy
Security
Status
Docs
Contact GitHub
Pricing
API
Training
Blog
About
Loading complete
