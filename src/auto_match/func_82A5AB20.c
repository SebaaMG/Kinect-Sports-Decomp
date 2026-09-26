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
extern int fn_82A40018();
extern int fn_82A412D8();
extern int fn_82A5A4D8();
extern unsigned int lbl_8208DE68;


void fn_82A5AB20(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  *param_1 = &lbl_8208DE68;
  iVar2 = param_1[0x8b];
  while (iVar2 != 0) {
    iVar1 = param_1[0x8b];
    iVar2 = *(int *)(iVar1 + 4);
    *(undefined4 *)(iVar1 + 4) = param_1[0x58];
    param_1[0x58] = iVar1;
    param_1[0x8b] = iVar2;
  }
  param_1[0x8d] = 0;
  piVar3 = param_1 + 0x21;
  param_1[0x8c] = 0;
  iVar2 = param_1[0x54];
  while (iVar2 != 0) {
    iVar1 = param_1[0x54];
    iVar2 = *(int *)(iVar1 + 4);
    *(int *)(iVar1 + 4) = *piVar3;
    *piVar3 = iVar1;
    param_1[0x54] = iVar2;
  }
  param_1[0x56] = 0;
  param_1[0x55] = 0;
  fn_82A412D8();
  fn_82A412D8(piVar3);
  fn_82A40018(param_1 + 0x10);
  fn_82A5A4D8(param_1);
  return;
}

