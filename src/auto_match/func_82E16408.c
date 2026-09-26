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
extern int fn_82CFF8D0();


void fn_82E16408(int param_1,int *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  if ((*(uint *)(param_1 + 0x3c) & 0x80000000) == 0) {
    uVar2 = fn_82CFF8D0(*(undefined4 *)(param_1 + 0x34),*(uint *)(param_1 + 0x3c) << 2);
    (**(code **)(*param_2 + 0x14))
              (param_2,3,0xffffffff8214b434,*(undefined4 *)(param_1 + 0x34),
               *(int *)(param_1 + 0x38) << 2,uVar2);
  }
  uVar1 = *(uint *)(param_1 + 0x48);
  if ((uVar1 & 0x80000000) == 0) {
    uVar2 = fn_82CFF8D0(*(undefined4 *)(param_1 + 0x40),
                              ((uVar1 & 0x3fffffff) + (uVar1 & 0x3fffffff) * 2) * 4);
    (**(code **)(*param_2 + 0x14))
              (param_2,3,0xffffffff821353b8,*(undefined4 *)(param_1 + 0x40),
               ((ulonglong)*(uint *)(param_1 + 0x44) +
                ((ulonglong)*(uint *)(param_1 + 0x44) & 0x7fffffff) * 2 & 0x3fffffff) << 2,uVar2);
  }
  if ((*(uint *)(param_1 + 0x54) & 0x80000000) == 0) {
    uVar2 = fn_82CFF8D0(*(undefined4 *)(param_1 + 0x4c),*(uint *)(param_1 + 0x54) << 3);
    (**(code **)(*param_2 + 0x14))
              (param_2,3,0xffffffff8214b42c,*(undefined4 *)(param_1 + 0x4c),
               *(int *)(param_1 + 0x50) << 3,uVar2);
  }
  if ((*(uint *)(param_1 + 0x60) & 0x80000000) == 0) {
    uVar2 = fn_82CFF8D0(*(undefined4 *)(param_1 + 0x58),*(uint *)(param_1 + 0x60) << 3);
    (**(code **)(*param_2 + 0x14))
              (param_2,3,0xffffffff8214b424,*(undefined4 *)(param_1 + 0x58),
               *(int *)(param_1 + 0x5c) << 3,uVar2);
  }
  return;
}

