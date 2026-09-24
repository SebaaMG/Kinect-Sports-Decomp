extern unsigned int lbl_82196BD0;
extern unsigned int lbl_82197534;
extern void fn_82897D88(volatile void *);
extern void fn_82232658(volatile void *);

void fn_82232AE8(volatile unsigned int *object)
{
    *object = (unsigned int)&lbl_82196BD0;
    object[0x281] = (unsigned int)&lbl_82197534;
    fn_82897D88(&object[0x281]);
    object[0x267] = (unsigned int)&lbl_82197534;
    fn_82897D88(&object[0x267]);
    fn_82232658(object);
}
