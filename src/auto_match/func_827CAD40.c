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
extern int fn_827CA938();
extern int fn_827CAA60();
extern int fn_827CAB30();
extern int fn_827CABC0();
extern int fn_827CABE0();
extern int fn_827CAC48();
extern unsigned int lbl_827CAD38;


void fn_827CAD40(int *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  
  puVar3 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x18);
  param_1[0x69] = (int)puVar3;
  *puVar3 = &lbl_827CAD38;
  iVar6 = param_1[10];
  if (iVar6 == 1) {
    bVar1 = param_1[9] == 1;
LAB_827cadcc:
    if (!bVar1) {
LAB_827cadd0:
      *(undefined4 *)(*param_1 + 0x14) = 10;
      (**(code **)*param_1)(param_1);
    }
  }
  else {
    if (1 < iVar6) {
      if (iVar6 < 4) {
        bVar1 = param_1[9] == 3;
      }
      else {
        if (5 < iVar6) goto LAB_827cadb4;
        bVar1 = param_1[9] == 4;
      }
      goto LAB_827cadcc;
    }
LAB_827cadb4:
    if (param_1[9] < 1) goto LAB_827cadd0;
  }
  iVar6 = param_1[0xb];
  if (iVar6 == 1) {
    param_1[0x19] = 1;
    if ((param_1[10] == 1) || (param_1[10] == 3)) {
      iVar6 = 1;
      puVar3[1] = fn_827CABC0;
      if (1 < param_1[9]) {
        iVar4 = 0x54;
        do {
          iVar6 = iVar6 + 1;
          iVar2 = param_1[0x31] + iVar4;
          iVar4 = iVar4 + 0x54;
          *(undefined1 *)(iVar2 + 0x30) = 0;
        } while (iVar6 < param_1[9]);
      }
      goto LAB_827caf34;
    }
  }
  else {
    if (iVar6 == 2) {
      iVar6 = param_1[10];
      param_1[0x19] = 3;
      if (iVar6 != 3) {
        if (iVar6 != 1) {
          bVar1 = iVar6 == 2;
          goto LAB_827cae64;
        }
        pcVar5 = fn_827CABE0;
LAB_827cae70:
        puVar3[1] = pcVar5;
        goto LAB_827caf34;
      }
      pcVar5 = fn_827CAA60;
LAB_827cae50:
      puVar3[1] = pcVar5;
      fn_827CA938(param_1);
      goto LAB_827caf34;
    }
    if (iVar6 == 4) {
      param_1[0x19] = 4;
      if (param_1[10] == 5) {
        pcVar5 = fn_827CAC48;
        goto LAB_827cae50;
      }
      bVar1 = param_1[10] == 4;
LAB_827cae64:
      if (bVar1) {
        pcVar5 = fn_827CAB30;
        goto LAB_827cae70;
      }
    }
    else if (iVar6 == param_1[10]) {
      param_1[0x19] = param_1[9];
      puVar3[1] = fn_827CAB30;
      goto LAB_827caf34;
    }
  }
  *(undefined4 *)(*param_1 + 0x14) = 0x1b;
  (**(code **)*param_1)(param_1);
LAB_827caf34:
  if (*(char *)((int)param_1 + 0x4a) == '\0') {
    param_1[0x1a] = param_1[0x19];
  }
  else {
    param_1[0x1a] = 1;
  }
  return;
}

