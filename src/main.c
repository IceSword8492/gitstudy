#include <stdio.h>
#include <string.h>
#include "header.h"

#define COUNT 4


int main (int argc, const char** argv)
{
	student students[COUNT];


	students[0] = (student){117237, "nakamura"}; // def of nakamura
	students[1] = (student){117316, "yoshioka"};// def of yoshioka
	students[2] = (student){117049, "uesugi"}; // def of uesugi
	students[3] = (student){116101, "kumazawa"};// def of kumazawa


	for (int i = 0; i < COUNT; i++)
	{
		printf("C0%d %s\n", students[i].id, students[i].name);
	}
	// ! test test
	return 0;
}
