#include <iostream>

#include<string>

using namespace std;

//function declararions

float add_op(float left, float right);

float subtract_op(float left, float right);

float arithmetic_ops(float left, float right, std::string op);

float multiply_op(float left, float right);

int main()

{

int choice;

float op1,op2;

do

{

cout<<"Enter an operation \n1. Add \n2. Subtract \n3. Multiply \n4. Divide \n5. Modulo \n6. Quit\n";

cin>>choice;

if(choice==6)

break;

cout<<"Enter left operand: ";

cin>>op1;

cout<<"Enter right operand: ";

cin>>op2;

switch(choice)

{

case 1:

cout<<op1<<" + "<<op2<<" = "<<add_op(op1,op2)<<endl;

break;

case 2:

cout<<op1<<" - "<<op2<<" = "<<subtract_op(op1, op2)<<endl;

break;

case 3:

cout<<op1<<" * "<<op2<<" = "<<multiply_op(op1, op2)<<endl;

break;

case 4:

//test with arithmetic_ops function

cout<<op1<<" / "<<op2<<" = "<<arithmetic_ops(op1,op2,"/")<<endl;

break;

case 5:

//since float value not allowed for modulus , I am casting it to int

cout<<(int)op1<<" % "<<(int)op2<<" = "<<arithmetic_ops(op1,op2,"%")<<endl;

break;

case 6:

cout<<"Quit...."<<endl;

break;

default:

cout<<"Invalid choice!!"<<endl;

break;

}

}while(choice!=6);

}

//function definitions here

float add_op(float left, float right)

{

return left+right;

}

float subtract_op(float left, float right)

{

return left-right;

}

float arithmetic_ops(float left, float right, std::string op)

{

if(op == "+")

{

return left+right;

}

else if(op =="-")

{

return left-right;

}

else if(op == "*")

{

return left*right;

}

else if(op == "/")

{

//divide by zero not allowed

if(right!=0)

{

return left/right;

}

else

{

cout<<"Divide by zero"<<endl;

return -1;

}

}

else if(op == "%")

{

return (int)left % (int)right;

}

else

{

cout<<"Invalid operation"<<endl;

return -1;

}

}

//added function to multiply

float multiply_op(float left, float right)

{

return left*right;

}