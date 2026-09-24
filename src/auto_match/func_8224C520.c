extern void fn_822408B0(void *destination, void *object, void *source);
extern void fn_8224F2B8(void *destination, void *object, void *source);

void fn_8224C520(void *param_1)
{
    void *data;

    data = *(void **)((char *)param_1 + 0x10);
    fn_822408B0((char *)param_1 + 0x48, param_1, (char *)data + 0x34);
    fn_8224F2B8((char *)param_1 + 0x9C, param_1, (char *)data + 0x8C);
    fn_8224F2B8((char *)param_1 + 0xF0, param_1, (char *)data + 0xEC);
}
