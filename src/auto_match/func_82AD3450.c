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
extern int fn_82ABE0E8();
extern int fn_82AD2020();


longlong fn_82AD3450(undefined8 param_1,int param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_2 + 0x1c);
  iVar4 = *(int *)(iVar1 + 0x70);
  if ((*(uint *)(iVar4 + 0x30) >> 0x16 & 1) != 0) {
LAB_82ad3488:
    do {
      iVar4 = *(int *)(iVar4 + 0x50);
      if (iVar4 != 0) {
        if ((*(uint *)(iVar4 + 0x30) & 0x400000) != 0) goto LAB_82ad3488;
      }
    } while ((*(uint *)(iVar4 + 0x30) >> 0x16 & 1) != 0);
    *(int *)(iVar1 + 0x70) = iVar4;
  }
  uVar2 = fn_82AD2020(param_1,*(undefined4 *)(iVar1 + 0x70));
  if ((uVar2 & 0xffffffff) == 0) {
    lVar3 = 1;
  }
  else {
    lVar3 = fn_82ABE0E8(uVar2,param_1);
    lVar3 = (lVar3 + -1) - (lVar3 + -2 + (ulonglong)(lVar3 + -1 == 0));
  }
  return lVar3;
}

