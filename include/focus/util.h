#ifndef _UTIL_H_
#define _UTIL_H_

#include "focus/types.h"

#ifndef _PRINTF_H_
# include "focus/printf.h"
#endif
#ifndef _READLINE_H_
# include "focus/readline.h"
#endif

extern void outb( char port, char byte );
extern char inb( char port );
extern char inb_fe( char port );
extern void intr_set_i( char i_reg );
extern void intr_enable( void );
extern void intr_disable( void );
extern void intr_return( void );
extern size_t* get_sp( void );
extern void reset( void );

extern void doh( const char* message );
extern void stack_dump( void );

void* memcpy( void* dest, const void* src, size_t n );
void *memset( void *dest, char byte, size_t n );

char *strcpy( char* dest, const char* src );
int strcmp( const char* this, const char* that );
int strlen( const char* string );

#endif /* _UTIL_H_ */