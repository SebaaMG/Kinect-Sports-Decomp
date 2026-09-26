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
extern int fn_82A2B798();
extern int fn_82CE2380();
extern unsigned int iStack_50;
extern unsigned int iStack_5c;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_60;


uint fn_82CE1D08(undefined8 param_1,undefined4 param_2,undefined4 param_3,ulonglong param_4)

{
  uint uVar1;
  int iVar2;
  uint uStack_60;
  int iStack_5c;
  int aiStack_58 [2];
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  uStack_60 = 0;
  iStack_5c = 0;
  uVar1 = XamGetSystemVersion();
  if (uVar1 < 0x200ce900) {
    fn_82CE2380(0x65b,&uStack_60,aiStack_58,param_4);
  }
  else {
    uStack_60 = XamSessionRefObjByHandle(param_1,&iStack_5c);
    if (uStack_60 == 0) {
      uStack_44 = 0;
      uStack_40 = 0;
      iStack_50 = iStack_5c;
      uStack_3c = 0;
      uStack_4c = param_3;
      uStack_48 = param_2;
      aiStack_58[0] = XMsgStartIORequest(0xfb,0xb001e,param_4,&iStack_50,0x18);
      if (aiStack_58[0] < 0) {
        uStack_60 = 0x65b;
      }
      else if ((param_4 & 0xffffffff) == 0) {
        iVar2 = fn_82A2B798();
        uStack_60 = iVar2 >> 0x1f & 0x65b;
      }
      else {
        uStack_60 = 0x3e5;
      }
    }
  }
  if (iStack_5c != 0) {
    ObDereferenceObject();
  }
  return uStack_60;
}

