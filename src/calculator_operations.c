#include <calculator_operations.h>

int add(int operand1, int operand2)
{
    return operand1 + operand2;
}

int subtract(int operand1, int operand2)
{
    return operand1 - operand2;
}

int multiply(int operand1, int operand2)
{
    return operand1 * operand2;
}

int divide(int operand1, int operand2)
{
    if(0 == operand2)
        return 0;
    else
        return operand1 / operand2;
}
int modulus (int operand1, int operand2)
{
	if (0== operand2)
		return 0;
	else
		return operand1%operand2;
}

int greater (int operand1, int operand2)
{
	if (operand1>operand2)
		return operand1;
	else
		return operand2;
}

int lesser (int operand1, int operand2)
{
	if (operand1>operand2)
		return operand2;
	else
		return operand1;
}

/*int average (int operand1, int operand2)
{
	if (0==operand1)
		return operand2;
	else if (0==operand2)
		return operand1;
	else
		return (operand1+operand2)/2;
}
*/
