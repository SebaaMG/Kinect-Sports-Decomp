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
extern unsigned int *auStack_30;
extern int fn_82A2B798();
extern unsigned int uStack_1c;
extern unsigned int uStack_20;
extern unsigned int uStack_28;


/* WARNING: Removing unreachable block (ram,0x82a1bebc) */

ulonglong fn_82A1BED8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar3;
  ulonglong uVar1;
  longlong lVar2;
  undefined4 auStack_30 [2];
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uStack_28 = 0;
  auStack_30[0] = param_1;
  uStack_20 = param_2;
  uStack_1c = param_3;
  iVar3 = XMsgStartIORequest(0xfb,0xb0006,0,auStack_30,0x18);
  if (iVar3 < 0) {
    uVar1 = 0x65b;
  }
  else {
    lVar2 = fn_82A2B798();
    uVar1 = -(ulonglong)(lVar2 != 0) & 0x65b;
  }
  return uVar1;
}

