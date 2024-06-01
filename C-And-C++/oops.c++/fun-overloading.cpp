#include<iostream>
 using namespace std;
int cal(int); //  (call=calculator)
int cal(int, int);
int main()
{
    int s, a, b;
    cout << "enter the number";
    cin >> s;
    cout << "sqaure of " << s << "  is " << cal(s) << endl;
    cout << "enter the two number";
    cin >> a >> b;
    cout << endl  << " addition "<<" is " << cal(a, b);

    return 0;
}
int cal(int x)
{
    return (x * x);
}
int cal(int x, int y)
{
    return (x + y);
}
