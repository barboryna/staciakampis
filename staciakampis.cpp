#include <iostream>

using namespace std;
int plotas(int a,int b){
    return a*b;
}
int main()
{
    int a, b;
    cout << "Iveskite staciakampio ilgi ir ploti:" << endl;
    cin >> a >> b;
    cout << "Plotas: " << plotas(a, b);
    return 0;

}
