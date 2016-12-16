#include <stdio.h>
#include <time.h>

int main()
{
	time_t current_time = time(NULL);
	time_t fixed_time = time(NULL);
	char* time_string;
	time_string = malloc(100);
	char* fixed_time_string;
	fixed_time_string = malloc(100);
	long int time_int;
	struct tm * timeInfo;

	time_string = ctime(&current_time);
	time_int = (long int)current_time;

	timeInfo = localtime(&fixed_time);

	timeInfo->tm_year = 0;
	timeInfo->tm_mon = 1;
	timeInfo->tm_mday = 1;

	//fixed_time = mktime(timeInfo);
	//fixed_time_string = asctime(timeInfo);

	printf("Hello, World!\n");
	printf("time: %s\n", (time_string));
	printf("Address of current_time: %p", &current_time);
	printf("epoch time: %d\n", time_int);
	printf("fixed time: %s\n", asctime(timeInfo));
	printf("Address of fixed_time_string: %p", &fixed_time);

	getch();
	return 0;
}
