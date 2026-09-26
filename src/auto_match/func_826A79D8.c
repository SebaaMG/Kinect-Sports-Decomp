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
extern int fn_82681728();
extern int fn_826944C8();


undefined8 fn_826A79D8(int *param_1,uint *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_30 [4];
  int aiStack_2c [11];
  
  auStack_30[0] = 0;
  fn_82681728(aiStack_2c,(ulonglong)*param_2 + 0x254);
  uVar1 = (**(code **)(*param_1 + 0x28))(param_1,param_2,aiStack_2c,param_4,auStack_30);
  lVar2 = (ulonglong)*(uint *)(aiStack_2c[0] + 8) - 1;
  *(int *)(aiStack_2c[0] + 8) = (int)lVar2;
  if (lVar2 == 0) {
    fn_826944C8(aiStack_2c[0]);
  }
  return uVar1;
}

