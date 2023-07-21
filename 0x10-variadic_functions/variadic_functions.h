#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list n);
void print_int(va_list n);
void print_float(va_list n);
void print_string(va_list n);

/**
 * struct pter - pointer to print all
 * @test: pointer to input for test
 * @printer: pointer to function
 */
typedef struct pter
{
	char *f;
	void (*printer)();
} ty;

#endif
