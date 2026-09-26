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
extern int fn_82AD6090();


void fn_82B25248(undefined8 param_1,int param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if ((*(uint *)(param_2 + 8) >> 0x1a & 1) != 0) {
    return;
  }
  *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x4000000;
  if ((param_3[1] & 1) == 0) {
    uVar2 = *param_3 & 0xfffffffe;
    iVar3 = uVar2 - 4;
    if ((iVar3 != 0) && (*(int *)(uVar2 + 4) + 1U <= *(uint *)(uVar2 + 8))) goto LAB_82b252b0;
  }
  iVar3 = fn_82AD6090(param_3,1);
LAB_82b252b0:
  iVar1 = *(int *)(iVar3 + 8);
  *(int *)(iVar3 + 8) = iVar1 + 1;
  *(int *)((iVar1 + 4) * 4 + iVar3) = param_2;
  return;
}

