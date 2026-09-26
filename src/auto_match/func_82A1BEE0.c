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
extern unsigned int uStack_18;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;
extern unsigned int uStack_28;


ulonglong fn_82A1BEE0(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                       ulonglong param_5)

{
  int iVar3;
  ulonglong uVar1;
  longlong lVar2;
  undefined4 auStack_30 [2];
  undefined8 uStack_28;
  uint uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  uStack_28 = 0;
  auStack_30[0] = param_1;
  uStack_20 = param_2;
  uStack_1c = param_3;
  uStack_18 = param_4;
  if (((param_2 & 0xf0000000) == 0x40000000) &&
     (iVar3 = XexCheckExecutablePrivilege(0x24), iVar3 == 0)) {
    uVar1 = 5;
  }
  else {
    iVar3 = XMsgStartIORequest(0xfb,0xb0007,param_5,auStack_30,0x20);
    if (iVar3 < 0) {
      uVar1 = 0x65b;
    }
    else if ((param_5 & 0xffffffff) == 0) {
      lVar2 = fn_82A2B798();
      uVar1 = -(ulonglong)(lVar2 != 0) & 0x65b;
    }
    else {
      uVar1 = 0x3e5;
    }
  }
  return uVar1;
}

