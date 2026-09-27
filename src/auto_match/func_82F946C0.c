typedef unsigned int undefined4;

/* The argument is a reference to the object's base pointer; the original code
   keeps that reference in its own stack slot, so it is modelled as a by-value
   holder object that has to live in memory. */
typedef struct {
    void *base;
} ObjectRef;

undefined4 fn_82F946C0(volatile ObjectRef param_1)
{
    return *(volatile undefined4 *)((char *)param_1.base + 0xC);
}
