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
#define ZEXT48(x) ((U64)((U32)(x)))
extern int fn_8264D6C0();


void fn_82643C30(int param_1,ulonglong param_2,ulonglong param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  puVar1 = *(undefined4 **)(param_1 + 0xc);
  lVar4 = (((param_3 & 0xffffffff) >> 0x14) + 0x200 & 0x1000) + (param_3 & 0x1fffffff) + -0x40000000
  ;
  *(undefined4 *)param_2 = (int)lVar4;
  lVar2 = (((param_2 & 0xffffffff) >> 0x14) + 0x200 & 0x1000) + (param_2 & 0x1fffffff) + -0x40000000
  ;
  *(undefined4 **)(param_1 + 4) = (undefined4 *)param_2;
  lVar3 = ((ulonglong)((uint)puVar1 >> 0x14) + 0x200 & 0x1000) + (ZEXT48(puVar1) & 0x1fffffff) +
          -0x40000000;
  *(int *)(param_1 + 0xc) = (int)param_3 + -4;
  enforceInOrderExecutionIO();
  fn_8264D6C0(lVar2,lVar4,0,puVar1,lVar2,lVar3);
  *puVar1 = (int)lVar2;
  enforceInOrderExecutionIO();
  fn_8264D6C0(lVar3,lVar3 + 0x10);
  return;
}

