

extern int drawbuffer_fix(char **, char **, int);
extern void func_name_conv(char *, char **);
extern void func_build_in(char **, int, int);

extern void num_add_f(char **);
extern void int_to_float(char **, int);
extern void shader_conv_(char **, char **);


extern int len_name(char *);
extern void cut_in_constructor(char *, char **);
extern void fix_marker(char **);
extern void add_marker(char **);
extern void fix_const(char *, char **);
extern int skip_block(char *, char *, char *, char *, char **, char **);
extern void in_to_attribute(char **);
extern void fix_layout(char **);


extern void replace_with_space(char *, int);
extern void GLSLHeader(char **);