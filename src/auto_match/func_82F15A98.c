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
extern int fn_82F02410();


void fn_82F15A98(int param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = param_2 - (ulonglong)*(uint *)(param_1 + 0x588);
  iVar3 = (int)lVar2;
  if ((iVar3 < (int)param_3) || ((int)param_3 + 6 < iVar3)) {
    fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),7,3);
    uVar1 = 5;
  }
  else {
    uVar1 = 3;
    param_2 = lVar2 - param_3;
  }
  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),param_2,uVar1);
  return;
}

