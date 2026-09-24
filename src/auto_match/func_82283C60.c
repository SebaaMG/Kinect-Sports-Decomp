extern int lbl_83265A58[2];
extern unsigned int fn_82A1C0D8(int, int);
extern void fn_82A1E108(int);
extern void fn_829C79C8(void);

void fn_82283C60(int param_1)
{
    if (fn_82A1C0D8(param_1, 0xff) == 0) {
        while (lbl_83265A58[0] == 1 || (unsigned int)lbl_83265A58[1] != 0) {
            fn_82A1E108(10);
        }
        fn_829C79C8();
    }
}
