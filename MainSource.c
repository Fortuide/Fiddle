#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>

typedef struct{
	int32_t first_e;
	float second_e;
}MyStruct;

int main()
{
	MyStruct *Arg_St = malloc(sizeof(MyStruct));
	MyStruct DummySt;
	//Arg_St = &Dummy_st;
	scanf("%d", &Arg_St->first_e);
	scanf("%f", &Arg_St->second_e);
	printf("%f\n",(Arg_St->first_e - Arg_St->second_e));
	return 0;
}
