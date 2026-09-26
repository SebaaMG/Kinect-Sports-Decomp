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
extern unsigned int *auStack_80;
extern int fn_82D1EB20();
extern int fn_82D2D400();


int fn_82D25C48(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  undefined1 auStack_80 [128];
  
  iVar1 = fn_82D2D400(param_1 + 0x20,auStack_80);
  *(undefined4 *)(iVar1 + 0x30) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  *(int *)(iVar1 + 8) = (int)param_2;
  *(int *)(iVar1 + 0xc) = (int)param_3;
  *(int *)(iVar1 + 0x10) = (int)param_4;
  fn_82D1EB20(param_1,param_2 + 0x10,param_3 + 0x10,param_4 + 0x10,iVar1 + 0x20,1);
  return iVar1;
}

