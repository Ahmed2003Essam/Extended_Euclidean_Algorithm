# Extended_Euclidean_Algorithm
The program is an extension of the Euclidean Algorithm that computes the greatest common divisor (GCD) of integers a and b.

The program takes two numbers a & b as input and outputs the greatest common divisor (GCD) of those two numbers. Also, the program outputs the values of x and y used to fill the table to find α and β to get the gcd. In addition, the program outputs the values of remainders and quotients in each step. Then, the program uses the values of α, β, a, and b to get the gcd(a,b). 

Important Equations used in this program: 

(α *a) + (β *b) = d, where d = gcd(a,b)

$x_{i}=x_{j-2}-qx_{j-1}$, where q is the quotient of a/b in every step as the values of a and b are changing. 

$y_{i}=y_{j-2}-qy_{j-1}$, where q is the quotient of a/b in every step as the values of a and b are changing. 
