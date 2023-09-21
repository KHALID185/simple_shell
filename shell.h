#ifndef SHELL_H
#define SHELL_H


extern char **environ;

#include <stdbool.h>
#include <string.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <errno.h>
#include <unistd.h>

int str_cmp(char *str, char *str2);
char *str_dp(const char *str);
char *str_cp(char *str1, char *str2);
char *str_ct(char *str1, char *str2);
int str_lgt(char *str);
void freee(char **fred);
char *fint(int in);
void p_err(char *n, char *cd, int i);
void str_rev(char *s, int l);

char *rdl(void);
int exc(char **cmmmd, char **av, int n_idx);
char **spl(char *l);
char *get_environ(char *ink);

char *path_cmd(char *cmd);

#endif
