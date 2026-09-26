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
extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern int fn_82E43BE8();
extern int fn_82E5D2F8();
extern int fn_82E5D5F0();
extern int fn_82E5FC30();
extern int fn_82E5FEE8();
extern int fn_82E61058();
extern int fn_82E61548();
extern int fn_82E617F8();


longlong fn_82E43DC0(int param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined2 auStack_40 [2];
  int *piStack_3c;
  uint auStack_38 [14];
  
  if (((*(int *)(param_1 + 0x18) == 0) || (*(int *)(param_1 + 0x1c) == 0)) ||
     (*(int *)(param_1 + 0x78) == 0)) {
    lVar1 = -0x3ff2c94e;
  }
  else {
    piStack_3c = (int *)0x0;
    lVar1 = fn_82E61058();
    if (((-1 < lVar1) &&
        (lVar1 = fn_82E61548(*(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x18),
                                   *(undefined4 *)(param_1 + 0x1c)), -1 < lVar1)) &&
       (lVar1 = fn_82E5FC30(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c)),
       -1 < lVar1)) {
      auStack_38[0] = 0;
      lVar1 = (**(code **)(**(int **)(param_1 + 0x78) + 0x84))(*(int **)(param_1 + 0x78),auStack_38)
      ;
      if (-1 < lVar1) {
        uVar2 = 0;
        if (auStack_38[0] != 0) {
          do {
            auStack_40[0] = 0;
            lVar1 = (**(code **)(**(int **)(param_1 + 0x78) + 0x88))
                              (*(int **)(param_1 + 0x78),uVar2,auStack_40,&piStack_3c);
            if ((lVar1 < 0) ||
               (lVar1 = fn_82E617F8(piStack_3c,*(undefined4 *)(param_1 + 0x18),
                                          *(undefined4 *)(param_1 + 0x1c)), lVar1 < 0))
            goto LAB_82e43f14;
            if (piStack_3c != (int *)0x0) {
              (**(code **)(*piStack_3c + 8))();
              piStack_3c = (int *)0x0;
            }
            uVar2 = uVar2 + 1;
          } while ((uVar2 & 0xffffffff) < (ulonglong)auStack_38[0]);
        }
        lVar1 = fn_82E5FEE8(*(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x18),
                                  *(undefined4 *)(param_1 + 0x1c));
        if ((-1 < lVar1) && (lVar1 = fn_82E5D2F8(*(undefined4 *)(param_1 + 0x18)), -1 < lVar1)
           ) {
          lVar1 = fn_82E5D5F0(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c))
          ;
        }
      }
    }
LAB_82e43f14:
    if (piStack_3c != (int *)0x0) {
      (**(code **)(*piStack_3c + 8))();
      piStack_3c = (int *)0x0;
    }
    if ((int)lVar1 < 0) {
      fn_82E43BE8(param_1);
    }
  }
  return lVar1;
}

