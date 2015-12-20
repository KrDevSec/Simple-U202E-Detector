/***********************************
  Sample.cpp
  Created by Lim DongHo (a.k.a DevSec)
************************************/

#include <stdio.h>
#include <tchar.h>
#include <string.h>

/* usage : " Run(argv); " */

bool Run(TCHAR **argv){

	if(argv[1] == NULL)
		return false;

	size_t nSize = wcslen(argv[1]);

	for(int i=0; i<nSize; i++) {
		if( argv[1][i] == 0x202E )
			return true;
	}

	return false;
}

int _tmain (int argc, TCHAR** argv){
	Run(argv);
	getchar();
}