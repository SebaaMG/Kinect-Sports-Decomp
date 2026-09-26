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
extern int fn_82BE5240();
extern int fn_82BE64E0();
extern int fn_82BE6B58();
extern int fn_82BF8B70();
extern int fn_82F68CC0();
extern unsigned int lbl_831751D0;


undefined8
fn_82BF8BD0(int param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,undefined8 param_5)

{
  int iVar2;
  ulonglong uVar1;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((((param_2 & 0xffffffff) == 0) || ((param_3 & 0xffffffff) == 0)) ||
     ((param_4 & 0xffffffff) == 0)) {
    uVar3 = 0x44c;
    uVar4 = 0xffffffff82196582;
  }
  else {
    iVar2 = fn_82BF8B70(param_1,param_3);
    if (iVar2 == 0) {
      return 0;
    }
    uVar1 = (*(code *)lbl_831751D0)(0x14);
    *(int *)(param_1 + 0x30) = (int)uVar1;
    if ((uVar1 & 0xffffffff) != 0) {
      fn_82F68CC0(uVar1,param_4,0x14);
      *(int *)(param_1 + 0x48) = (int)param_5;
      iVar2 = fn_82BE6B58(param_1,param_2,0x100,param_5);
      if (iVar2 == 0) {
        return 0;
      }
      fn_82BE64E0(param_1,2);
      return 1;
    }
    uVar3 = 0x65;
    uVar4 = 0xffffffff820ebe20;
  }
  fn_82BE5240(param_1,uVar3,uVar4);
  return 0;
}

