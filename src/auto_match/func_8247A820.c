typedef struct {
    unsigned char pad[0x770];
    unsigned int *context;
} object_8247A820;

extern int fn_8247A888(void);
extern void fn_82528BF8(unsigned int *context, char *name, void *a, void *b, int c,
                       int d);

int fn_8247A820(object_8247A820 *param_1, int param_2, char *param_3, void *param_4,
               void *param_5)
{
    if (param_3 != 0 && *param_3 != '\0' && fn_8247A888() != 2) {
        fn_82528BF8(param_1->context, param_3, param_4, param_5, 0, 0);
    }
    return 0;
}
