#include <iostream>

using namespace std;
int perimetras(int a,int b){
    return a*b;
}
int main()
{
    int a, b;
    cout << "Iveskite staciakampio ilgi ir ploti:" << endl;
    cin >> a >> b;
    cout << "Perimetras: " << perimetras(a, b);
    return 0;

}
