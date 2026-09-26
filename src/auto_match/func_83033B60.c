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
extern int fn_8302EB70();
extern int fn_83032D88();
extern int fn_83033AB8();


undefined8 fn_83033B60(undefined8 param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar4;
  undefined8 uVar3;
  
  iVar4 = fn_8302EB70((ulonglong)*(uint *)(param_2 + 0x10) + 4);
  if (iVar4 == 0) {
    iVar4 = *(int *)(param_2 + 0x10);
    *(undefined4 *)(param_2 + 0x10) = 0;
    if (iVar4 != 0) {
      fn_83032D88();
    }
    uVar3 = 0x34;
  }
  else {
    iVar1 = *param_4;
    *(int *)(iVar4 + 0xc) = (int)param_1;
    *(int *)(iVar4 + 0x10) = iVar1;
    iVar2 = *(int *)(*(int *)(*(int *)(param_3 + 0x78) + 0x10) + 4);
    *(undefined2 *)(iVar4 + 8) = *(undefined2 *)(iVar2 + 8);
    *(undefined2 *)(iVar4 + 10) = *(undefined2 *)(iVar2 + 10);
    if (iVar1 != 0) {
      fn_83033AB8(param_1);
    }
    uVar3 = 1;
  }
  return uVar3;
}

