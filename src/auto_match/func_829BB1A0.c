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
extern int fn_829BAF18();
extern int fn_829BB008();


void fn_829BB1A0(int param_1,undefined8 param_2,uint *param_3,ulonglong param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x1ac);
  if (*(int *)(iVar1 + 0x30) == 0) {
    iVar3 = (**(code **)(*(int *)(param_1 + 0x1b0) + 0xc))
                      (param_1,*(undefined4 *)((*(int *)(iVar1 + 0x40) + 0xe) * 4 + iVar1));
    if (iVar3 == 0) {
      return;
    }
    *(undefined4 *)(iVar1 + 0x30) = 1;
    *(int *)(iVar1 + 0x4c) = *(int *)(iVar1 + 0x4c) + 1;
  }
  uVar2 = *(uint *)(iVar1 + 0x44);
  if (uVar2 != 0) {
    if (uVar2 == 1) goto LAB_829bb2ac;
    if (2 < uVar2) {
      return;
    }
    (**(code **)(*(int *)(param_1 + 0x1b4) + 4))
              (param_1,*(undefined4 *)((*(int *)(iVar1 + 0x40) + 0xe) * 4 + iVar1),iVar1 + 0x34,
               *(undefined4 *)(iVar1 + 0x48),param_2,param_3,param_4);
    if (*(uint *)(iVar1 + 0x34) < *(uint *)(iVar1 + 0x48)) {
      return;
    }
    *(undefined4 *)(iVar1 + 0x44) = 0;
    if ((param_4 & 0xffffffff) <= (ulonglong)*param_3) {
      return;
    }
  }
  *(undefined4 *)(iVar1 + 0x34) = 0;
  *(int *)(iVar1 + 0x48) = *(int *)(param_1 + 0x140) + -1;
  if (*(int *)(iVar1 + 0x4c) == *(int *)(param_1 + 0x144)) {
    fn_829BB008(param_1);
  }
  *(undefined4 *)(iVar1 + 0x44) = 1;
LAB_829bb2ac:
  (**(code **)(*(int *)(param_1 + 0x1b4) + 4))
            (param_1,*(undefined4 *)((*(int *)(iVar1 + 0x40) + 0xe) * 4 + iVar1),
             (int *)(iVar1 + 0x34),*(undefined4 *)(iVar1 + 0x48),param_2,param_3,param_4);
  if (*(uint *)(iVar1 + 0x48) <= *(uint *)(iVar1 + 0x34)) {
    if (*(int *)(iVar1 + 0x4c) == 1) {
      fn_829BAF18(param_1);
    }
    *(undefined4 *)(iVar1 + 0x30) = 0;
    *(uint *)(iVar1 + 0x40) = *(uint *)(iVar1 + 0x40) ^ 1;
    *(int *)(iVar1 + 0x34) = *(int *)(param_1 + 0x140) + 1;
    iVar3 = *(int *)(param_1 + 0x140);
    *(undefined4 *)(iVar1 + 0x44) = 2;
    *(int *)(iVar1 + 0x48) = iVar3 + 2;
  }
  return;
}

