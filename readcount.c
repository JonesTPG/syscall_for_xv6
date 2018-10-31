#include "types.h"
#include "user.h"

int main(void){
	printf(1, "number of read() syscalls since boot: %d\n", getreadcount());
	exit();
}
