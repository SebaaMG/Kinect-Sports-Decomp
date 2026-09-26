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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_82AF87E0();


void fn_82AFA478(int param_1,int param_2,uint param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if (10 < param_3) {
    return;
  }
  if ((*(uint *)(param_1 + 0x28) & 0x2000000) == 0) {
    return;
  }
  if ((*(uint *)(param_2 + 0x14) & 1) != 0) {
    return;
  }
  *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) | 1;
  puVar1 = *(uint **)(param_1 + 0x290);
  if ((puVar1[1] & 1) == 0) {
    uVar3 = *puVar1 & 0xfffffffe;
    iVar4 = uVar3 - 4;
    if ((iVar4 != 0) && (*(int *)(uVar3 + 4) + 1U <= *(uint *)(uVar3 + 8))) goto LAB_82afa4f4;
  }
  iVar4 = fn_82AF87E0(puVar1,1);
LAB_82afa4f4:
  iVar2 = *(int *)(iVar4 + 8);
  *(int *)(iVar4 + 8) = iVar2 + 1;
  *(ulonglong *)((iVar2 + 2) * 8 + iVar4) = CONCAT44(param_2,param_3);
  return;
}

