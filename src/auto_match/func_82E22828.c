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
extern int fn_8265C9E0();


int fn_82E22828(int *param_1)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  
  iVar1 = (**(code **)(*param_1 + 0x14))();
  param_1[1] = iVar1;
  iVar1 = fn_8265C9E0(0x40);
  iVar3 = 0;
  do {
    uVar2 = (**(code **)(*param_1 + 0x18))(param_1);
    *(undefined1 *)(iVar3 + iVar1) = uVar2;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x40);
  (**(code **)(*param_1 + 0x2c))(param_1,iVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(iVar1 + 0x36);
  *(undefined1 *)((int)param_1 + 9) = *(undefined1 *)(iVar1 + 0x24);
  return iVar1;
}

