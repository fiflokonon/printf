#ifndefine _MAIN_
#define _MAIN_

int _printf(const char *format, ...);
int _putchar(char c);

/**
 * struct op - flag 
 * @c: flag
 * @f: function
 */

typedef struct op
{
	char *c;
	int (*f)(va_list);
} op_t;

#endif
