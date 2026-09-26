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
extern unsigned int *auStack_40;
extern int fn_827664B0();
extern int fn_827668B8();


ulonglong fn_827B0990(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  uint auStack_40 [2];
  byte abStack_38 [56];
  
  uVar5 = 0;
  lVar2 = fn_827664B0(param_1 + 0xc,param_2,auStack_40);
  lVar2 = lVar2 + param_2;
  auStack_40[0] = auStack_40[0] >> 1;
  while (auStack_40[0] != 0) {
    auStack_40[0] = auStack_40[0] - 1;
    uVar3 = fn_827668B8(param_1 + 0xc,lVar2,abStack_38);
    iVar4 = 0;
    lVar2 = uVar3 + lVar2;
    uVar1 = uVar3 & 0xffffffff;
    while (uVar1 != 0) {
      uVar5 = (ulonglong)abStack_38[iVar4] ^ uVar5 * 0x21;
      iVar4 = iVar4 + 1;
      uVar3 = uVar3 - 1;
      uVar1 = uVar3;
    }
  }
  return uVar5;
}

