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
extern int fn_82A1DDC0();


void fn_82CD79E0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  undefined8 param_5,longlong param_6,longlong param_7,longlong param_8)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint in_stack_00000064;
  uint in_stack_0000007c;
  uint in_stack_00000084;
  
  uVar5 = (ulonglong)in_stack_0000007c;
  iVar1 = (int)param_5 >> 1;
  iVar2 = (int)param_6 >> 1;
  lVar3 = (longlong)iVar2;
  lVar4 = lVar3;
  if (0 < lVar3) {
    do {
      fn_82A1DDC0(uVar5,param_3,iVar1);
      lVar4 = lVar4 + -1;
      uVar5 = uVar5 + (longlong)((int)in_stack_00000064 >> 1);
      param_3 = param_3 + param_8;
    } while (lVar4 != 0);
  }
  uVar5 = (ulonglong)in_stack_00000084;
  if (0 < iVar2) {
    do {
      fn_82A1DDC0(uVar5,param_4,iVar1);
      lVar3 = lVar3 + -1;
      uVar5 = uVar5 + (longlong)((int)in_stack_00000064 >> 1);
      param_4 = param_4 + param_8;
    } while (lVar3 != 0);
  }
  if (0 < (int)param_6) {
    do {
      fn_82A1DDC0(param_1,param_2,param_5);
      param_6 = param_6 + -1;
      param_1 = param_1 + (ulonglong)in_stack_00000064;
      param_2 = param_2 + param_7;
    } while (param_6 != 0);
  }
  return;
}

