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
extern int fn_8268ACE8();
extern int fn_8268BA10();
extern int fn_8278CF00();
extern int fn_82F66570();


void fn_8278CF70(int param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  
  if ((*(ushort *)(param_1 + 0x2a) >> 0xb & 1) != 0) {
    iVar1 = fn_8268ACE8((uint *)(param_1 + 8));
    iVar2 = fn_8268ACE8(param_2);
    if ((iVar1 != iVar2) ||
       (iVar1 = thunk_FUN_82f65ac0(((ulonglong)*(uint *)(param_1 + 8) & 0xfffffffc) + 8,
                                   ((ulonglong)*param_2 & 0xfffffffc) + 8), iVar1 != 0)) {
      fn_8278CF00(param_1);
    }
  }
  fn_8268BA10(param_1 + 8,param_2);
  *(ushort *)(param_1 + 0x2a) = *(ushort *)(param_1 + 0x2a) | 4;
  iVar1 = fn_82F66570(((ulonglong)*(uint *)(param_1 + 8) & 0xfffffffc) + 8,0x2c);
  if (iVar1 == 0) {
    uVar3 = *(ushort *)(param_1 + 0x2a) | 0x1000;
  }
  else {
    uVar3 = *(ushort *)(param_1 + 0x2a) & 0xefff;
  }
  *(ushort *)(param_1 + 0x2a) = uVar3;
  return;
}

