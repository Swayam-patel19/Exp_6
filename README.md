# Exp_6
Aim -> To study and implement C++ deciision making statements loops.

Software -> Visual Studio Code

Theory -> (1) For loop - It allows us to repeat a set of instructions for a specific number of time.
Syntax:
for ( initialization; test condition; updation) {
// body of for loop
}
(2) While loop - It is used in situations where we do not know the exact number of iterations of the loop beforehand.
Syntax:
while (test_expression)
{
// statements
update_expression;
}
(3) Do while loop - It is same as the while loop but tha difference is that in the do-while loop the condition is tested at the end of the loop body.
```
          Syntax:
          do
          { 
          // loop body
          update_expression;  
          } 
          while (test_expression);
```

#Codes:

A-

```
#include<iostream>
using namespace std;
int main(){
    int i;
    for (i=0;i<10;i++) {
    cout<<"HELLO WORLD("<<i+1<<")"<<"\n";
    }
    return 0;
}
```

B-

```
#include<iostream>
using namespace std;

int main()
{
    int i;
    cout<<"Enter a number: "<<"\n";
    cin>>i;
    while(i<=10)
    {
        cout<<" "<<"\n"<<i++;
    
    }
    return 0;
}
```

C-

```
#include<iostream> 
using namespace std;

int main() 
{
    int a=0;
    do {
        cout<< a << "\n";
        a=a+2;
    }
    while (a<=50); 
    return 0; 
}
```

D-

```
#include<iostream>
using namespace std;

int main()
{
    int a[3][3],s=0,i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<"Enter any number for index number: "<<i<<j;
            cin>>a[i][j];
            s=s+a[i][j];
        }
    }
    cout<<"The sum of elements of matrix is:"<<s;
    return 0;
}
```

E-

```
#include <iostream>
using namespace std;

int main() {
    int i = 1;
    while (i <= 5) {
        int j = 1;
        while (j <= 5) {
            cout << "* ";
            ++j;
        }
        cout << endl;
        ++i;
    }

    return 0;
}
```

F-

```
#include <iostream>
using namespace std;

int main() {
    int i = 1;
    do {
        int j = 1;
        do {
            cout << "* ";
            ++j;
        } while (j <= 6);
        cout << endl;
        ++i;
    } while (i <= 6);

    return 0;
}
```

G-

```

#include<iostream>
using namespace std;
int main(){
    int i,j,k=0,n;
    cout<<"Enter number of rows:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for (j=1;j<=(n-1);j++)
        {
            cout<<" ";
        }
        while(k!=(2*i-1))
        {
            cout<<"* ";
            k++;
        }
        k=0;
        }
        cout<<"end1";
    
}
```

OUTPUT:-

A-

<img width="365" alt="Screenshot 2024-08-13 at 17 01 33" src="https://github.com/user-attachments/assets/3ce9e7ae-fb65-4bef-9509-44b11d5c170d">

B-

<img width="396" alt="Screenshot 2024-08-13 at 17 01 59" src="https://github.com/user-attachments/assets/7cbae881-abcf-496b-9dde-a34373b49dc9">

C-

<img width="529" alt="Screenshot 2024-08-13 at 17 02 28" src="https://github.com/user-attachments/assets/335de032-85d1-4321-b6bb-b45f0123d86e">

D-

<img width="533" alt="Screenshot 2024-08-13 at 17 02 52" src="https://github.com/user-attachments/assets/3fd93025-6521-4306-b578-5087b0b918d7">

E-

<img width="266" alt="Screenshot 2024-08-13 at 17 03 22" src="https://github.com/user-attachments/assets/cdb83761-9db9-4adc-ad63-a277dff6f0b9">

F-

<img width="301" alt="Screenshot 2024-08-13 at 17 04 04" src="https://github.com/user-attachments/assets/0d7205ee-f8fd-472a-8d77-c41f5f843de4">

G-

<img width="536" alt="Screenshot 2024-08-13 at 17 04 29" src="https://github.com/user-attachments/assets/48805b70-5166-4c6b-8d8d-2dc77e04935f">

Conclusion -> I learnt about different deciosion making loops of C++ and made programs using those statements like how to print counting numbers or even numbers, till a certain range, matrix operations and many other programs.
