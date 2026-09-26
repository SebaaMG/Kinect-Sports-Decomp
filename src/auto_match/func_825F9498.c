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
extern int fn_8251FA58();
extern int fn_82522ED8();
extern int fn_82545950();
extern int fn_82545A90();


void fn_825F9498(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined4 *puVar5;
  
  if (param_1[0x16] != 0) {
    fn_82545A90(param_1 + 0x16);
  }
  if (param_1[0x15] != 0) {
    fn_82545950(param_1 + 0x15);
  }
  if (param_1[0x14] != 0) {
    fn_82545A90(param_1 + 0x14);
  }
  if (param_1[0x13] != 0) {
    fn_82545950(param_1 + 0x13);
  }
  if (param_1[0x12] != 0) {
    fn_82545A90(param_1 + 0x12);
  }
  if (param_1[0x11] != 0) {
    fn_82545950(param_1 + 0x11);
  }
  if (param_1[0xc] != 0) {
    fn_8251FA58();
    param_1[0xc] = 0;
  }
  if (param_1[0xd] != 0) {
    fn_8251FA58();
    param_1[0xd] = 0;
  }
  if (param_1[0xe] != 0) {
    fn_8251FA58();
    param_1[0xe] = 0;
  }
  if (param_1[0xf] != 0) {
    fn_8251FA58();
    param_1[0xf] = 0;
  }
  if (param_1[0x10] != 0) {
    fn_8251FA58();
    param_1[0x10] = 0;
  }
  iVar3 = param_1[2];
  while (iVar3 != 0) {
    iVar1 = *(int *)(iVar3 + 0x1c);
    iVar2 = *(int *)(iVar3 + 0x20);
    while (iVar1 != 0) {
      iVar1 = *(int *)(iVar1 + 0x18);
      fn_82522ED8();
    }
    *(undefined4 *)(iVar3 + 0x1c) = 0;
    fn_82522ED8(iVar3);
    iVar3 = iVar2;
  }
  *param_1 = 0;
  puVar5 = param_1 + 2;
  param_1[2] = 0;
  lVar4 = 3;
  do {
    iVar3 = puVar5[3];
    while (iVar3 != 0) {
      iVar3 = *(int *)(iVar3 + 0x28);
      fn_82522ED8();
    }
    puVar5[2] = 0;
    lVar4 = lVar4 + -1;
    puVar5 = puVar5 + 3;
    *puVar5 = 0;
  } while (lVar4 != 0);
  fn_82522ED8(param_1);
  return;
}

