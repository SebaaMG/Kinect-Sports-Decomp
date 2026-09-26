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
extern int fn_827CFBC0();
extern int fn_827CFC90();
extern int fn_827CFDA8();
extern int fn_827CFE48();
extern int fn_827CFF80();
extern int fn_827CFFE0();
extern unsigned int lbl_827D0068;


void fn_827D0070(int *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  code *pcVar4;
  
  puVar3 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0xc);
  param_1[0x54] = (int)puVar3;
  *puVar3 = &lbl_827D0068;
  iVar2 = param_1[10];
  if (iVar2 == 1) {
    bVar1 = param_1[9] == 1;
LAB_827d0104:
    if (!bVar1) {
LAB_827d0108:
      *(undefined4 *)(*param_1 + 0x14) = 9;
      (**(code **)*param_1)(param_1);
    }
  }
  else {
    if (1 < iVar2) {
      if (iVar2 < 4) {
        bVar1 = param_1[9] == 3;
      }
      else {
        if (5 < iVar2) goto LAB_827d00ec;
        bVar1 = param_1[9] == 4;
      }
      goto LAB_827d0104;
    }
LAB_827d00ec:
    if (param_1[9] < 1) goto LAB_827d0108;
  }
  iVar2 = param_1[0x10];
  if (iVar2 == 1) {
    if (param_1[0xf] != 1) {
      *(undefined4 *)(*param_1 + 0x14) = 10;
      (**(code **)*param_1)(param_1);
    }
    iVar2 = param_1[10];
    if (iVar2 != 1) {
      if (iVar2 == 2) {
        pcVar4 = fn_827CFDA8;
        goto LAB_827d02f0;
      }
      if (iVar2 != 3) goto LAB_827d031c;
    }
    pcVar4 = fn_827CFF80;
    goto LAB_827d0314;
  }
  if (iVar2 == 2) {
    if (param_1[0xf] != 3) {
      *(undefined4 *)(*param_1 + 0x14) = 10;
      (**(code **)*param_1)(param_1);
    }
    bVar1 = param_1[10] == 2;
LAB_827d01dc:
    if (!bVar1) {
LAB_827d031c:
      *(undefined4 *)(*param_1 + 0x14) = 0x1b;
      (**(code **)*param_1)(param_1);
      return;
    }
  }
  else {
    if (iVar2 == 3) {
      if (param_1[0xf] != 3) {
        *(undefined4 *)(*param_1 + 0x14) = 10;
        (**(code **)*param_1)(param_1);
      }
      if (param_1[10] == 2) {
        pcVar4 = fn_827CFC90;
LAB_827d02f0:
        puVar3[1] = pcVar4;
        *puVar3 = fn_827CFBC0;
        return;
      }
      bVar1 = param_1[10] == 3;
      goto LAB_827d01dc;
    }
    if (iVar2 == 4) {
      if (param_1[0xf] != 4) {
        *(undefined4 *)(*param_1 + 0x14) = 10;
        (**(code **)*param_1)(param_1);
      }
      bVar1 = param_1[10] == 4;
      goto LAB_827d01dc;
    }
    if (iVar2 == 5) {
      if (param_1[0xf] != 4) {
        *(undefined4 *)(*param_1 + 0x14) = 10;
        (**(code **)*param_1)(param_1);
      }
      if (param_1[10] == 4) {
        pcVar4 = fn_827CFE48;
        goto LAB_827d02f0;
      }
      bVar1 = param_1[10] == 5;
      goto LAB_827d01dc;
    }
    if ((iVar2 != param_1[10]) || (param_1[0xf] != param_1[9])) {
      *(undefined4 *)(*param_1 + 0x14) = 0x1b;
      (**(code **)*param_1)(param_1);
    }
  }
  pcVar4 = fn_827CFFE0;
LAB_827d0314:
  puVar3[1] = pcVar4;
  return;
}

