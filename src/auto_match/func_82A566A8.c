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
extern int fn_82C2B580();
extern int fn_82C2B590();
extern int fn_82F691F0();


undefined8 fn_82A566A8(int *param_1)

{
  ulonglong in_r7;
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  
  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    uVar1 = 0xffffffff80070057;
  }
  else {
    if (param_1[0x5d] != 0) {
      if (0 < (int)in_r7) {
        iVar4 = 0;
        uVar3 = in_r7;
        do {
          if (*(int *)(iVar4 + param_1[0x5d]) != 0) {
            fn_82C2B590(*(int *)(iVar4 + param_1[0x5d]));
            *(undefined4 *)(iVar4 + param_1[0x5d]) = 0;
          }
          uVar3 = uVar3 - 1;
          iVar4 = iVar4 + 4;
        } while (uVar3 != 0);
      }
      if (param_1[0x5d] != 0) {
        fn_82C2B590();
        param_1[0x5d] = 0;
      }
    }
    if (param_1[0x5e] != 0) {
      if (0 < (int)in_r7) {
        iVar4 = 0;
        uVar3 = in_r7;
        do {
          if (*(int *)(iVar4 + param_1[0x5e]) != 0) {
            fn_82C2B590(*(int *)(iVar4 + param_1[0x5e]));
            *(undefined4 *)(iVar4 + param_1[0x5e]) = 0;
          }
          uVar3 = uVar3 - 1;
          iVar4 = iVar4 + 4;
        } while (uVar3 != 0);
      }
      if (param_1[0x5e] != 0) {
        fn_82C2B590();
        param_1[0x5e] = 0;
      }
    }
    lVar2 = (in_r7 & 0x3fffffff) << 2;
    uVar3 = fn_82C2B580(lVar2);
    param_1[0x5d] = (int)uVar3;
    if ((uVar3 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(uVar3,0,lVar2);
    }
    uVar1 = 0xffffffff8007000e;
  }
  return uVar1;
}

