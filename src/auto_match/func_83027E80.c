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
extern int fn_82FA5100();
extern int fn_83027A10();
extern unsigned int lbl_831BC768;


undefined8 fn_83027E80(undefined8 param_1,ulonglong param_2,int param_3)

{
  undefined8 uVar1;
  int iVar2;
  ulonglong uVar3;
  
  if (param_3 != 3) {
    param_1 = 1;
  }
  uVar3 = param_2 & 0xfffffff7;
  iVar2 = 0;
  if ((param_2 & 0xfffffff7) != 0) {
    do {
      iVar2 = iVar2 + 1;
      uVar3 = uVar3 - 1 & uVar3;
    } while (uVar3 != 0);
    if ((iVar2 != 0) &&
       (uVar3 = fn_82FA5100(lbl_831BC768,
                              ((longlong)(int)((uint)param_1 & 0xffff) * (longlong)iVar2 - 1U &
                              0x3ffffff) * 0x40 + 0x70,0x10), (uVar3 & 0xffffffff) != 0)) {
      uVar1 = fn_83027A10(uVar3,param_1,param_2);
      return uVar1;
    }
  }
  return 0;
}

