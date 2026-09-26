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
extern int fn_827C1AA0();
extern int fn_827C1B78();


void fn_827C1C40(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  
  if (param_1[5] != 0xca) {
    *(undefined4 *)(*param_1 + 0x14) = 0x14;
    *(int *)(*param_1 + 0x18) = param_1[5];
    (**(code **)*param_1)();
  }
  iVar2 = param_1[0xc];
  uVar1 = param_1[0xd];
  if (uVar1 < (uint)(iVar2 << 3)) {
    if (uVar1 < (uint)(iVar2 << 2)) {
      if (uVar1 < (uint)(iVar2 << 1)) {
        param_1[0x46] = 8;
        param_1[0x17] = param_1[7];
        param_1[0x18] = param_1[8];
      }
      else {
        iVar2 = fn_827C1AA0(param_1[7],2);
        param_1[0x17] = iVar2;
        iVar2 = fn_827C1AA0(param_1[8],2);
        param_1[0x18] = iVar2;
        param_1[0x46] = 4;
      }
    }
    else {
      iVar2 = fn_827C1AA0(param_1[7],4);
      param_1[0x17] = iVar2;
      iVar2 = fn_827C1AA0(param_1[8],4);
      param_1[0x18] = iVar2;
      param_1[0x46] = 2;
    }
  }
  else {
    iVar2 = fn_827C1AA0(param_1[7],8);
    param_1[0x17] = iVar2;
    iVar2 = fn_827C1AA0(param_1[8],8);
    param_1[0x18] = iVar2;
    param_1[0x46] = 1;
  }
  iVar2 = 0;
  if (0 < param_1[9]) {
    piVar5 = (int *)(param_1[0x31] + -0x30);
    do {
      iVar3 = param_1[0x46];
      iVar6 = iVar3;
      if (iVar3 < 8) {
        do {
          if ((param_1[0x44] * iVar3 < piVar5[0xe] * iVar6 * 2) ||
             (param_1[0x45] * iVar3 < piVar5[0xf] * iVar6 * 2)) break;
          iVar6 = iVar6 << 1;
        } while (iVar6 < 8);
      }
      iVar2 = iVar2 + 1;
      piVar5 = piVar5 + 0x15;
      *piVar5 = iVar6;
    } while (iVar2 < param_1[9]);
  }
  iVar2 = 0;
  if (0 < param_1[9]) {
    piVar5 = (int *)(param_1[0x31] + 0x24);
    do {
      iVar3 = fn_827C1AA0((longlong)(piVar5[-7] * *piVar5) * (longlong)param_1[7],
                            param_1[0x44] << 3);
      piVar5[1] = iVar3;
      iVar3 = fn_827C1AA0((longlong)(piVar5[-6] * param_1[8]) * (longlong)*piVar5,
                            param_1[0x45] << 3);
      iVar2 = iVar2 + 1;
      piVar5[2] = iVar3;
      piVar5 = piVar5 + 0x15;
    } while (iVar2 < param_1[9]);
  }
  iVar2 = param_1[0xb];
  if (iVar2 == 1) {
    param_1[0x19] = 1;
    goto LAB_827c1e80;
  }
  if (iVar2 < 2) {
LAB_827c1e74:
    iVar2 = param_1[9];
  }
  else {
    if (3 < iVar2) {
      if (iVar2 < 6) {
        param_1[0x19] = 4;
        goto LAB_827c1e80;
      }
      goto LAB_827c1e74;
    }
    iVar2 = 3;
  }
  param_1[0x19] = iVar2;
LAB_827c1e80:
  iVar2 = 1;
  if (*(char *)((int)param_1 + 0x4a) == '\0') {
    iVar2 = param_1[0x19];
  }
  param_1[0x1a] = iVar2;
  cVar4 = fn_827C1B78(param_1);
  if (cVar4 == '\0') {
    param_1[0x1b] = 1;
  }
  else {
    param_1[0x1b] = param_1[0x45];
  }
  return;
}

