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


undefined8 fn_82A1C560(longlong param_1)

{
  int iVar2;
  undefined8 uVar1;
  int aiStack_40 [4];
  undefined1 auStack_30 [32];
  
  aiStack_40[0] = 0;
  XeCryptSha(param_1 + 0x22c,0x58,0,0,0,0,auStack_30,0x14);
  iVar2 = XeKeysConsoleSignatureVerification(auStack_30,param_1 + 4,aiStack_40);
  if ((iVar2 == 0) || (uVar1 = 1, aiStack_40[0] == 0)) {
    uVar1 = 0;
  }
  return uVar1;
}

