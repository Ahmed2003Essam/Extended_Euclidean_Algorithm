#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b; 
    int q, r;
    cin >> a >> b; 
    
    int intial_a = a, 
        intial_b = b;
        q = a /b; 
        r = a%b;
        
    vector <int> Xs = {1,0}, 
                 Ys = {0,1}, 
                 R = {a,b, r}, 
                 Q = {q};
    
    int x_indexnegone = 1, 
        x_indexzero = 0, 
        y_indexnegone = 0, 
        y_indexzero = 1, 
        x =0, 
        y= 0; 
    
    
    while(r != 0){
    a = b; 
    b = r;
    x =  x_indexnegone -  (q* x_indexzero), 
    y = y_indexnegone -  (q* y_indexzero); 
    q = a /b; 
    r = a%b; 
    y_indexnegone =  y_indexzero; 
    y_indexzero = y;
    x_indexnegone = x_indexzero; 
    x_indexzero = x;
    Q.push_back(q);
    R.push_back(r);
    Xs.push_back(x); 
    Ys.push_back(y);
    }
    
int A = Xs[Xs.size() -1 ], 
    B = Ys[Ys.size() -1 ], 
    d = (A*intial_a) + (B*intial_b);

cout << "The values of R in the table" << endl; 
    for (int i = 0; i < R.size(); i++){
        cout << R[i] << endl;
    }
cout << "--------------------------------------------------------------------" << endl;


cout << "The values of Q in the table" << endl; 
    for (int i = 0; i < Q.size(); i++){
        cout << Q[i] << endl;
    }
cout << "--------------------------------------------------------------------" << endl;

cout << "The values of X in the table" << endl; 
    for (int i = 0; i < Xs.size(); i++){
        cout << Xs[i] << endl;
    }
cout << "--------------------------------------------------------------------" << endl;
    cout << "The values of Y in the table" << endl; 
    for (int i = 0; i < Ys.size(); i++){
        cout << Ys[i] << endl;
    }
cout << "--------------------------------------------------------------------" << endl;
cout << "The gcd of " << intial_a << " & " << intial_b << " is: " <<d << endl; 
}