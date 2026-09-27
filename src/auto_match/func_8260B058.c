/* Virtual dispatch helper: initialises the object, then optionally forwards to
   the owner's vtable entry at offset 8. */
extern void fn_82D95638(void);
extern void *fn_82CE5410(void);

typedef void (*owner_vfn)(void *owner, void *param_1, unsigned short param_2);

void *fn_8260B058(void *param_1, unsigned int param_2)
{
    fn_82D95638();

    if (param_2 & 1) {
        void *owner = *(void **)((char *)fn_82CE5410() + 0x10);
        owner_vfn vfn = *(owner_vfn *)((char *)*(void **)owner + 8);

        vfn(owner, param_1, *(unsigned short *)((char *)param_1 + 4));
    }

    return param_1;
}
