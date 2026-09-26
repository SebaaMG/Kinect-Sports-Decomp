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
extern unsigned int *auStack_50;
extern int fn_82A2B798();
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


ulonglong fn_82CE16D8(undefined8 param_1,undefined4 param_2,undefined4 param_3,ulonglong param_4)

{
  ulonglong uVar1;
  int iVar3;
  longlong lVar2;
  undefined4 auStack_50 [4];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  
  uVar1 = XamSessionRefObjByHandle(param_1,auStack_50);
  if (uVar1 == 0) {
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_40 = auStack_50[0];
    uStack_3c = param_2;
    uStack_34 = param_3;
    iVar3 = XMsgStartIORequest(0xfb,0xb0013,param_4,&uStack_40,0x14);
    if (iVar3 < 0) {
      uVar1 = 0x65b;
    }
    else if ((param_4 & 0xffffffff) == 0) {
      lVar2 = fn_82A2B798();
      uVar1 = -(ulonglong)(lVar2 != 0) & 0x65b;
    }
    else {
      uVar1 = 0x3e5;
    }
    ObDereferenceObject(auStack_50[0]);
  }
  return uVar1;
}

