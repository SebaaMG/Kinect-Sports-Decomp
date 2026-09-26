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
extern unsigned int *auStack_40;
extern unsigned int *auStack_60;
extern int fn_82230300();
extern int fn_82579EF0();


void fn_8245C7B8(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [64];
  
  fn_82230300(auStack_40,0,0);
  fn_82230300(auStack_60,0,0);
  *(undefined4 *)(param_1 + 0x6b4) = 1;
  iVar2 = param_1 + 0x6c8;
  *(undefined4 *)(param_1 + 0x664) = 1;
  iVar1 = fn_82579EF0(iVar2,0xffffffff821bad24,0);
  if ((-1 < iVar1) && (iVar1 < 0x10000)) {
    *(short *)(param_1 + 0x65c) = (short)iVar1;
  }
  iVar1 = fn_82579EF0(iVar2,0xffffffff821bad3c,0);
  if ((-1 < iVar1) && (iVar1 < 0x10000)) {
    *(short *)(param_1 + 0x65e) = (short)iVar1;
  }
  iVar1 = fn_82579EF0(iVar2,0xffffffff821bad54,*(undefined2 *)(param_1 + 0x690));
  if ((-1 < iVar1) && (iVar1 < 0x10000)) {
    *(short *)(param_1 + 0x690) = (short)iVar1;
  }
  iVar1 = fn_82579EF0(iVar2,0xffffffff821bad60,*(undefined4 *)(param_1 + 0x718));
  *(int *)(param_1 + 0x718) = iVar1;
  if ((iVar1 < 0) || (5 < iVar1)) {
    *(undefined4 *)(param_1 + 0x718) = 0;
  }
  fn_82230300(auStack_60,1,0);
  fn_82230300(auStack_40,1,0);
  return;
}

