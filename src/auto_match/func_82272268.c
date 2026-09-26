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
extern unsigned int *auStack_50;
extern int fn_82271B78();
extern int fn_82271C18();
extern int fn_82272938();
extern int fn_82279C58();
extern int fn_8228C2C8();
extern int fn_8266C6D8();
extern int fn_8266C708();
extern int fn_8266EC60();
extern unsigned int lbl_8326B394;


int fn_82272268(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  bool bVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 auStack_50 [80];
  
  iVar9 = param_1[0x28];
  if (param_1[0x26] != 0) {
    uVar6 = fn_8266EC60();
    fn_8266C6D8(uVar6,0x20,0);
    uVar6 = fn_8266EC60();
    fn_8266C708(uVar6,0x20,0);
    iVar1 = *(int *)(param_1[0x2a] + 4);
    if (*(int *)(iVar1 + 0xc) == 0) {
      iVar7 = *(int *)(iVar1 + 0x10b8);
      if (iVar7 != 0) {
        iVar4 = *param_1;
        iVar3 = *(int *)(iVar1 + 0x30);
        if (iVar4 != 0) {
          if (param_1[0x2f] == 0) {
            *(int *)(iVar4 + 0x19c) = iVar7;
            *(undefined4 *)(*param_1 + 0x1a0) = lbl_8326B394;
            param_1[0x32] = iVar3;
          }
          else {
            *(int *)(iVar4 + 0x1a0) = iVar7;
            *(undefined4 *)(*param_1 + 0x19c) = lbl_8326B394;
            param_1[0x33] = iVar3;
          }
        }
      }
    }
    else {
      uVar2 = *(undefined4 *)(iVar1 + 0x30);
      iVar7 = param_1[0x2f];
      uVar6 = fn_82279C58(auStack_50);
      fn_82271B78(param_1,uVar6,iVar7 == 0,1,uVar2);
    }
    if ((*(int *)(iVar1 + 0x10bc) == 0) || (*(int *)(iVar1 + 0x30) == 0)) {
      if (*param_1 != 0) {
        if (param_1[0x36] != 0) {
          param_1[0x36] = 0;
          *(undefined4 *)(*param_1 + 0x1a4) = lbl_8326B394;
        }
        param_1[0x37] = 0;
      }
    }
    else {
      fn_82272938(param_1,*(int *)(iVar1 + 0x10bc),*(undefined4 *)(iVar1 + 8));
    }
    piVar8 = (int *)param_1[0x17];
    for (iVar7 = *piVar8; iVar7 != piVar8[1]; iVar7 = iVar7 + 0x30) {
      iVar4 = *(int *)(iVar7 + 0x24);
      if (((iVar4 != 0) && (*(int *)(iVar4 + 0x54c) == 0)) && (*(int *)(iVar4 + 0x548) == 0)) {
        uVar2 = *(undefined4 *)(iVar7 + 0x20);
        puVar5 = (undefined4 *)(iVar7 + 0x10U & 0xfffffff0);
        uVar11 = *puVar5;
        uVar12 = puVar5[1];
        uVar13 = puVar5[2];
        uVar14 = puVar5[3];
        *(undefined4 *)(iVar4 + 0x544) = 0;
        *(undefined4 *)(iVar4 + 0x520) = uVar2;
        *(undefined4 *)(iVar4 + 0x548) = 0;
        puVar5 = (undefined4 *)(iVar4 + 0x510U & 0xfffffff0);
        *puVar5 = uVar11;
        puVar5[1] = uVar12;
        puVar5[2] = uVar13;
        puVar5[3] = uVar14;
        *(undefined4 *)(iVar4 + 0x534) = 0;
      }
    }
    param_1[0x34] = 0;
    param_1[0x31] = param_1[0x2f];
    param_1[0x30] = (uint)(param_1[0x2f] == 0);
    if (param_1[0x44] != 0) {
      fn_8228C2C8(param_1[0x44],0xffffffff820e975c);
    }
    if (param_1[0x46] != 0) {
      fn_8228C2C8(param_1[0x46],0xffffffff820e975c);
    }
    bVar10 = false;
    if (*(int *)(iVar1 + 0xc) != 0) {
      bVar10 = *(int *)(*(int *)(iVar1 + 0xc) + 0x14) != 0;
    }
    fn_82271C18(param_1,*(undefined4 *)(iVar1 + 0x28),*(undefined4 *)(iVar1 + 8),bVar10);
  }
  piVar8 = *(int **)(param_1[0x13] + 0xc);
  do {
    if (piVar8 == *(int **)(param_1[0x13] + 0x10)) {
      bVar10 = false;
LAB_822724a8:
      if (!bVar10) {
        iVar9 = 2;
        param_1[0x14] = 0;
      }
      return iVar9;
    }
    if (*piVar8 == param_1[0x14]) {
      bVar10 = true;
      goto LAB_822724a8;
    }
    piVar8 = piVar8 + 1;
  } while( true );
}

