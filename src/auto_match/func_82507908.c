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
extern int fn_8251FBA8();
extern int fn_82526A20();


longlong fn_82507908(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar3 = 0;
  uVar1 = fn_8251FBA8();
  lVar4 = param_1;
  if ((int)((uVar1 & 0xffffffff) / 0x84) != 0) {
    do {
      iVar2 = fn_82526A20(lVar4 + 4,param_2);
      if (iVar2 == 0) {
        return lVar4;
      }
      uVar3 = uVar3 + 1;
      lVar4 = lVar4 + 0x84;
      uVar1 = fn_8251FBA8(param_1);
    } while ((uVar3 & 0xffffffff) < (uVar1 & 0xffffffff) / 0x84);
  }
  return 0;
}

