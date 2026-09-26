typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
extern unsigned int *auStack_5c;
extern int fn_825200A8();
extern int fn_82522D98();
extern int fn_82549610();
extern int fn_82549660();
extern int fn_8259C738();
extern int fn_825B49E8();
extern int fn_82A1BB18();
extern int fn_82A93C18();
extern int fn_82A93D70();
extern int fn_82A93DE0();
extern int iRam83296d40;


void fn_8256B398(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 auStack_5c [23];
  
  if ((((*(int *)(param_1 + 0xc) == 0) &&
       (iVar1 = fn_825200A8(param_1 + 0x14,0xffffffff82196288), iVar1 == 0)) &&
      ((*(byte *)(param_1 + 0x28) & 0x10) == 0)) && ((*(byte *)(param_1 + 0x28) & 0x20) == 0)) {
    piVar3 = (int *)(param_1 + 0x24);
    if (*(int *)(param_1 + 0x24) == 0) {
      if (piVar3 != (int *)0x0) {
        *piVar3 = 0;
      }
      iVar1 = *(int *)(param_1 + 8);
      iVar4 = *(int *)(*(int *)(iVar1 + 0x14) + 0x1c);
      if (iVar4 == 0) {
        iVar1 = *(int *)(iVar1 + 0x14);
        fn_82A93C18(*(undefined2 *)(iVar1 + 0x24),*(undefined2 *)(iVar1 + 0x26),
                          *(undefined1 *)(iVar1 + 0x30),0,*(undefined4 *)(iVar1 + 0x18),0,0,0);
      }
      else if (iVar4 == 2) {
        iVar1 = *(int *)(iVar1 + 0x14);
        fn_82A93D70(*(undefined2 *)(iVar1 + 0x24),*(undefined1 *)(iVar1 + 0x30),0,
                          *(undefined4 *)(iVar1 + 0x18),1,0,0,0);
      }
      else if (iVar4 == 4) {
        iVar1 = *(int *)(iVar1 + 0x14);
        uVar2 = 0;
        auStack_5c[0] = 0;
        if (*(int *)(iVar1 + 0x38) != 0) {
          iVar4 = 0;
          do {
            fn_82A93C18(*(undefined4 *)(iVar4 + *(int *)(iVar1 + 0x44)),
                              *(undefined4 *)(*(int *)(iVar1 + 0x48) + iVar4),
                              *(undefined4 *)(iVar4 + *(int *)(iVar1 + 0x4c)),0,
                              *(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 0x14) + 0x18),0,0,0);
            if (piVar3 != (int *)0x0) {
              *piVar3 = *piVar3;
            }
            uVar2 = uVar2 + 1;
            iVar4 = iVar4 + 4;
          } while (uVar2 < *(uint *)(iVar1 + 0x38));
        }
      }
      else if (iVar4 == 5) {
        iVar1 = *(int *)(iVar1 + 0x14);
        fn_82A93DE0(*(undefined2 *)(iVar1 + 0x24),*(undefined2 *)(iVar1 + 0x26),
                          *(undefined4 *)(iVar1 + 0x38),*(undefined1 *)(iVar1 + 0x30),0,
                          *(undefined4 *)(iVar1 + 0x18),0,0);
      }
    }
    iVar1 = *piVar3;
    if (0 < iVar1) {
      fn_82549610(auStack_5c,0xffffffff83296d4c);
      if (iRam83296d40 == 0) {
        fn_82549660(0x200000,1);
      }
      iVar1 = fn_825B49E8(iRam83296d40,iVar1);
      fn_82A1BB18();
      fn_8259C738(auStack_5c[0]);
      if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        fn_82522D98(0xc);
      }
    }
  }
  return;
}

