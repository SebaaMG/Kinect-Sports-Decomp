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
extern unsigned int fStack_40;
extern unsigned int stack0x00000000;
extern U64 storeVectorElementWordIndexed();


double fn_82D43FA8(int *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 in_vs44 [16];
  float fStack_40;
  
  (**(code **)(*param_1 + 0x38))(param_1,param_2,ZEXT48(&stack0x00000000) - 0x30);
  lVar2 = ZEXT48(&stack0x00000000) - 0x40;
  uVar1 = storeVectorElementWordIndexed(in_vs44,0,lVar2);
  *(undefined4 *)lVar2 = uVar1;
  return (double)((float)param_1[4] + fStack_40);
}

