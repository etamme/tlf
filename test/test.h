#ifndef _TEST_H
#define _TEST_H

//
// common includes for the test groups
//

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <string.h>

#include <cmocka.h>

extern const char STRING_NOT_SET[];

extern const char *showmsg_spy, *showstring_spy1, *showstring_spy2;

typedef int (*int_func_t)(void);

// plugin functions for the mocks
extern int_func_t key_poll_func;
extern int_func_t getch_func;

// the real functions
extern int __real_key_poll();

#endif
