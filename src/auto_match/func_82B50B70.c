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
extern int fn_82AF87E0();


void fn_82B50B70(uint *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if ((param_1[1] & 1) == 0) {
    uVar2 = *param_1 & 0xfffffffe;
    iVar3 = uVar2 - 4;
    if (iVar3 != 0) {
      if (*(int *)(uVar2 + 4) + 1U <= *(uint *)(uVar2 + 8)) goto LAB_82b50bc4;
    }
  }
  iVar3 = fn_82AF87E0(param_1,1);
LAB_82b50bc4:
  iVar1 = *(int *)(iVar3 + 8);
  *(int *)(iVar3 + 8) = iVar1 + 1;
  *(ulonglong *)((iVar1 + 2) * 8 + iVar3) = (ulonglong)param_2;
  return;
}

