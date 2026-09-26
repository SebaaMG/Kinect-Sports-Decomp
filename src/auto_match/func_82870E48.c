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
extern unsigned int *auStack_40;
extern int fn_8257A9F0();
extern int fn_82811080();
extern int fn_82811400();
extern int fn_82870C58();


ulonglong fn_82870E48(undefined8 param_1)

{
  undefined8 uVar1;
  int iVar3;
  ulonglong uVar2;
  uint auStack_40 [4];
  undefined1 auStack_30 [32];
  
  uVar1 = fn_82811400(auStack_30,4);
  iVar3 = fn_82811080(0xffffffff832116f8,0x78,uVar1);
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_82870C58();
  }
  auStack_40[0] = (uint)uVar2;
  if ((uVar2 & 0xffffffff) != 0) {
    fn_8257A9F0(param_1,auStack_40);
    uVar2 = (ulonglong)auStack_40[0];
  }
  return uVar2;
}

