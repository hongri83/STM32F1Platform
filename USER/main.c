#include "rtl.h"
#include "app.h"


__task void TaskRoot (void)
{
  os_tsk_prio_self (100);
	AppInit();
  os_tsk_delete_self();        
}

int main(void) {
	os_sys_init(TaskRoot);
	return 0;
}
