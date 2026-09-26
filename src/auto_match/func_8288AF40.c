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
extern int fn_8288A5D8();
extern int fn_8288AE70();
extern int fn_828EA268();
extern unsigned int lbl_82005718;
extern unsigned int lbl_82196410;


undefined4 *
fn_8288AF40(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             int param_5)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_30 [4];
  int aiStack_2c [11];
  
  param_1[0xc] = param_2;
  param_1[0xe] = param_3;
  param_1[0xd] = param_4;
  uVar1 = lbl_82005718;
  *param_1 = &lbl_82196410;
  param_1[0x11] = uVar1;
  fn_8288A5D8(param_1 + 0x49,auStack_30,auStack_30[0]);
  if (param_5 == 0) {
    param_5 = -0x7cdec134;
  }
  param_1[0x4d] = param_5;
  uVar1 = fn_828EA268(param_1[0xd]);
  param_1[0xf] = uVar1;
  puVar3 = param_1 + 0x11;
  lVar5 = 0x37;
  do {
    puVar3 = puVar3 + 1;
    *puVar3 = 0;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  iVar4 = 0;
  do {
    aiStack_2c[0] = iVar4;
    puVar2 = (undefined1 *)fn_8288AE70(param_1 + 0x49,aiStack_2c);
    iVar4 = iVar4 + 1;
    *puVar2 = 0;
  } while (iVar4 < 0x1b);
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  lVar5 = 9;
  puVar3 = param_1;
  do {
    puVar3 = puVar3 + 1;
    *puVar3 = 0;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return param_1;
}

