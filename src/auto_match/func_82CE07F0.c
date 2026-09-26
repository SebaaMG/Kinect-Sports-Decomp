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
extern unsigned int *auStack_2c;
extern int fn_8314320C();
extern unsigned int uStack_30;


void fn_82CE07F0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar2;
  int iVar3;
  ulonglong uVar1;
  uint uStack_30;
  undefined4 auStack_2c [11];
  
  uStack_30 = 0;
  uVar2 = XamGetSystemVersion();
  if ((uVar2 < 0x200a3200) || (iVar3 = XexGetModuleHandle(0xffffffff820886b4,auStack_2c), iVar3 < 0)
     ) {
    uVar1 = (ulonglong)uStack_30;
  }
  else {
    uVar1 = XexGetProcedureAddress(auStack_2c[0],0x24,&uStack_30);
    uVar1 = ((uVar1 & 0xffffffff) >> 0x1f) - 1 & (ulonglong)uStack_30;
    uStack_30 = (uint)uVar1;
  }
  if (uVar1 == 0) {
    fn_8314320C(param_1,param_2,param_3);
  }
  else {
    (*(code *)uVar1)();
  }
  return;
}

