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
extern int fn_8286B368();


void fn_8286B568(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  uint uVar3;
  longlong lVar2;
  longlong lVar4;
  longlong lVar5;
  
  iVar1 = ((int)param_3 - (int)param_1) / 0x1c;
  if (0x28 < iVar1) {
    uVar3 = iVar1 + 1;
    lVar2 = (longlong)((int)uVar3 >> 3) + (ulonglong)((int)uVar3 < 0 && (uVar3 & 7) != 0);
    lVar4 = lVar2 * 0x1c + param_1;
    fn_8286B368(param_1,lVar4,lVar2 * 0x38 + param_1);
    fn_8286B368(param_2 + lVar2 * -0x1c,param_2,lVar2 * 0x1c + param_2);
    lVar5 = param_3 + lVar2 * -0x1c;
    fn_8286B368(param_3 + lVar2 * -0x38,lVar5,param_3);
    param_1 = lVar4;
    param_3 = lVar5;
  }
  fn_8286B368(param_1,param_2,param_3);
  return;
}

