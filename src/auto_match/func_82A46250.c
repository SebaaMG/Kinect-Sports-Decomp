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
extern int fn_82A40BA8();
extern int fn_82A44008();
extern int fn_82A4F4E0();
extern int fn_82A52310();


void fn_82A46250(int param_1)

{
  int iVar1;
  int iVar2;
  
  fn_82A44008();
  while (iVar2 = fn_82A40BA8(param_1 + 0x26c), iVar2 != 0) {
    if (iVar2 != 0) {
      fn_82A4F4E0();
    }
  }
  while (iVar2 = fn_82A40BA8(param_1 + 0x294), iVar2 != 0) {
    if (iVar2 != 0) {
      fn_82A4F4E0();
    }
  }
  iVar2 = *(int *)(param_1 + 0x210);
  while (iVar2 != 0) {
    iVar1 = *(int *)(param_1 + 0x210);
    iVar2 = *(int *)(iVar1 + 4);
    *(int *)(iVar1 + 4) = *(int *)(param_1 + 0x1f8);
    *(int *)(param_1 + 0x1f8) = iVar1;
    *(int *)(param_1 + 0x210) = iVar2;
  }
  *(undefined4 *)(param_1 + 0x218) = 0;
  *(undefined4 *)(param_1 + 0x214) = 0;
  iVar2 = *(int *)(param_1 + 0x238);
  while (iVar2 != 0) {
    iVar1 = *(int *)(param_1 + 0x238);
    iVar2 = *(int *)(iVar1 + 4);
    *(int *)(iVar1 + 4) = *(int *)(param_1 + 0x220);
    *(int *)(param_1 + 0x220) = iVar1;
    *(int *)(param_1 + 0x238) = iVar2;
  }
  *(undefined4 *)(param_1 + 0x240) = 0;
  *(undefined4 *)(param_1 + 0x23c) = 0;
  if (*(int *)(param_1 + 0x1d0) != 0) {
    fn_82A52310();
    *(undefined4 *)(param_1 + 0x1d0) = 0;
  }
  if (*(int *)(param_1 + 0x1dc) != 0) {
    fn_82A4F4E0();
    *(undefined4 *)(param_1 + 0x1dc) = 0;
  }
  return;
}

