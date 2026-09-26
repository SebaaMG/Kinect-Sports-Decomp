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
extern int fn_8243E578();


ulonglong fn_8243E640(int param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  bool bVar6;
  
  uVar4 = fn_8243E578();
  iVar5 = fn_8243E578(param_1,param_3);
  if ((((uVar4 & 0xffffffff) == 0) || (iVar5 == 0)) ||
     ((iVar1 = *(int *)((int)uVar4 + 0x4c), iVar1 != 1 &&
      ((*(int *)(iVar5 + 0x4c) != 1 || (iVar1 != 1)))))) {
    uVar4 = 0;
  }
  else if (*(int *)(iVar5 + 0x4c) == 1) {
    uVar2 = *(uint *)((int)uVar4 + 0x48);
    uVar3 = *(uint *)(iVar5 + 0x48);
    if (*(int *)(param_1 + 0x14) == 0) {
      bVar6 = uVar2 <= uVar3;
    }
    else {
      bVar6 = uVar3 <= uVar2;
    }
    uVar4 = ((~(ulonglong)(uVar3 ^ uVar2) & 0xffffffff) >> 0x1f) + (ulonglong)bVar6 & 1;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}

