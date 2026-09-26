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
extern int fn_8268E9E8();


void fn_8267AE38(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = ~(*(int *)(param_1 + 4) - 1U);
  uVar2 = (*(int *)(param_1 + 4) + param_2) - 1U & uVar1;
  if (*(uint *)(param_1 + 8) < 4) {
    iVar3 = (param_2 + param_3 & uVar1) - uVar2;
    iVar4 = *(uint *)(param_1 + 8) * 0x20 + param_1;
    *(uint *)(iVar4 + 0x40) = uVar2;
    *(int *)(iVar4 + 0x44) = iVar3;
    *(undefined4 *)(iVar4 + 0x48) = 0;
    *(int *)(param_1 + 0xb0) = iVar3 + *(int *)(param_1 + 0xb0);
    fn_8268E9E8(*(undefined4 *)(param_1 + 0xc),iVar4 + 0x30);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  }
  return;
}

