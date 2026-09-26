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
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


uint fn_82A1BD58(undefined4 param_1,undefined4 param_2,ulonglong param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uStack_20 = param_1;
  uStack_1c = param_2;
  iVar1 = XMsgStartIORequest(0xfb,0xb0008,param_3,&uStack_20,8);
  if (iVar1 < 0) {
    uVar2 = 0x65b;
  }
  else if ((param_3 & 0xffffffff) == 0) {
    iVar1 = fn_82A2B798();
    uVar2 = iVar1 >> 0x1f & 0x65b;
  }
  else {
    uVar2 = 0x3e5;
  }
  return uVar2;
}

