#if !defined (CALC_H)
#define CALC_H

#include "Stack.h"
#include "Input.h"

class Calculator
{
public:
	bool Execute (Input const & input);
	// give access to the stack
	IStack const & GetStack () const { return _stack; }
private:
	int Calculate (int n1, int n2, int token) const;

	IStack  _stack;
};

#endif
