#ifdef RTX
#include "rtl.h"
#endif
#include <assert.h>
#include "app.h"

__task void Idle() {

    while (1) {
        os_dly_wait(100);
    }
}


void AppInit(void) {
    int ret = 0;

#ifdef RTX
    ret = os_tsk_create(Idle, 99);
    assert(ret);
#endif
}
