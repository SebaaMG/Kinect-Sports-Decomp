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
extern int fn_82A2B798();
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


ulonglong fn_82CE1908(undefined8 param_1,undefined4 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  int iVar3;
  longlong lVar2;
  undefined4 auStack_40 [4];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  
  uVar1 = XamSessionRefObjByHandle(param_1,auStack_40);
  if (uVar1 == 0) {
    uStack_28 = 0;
    uStack_30 = auStack_40[0];
    uStack_2c = param_2;
    iVar3 = XMsgStartIORequest(0xfb,0xb0014,param_3,&uStack_30,0x10);
    if (iVar3 < 0) {
      uVar1 = 0x65b;
    }
    else if ((param_3 & 0xffffffff) == 0) {
      lVar2 = fn_82A2B798();
      uVar1 = -(ulonglong)(lVar2 != 0) & 0x65b;
    }
    else {
      uVar1 = 0x3e5;
    }
    ObDereferenceObject(auStack_40[0]);
  }
  return uVar1;
}

