#ifndef _OUTPUT_H_
#define _OUTPUT_H_

#define COLOR_RED     "\x1b[31m"
#define COLOR_GREEN   "\x1b[32m"
#define COLOR_YELLOW  "\x1b[33m"
#define COLOR_BLUE    "\x1b[34m"
#define COLOR_MAGENTA "\x1b[35m"
#define COLOR_CYAN    "\x1b[36m"
#define COLOR_RESET   "\x1b[0m"

void print_line_start ();
void print_double(double number, const char* color);
void print_newline ();
void print_delete ();
void suppress_output (int volume);

#endif
