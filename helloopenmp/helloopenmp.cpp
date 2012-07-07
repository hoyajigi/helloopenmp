// helloopenmp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
//#include<Windows.h>
#include<omp.h>
#include<math.h>

const int THREAD_COUNT=4;


int _tmain(int argc, _TCHAR* argv[])
{
	const int MAX=100000000;
	float* Data;
	Data=new float[MAX];
	int i=0;
	
	for(i=0;i<MAX;i++)
		Data[i]=i;
	for(i=0;i<MAX;i++){
		Data[i]=(float)sqrt(Data[i]);
	}
	delete Data;

	return 0;
}

