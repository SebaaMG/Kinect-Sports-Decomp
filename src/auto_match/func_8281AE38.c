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
extern int fn_8281A3C8();
extern int fn_828233A8();


undefined8 fn_8281AE38(int param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  int aiStack_30 [12];
  
  iVar2 = *(int *)(param_1 + 0x7c);
  fn_828233A8(param_1 + 0x88,aiStack_30,0xffffffff828192c8,param_2);
  iVar1 = (int)(short)(aiStack_30[0] - iVar2 >> 6);
  iVar2 = iVar1 * 0x40 + iVar2;
  if (((*(byte *)(iVar2 + 0x36) & 1) == 0) ||
     (iVar1 = fn_8281A3C8(param_1,iVar1,param_3 - (ulonglong)*(uint *)(iVar2 + 0x28)), iVar1 == 0)
     ) {
    param_2 = 0;
  }
  else {
    *(int *)(iVar2 + 0x28) = (int)param_3;
  }
  return param_2;
}

