#include <iostream>

using namespace std;
int plotas(int a,int b){
    return a*b;
}
int perimetras(int a,int b){
    return a*2+b*2;
}
int main()
{
    int a, b;
    cout << "Iveskite staciakampio ilgi ir ploti:" << endl;
    cin >> a >> b;
    cout << "Plotas: " << plotas(a, b) << endl;
    cout << "Perimetras: " << perimetras(a, b);
    return 0;

}
