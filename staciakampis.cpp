#include <iostream>

using namespace std;
int plotas(int a,int b){
    return a*b;
}
int perimetras(int a,int b){
    return a*2+b*2;
}
double istrizaine(int a,int b){
    return sqrt((a*a)+(b*b));
}
int main()
{
    int a, b;
    cout << "Iveskite staciakampio ilgi ir ploti:" << endl;
    cin >> a >> b;
    cout << "Plotas: " << plotas(a, b) << endl;
    cout << "Perimetras: " << perimetras(a, b)<< endl;
    cout << "Istrizaines ilgis: " << istrizaine(a, b) << endl;
    return 0;

}
