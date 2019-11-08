#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	typedef struct {
		char *name;
		int age;
		char gender;
		
	}
	student;
	
    student rim;
	
   rim.name = "rim";
   rim.age = 18;
   rim.gender = 'F';
	
	printf("name:&s \nage:%d \ngender:%c",rim.name,rim.age,rim.gender );
	
	   
	return 0;
}
