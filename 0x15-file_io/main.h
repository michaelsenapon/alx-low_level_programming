#ifndef _MAIN_H_
#define _MAIN_H_

/* Standard C Library Headers */
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/* Function Prototypes */
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void copy_file_to_file(const char *file_from, const char *file_to);

#endif /*_MAIN_H */
