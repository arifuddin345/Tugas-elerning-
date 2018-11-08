/**
 * nama  : arifuddin
 * nim: 5150411345
 */
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a[100][100];
    int n;
    cout<<"Masukkan  panjang matriks : ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"["<<i<<","<<j<<"] : ";
            cin>>a[i][j];
			if(n==i+j+1)
				a[i][j]=0;
        }
    }
        cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
			cout<<" "<<a[i][j];
		}
        cout<<endl;
		}
return 0;
}
