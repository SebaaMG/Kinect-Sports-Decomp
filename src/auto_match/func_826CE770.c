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
extern int fn_826CC3C8();
extern int fn_826CDA28();
extern int fn_826F66D8();
extern int fn_826F6828();


void fn_826CE770(int *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined2 uVar3;
  char cVar4;
  uint uVar1;
  int iVar2;
  byte bStack_40;
  byte abStack_3f [63];
  
  (**(code **)(*param_1 + 0x1c))(param_1,0xffffffff821cc86c);
  uVar3 = fn_826F66D8(param_1);
  cVar4 = fn_826F6828(param_1);
  uVar1 = fn_826CC3C8(param_2,uVar3,0);
  if ((uVar1 == 0) || (uVar1 = -(uint)((*(byte *)(uVar1 + 0x35) & 2) == 0) & uVar1, uVar1 == 0)) {
    iVar2 = fn_826CDA28(param_2,uVar3);
    *(char *)(iVar2 + 0x34) = cVar4;
    *(int **)(iVar2 + 0x30) = param_1;
    *(int **)(iVar2 + 0x2c) = param_1;
    *(int **)(iVar2 + 0x28) = param_1;
    *(int **)(iVar2 + 0x24) = param_1;
    *(int **)(iVar2 + 0x20) = param_1;
    *(int **)(iVar2 + 0x1c) = param_1;
    *(int **)(iVar2 + 0x18) = param_1;
    *(int **)(iVar2 + 0x14) = param_1;
    *(int **)(iVar2 + 0x10) = param_1;
    *(undefined4 *)(iVar2 + 8) = param_3;
    return;
  }
  if (cVar4 == '\x01') {
    (**(code **)(*param_1 + 0x28))(abStack_3f,param_1);
    if ((abStack_3f[0] & 4) != 0) {
      *(int **)(uVar1 + 0x14) = param_1;
    }
    if ((abStack_3f[0] & 8) != 0) {
      *(int **)(uVar1 + 0x18) = param_1;
    }
    if ((abStack_3f[0] & 0x20) != 0) {
      *(int **)(uVar1 + 0x1c) = param_1;
    }
    if ((abStack_3f[0] & 0x80) != 0) {
      *(int **)(uVar1 + 0x20) = param_1;
    }
    if ((abStack_3f[0] & 1) != 0) {
      *(int **)(uVar1 + 0x24) = param_1;
    }
    if ((abStack_3f[0] & 0x40) != 0) {
      *(int **)(uVar1 + 0x28) = param_1;
    }
    if ((abStack_3f[0] & 0x10) != 0) {
      *(int **)(uVar1 + 0x2c) = param_1;
    }
    if ((abStack_3f[0] & 2) == 0) {
      return;
    }
    *(int **)(uVar1 + 0x30) = param_1;
    return;
  }
  if (cVar4 == '\x02') {
    if (*(char *)(uVar1 + 0x34) != '\0') {
      *(undefined1 *)(uVar1 + 0x34) = 2;
    }
    (**(code **)(*param_1 + 0x28))(&bStack_40,param_1);
    if ((bStack_40 & 4) != 0) {
      *(int **)(uVar1 + 0x14) = param_1;
    }
    if ((bStack_40 & 8) != 0) {
      *(int **)(uVar1 + 0x18) = param_1;
    }
    if ((bStack_40 & 0x20) != 0) {
      *(int **)(uVar1 + 0x1c) = param_1;
    }
    if ((bStack_40 & 0x80) != 0) {
      *(int **)(uVar1 + 0x20) = param_1;
    }
    if ((bStack_40 & 1) != 0) {
      *(int **)(uVar1 + 0x24) = param_1;
    }
    if ((bStack_40 & 0x40) != 0) {
      *(int **)(uVar1 + 0x28) = param_1;
    }
    if ((bStack_40 & 0x10) != 0) {
      *(int **)(uVar1 + 0x2c) = param_1;
    }
    if ((bStack_40 & 2) == 0) goto LAB_826ce864;
  }
  else {
    *(int **)(uVar1 + 0x2c) = param_1;
    *(int **)(uVar1 + 0x28) = param_1;
    *(int **)(uVar1 + 0x24) = param_1;
    *(int **)(uVar1 + 0x20) = param_1;
    *(int **)(uVar1 + 0x1c) = param_1;
    *(int **)(uVar1 + 0x18) = param_1;
    *(int **)(uVar1 + 0x14) = param_1;
    *(int **)(uVar1 + 0x10) = param_1;
  }
  *(int **)(uVar1 + 0x30) = param_1;
LAB_826ce864:
  *(undefined4 *)(uVar1 + 8) = param_3;
  return;
}

