// JAAsm.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "JAAsm.h"


// This is an example of an exported variable
JAASM_API int nJAAsm=0;

// This is an example of an exported function.
JAASM_API int fnJAAsm(void)
{
    return 42;
}

// This is the constructor of a class that has been exported.
// see JAAsm.h for the class definition
CJAAsm::CJAAsm()
{
    return;
}
