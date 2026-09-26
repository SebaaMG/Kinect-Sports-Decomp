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
extern unsigned int *auStack_80;
extern int fn_82681728();
extern int fn_826824B0();
extern int fn_826828D8();
extern int fn_826944C8();
extern int fn_82694700();
extern int fn_826953D8();
extern int fn_826959C8();
extern int fn_82696AD0();
extern int fn_82696B20();
extern int fn_826ADE60();
extern int fn_826BCA20();
extern int fn_826BCBA0();
extern unsigned int iStack_e4;
extern unsigned int lbl_8200579C;
extern unsigned int uStack_90;
extern unsigned int uStack_94;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;
extern unsigned int uStack_a4;
extern unsigned int uStack_ec;
extern unsigned int uStack_f0;


uint * fn_82696D38(uint *param_1,char *param_2,int *param_3,longlong param_4,char param_5)

{
  ushort uVar1;
  int *piVar2;
  char cVar5;
  uint uVar3;
  uint *puVar4;
  undefined8 uVar6;
  int iVar8;
  longlong lVar7;
  uint uVar9;
  uint uStack_f0;
  uint uStack_ec;
  int *piStack_e8;
  int iStack_e4;
  byte bStack_e0;
  byte abStack_d0 [16];
  byte abStack_c0 [16];
  undefined **ppuStack_b0;
  byte *pbStack_ac;
  int *piStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined1 uStack_9c;
  int *piStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined1 auStack_80 [128];
  
  puVar4 = (uint *)(param_3 + 0x1e);
  uVar9 = *(uint *)(param_3[0x1e] + 8);
  iVar8 = *(int *)(uVar9 + 8);
  *param_1 = uVar9;
  *(int *)(uVar9 + 8) = iVar8 + 1;
  switch(*param_2) {
  case '\0':
  case '\n':
    uVar9 = *(uint *)(*puVar4 + 0xcc);
    break;
  case '\x01':
    uVar9 = *(uint *)(*puVar4 + 0xd0);
    break;
  case '\x02':
    uVar9 = *(uint *)(((param_2[4] == '\0') + 0x35) * 4 + *puVar4);
    break;
  case '\x03':
    if ((int)param_4 < 0) {
      param_4 = 10;
    }
    else {
      param_4 = -param_4;
    }
    uVar6 = fn_826BCBA0(*(undefined8 *)(param_2 + 8),param_1,auStack_80,0x40,param_4);
    goto code_r0x82696dd0;
  case '\x04':
    uVar6 = fn_826BCA20(*(undefined4 *)(param_2 + 8),auStack_80,0x40);
code_r0x82696dd0:
    uStack_f0 = fn_82694700((ulonglong)*puVar4 + 0x254,uVar6);
    iVar8 = *(int *)(uStack_f0 + 8) + 2;
code_r0x82696dec:
    uVar9 = *param_1;
    *(int *)(uStack_f0 + 8) = iVar8;
    lVar7 = (ulonglong)*(uint *)(uVar9 + 8) - 1;
    *(int *)(uVar9 + 8) = (int)lVar7;
    if (lVar7 == 0) {
      fn_826944C8();
    }
    uVar9 = *(uint *)(uStack_f0 + 8);
    *param_1 = uStack_f0;
    lVar7 = (ulonglong)uVar9 - 1;
    *(int *)(uStack_f0 + 8) = (int)lVar7;
    if (lVar7 != 0) {
      return param_1;
    }
    fn_826944C8(uStack_f0);
    return param_1;
  case '\x05':
    uVar9 = *(uint *)(param_2 + 4);
    break;
  case '\x06':
  case '\a':
    abStack_c0[0] = 0;
    piVar2 = (int *)fn_82696AD0(param_2,param_3);
    if (((param_5 == '\0') && (piVar2 != (int *)0x0)) &&
       (cVar5 = (**(code **)(*piVar2 + 0x2c))(piVar2,puVar4,(ulonglong)*puVar4 + 0x154,abStack_c0),
       cVar5 != '\0')) {
      uVar1 = *(ushort *)(param_3 + 0x31);
      *(ushort *)(param_3 + 0x31) = uVar1 + 1;
      if (uVar1 < 0xff) {
        abStack_d0[0] = 0;
        fn_82696B20(&piStack_e8,abStack_c0,param_3);
        if (piStack_e8 != (int *)0x0) {
          uStack_90 = 0;
          pbStack_ac = abStack_d0;
          uStack_94 = 0;
          ppuStack_b0 = &lbl_8200579C;
          uStack_9c = 0;
          uStack_a4 = 0;
          uStack_a0 = 0;
          piStack_a8 = piVar2;
          piStack_98 = param_3;
          (**(code **)(*piStack_e8 + 0x28))(piStack_e8,&ppuStack_b0,iStack_e4,0);
          fn_826828D8(&ppuStack_b0);
        }
        fn_82696D38(&uStack_ec,abStack_d0,param_3,0xffffffffffffffff,0);
        uVar3 = uStack_ec;
        uVar9 = *param_1;
        *(int *)(uStack_ec + 8) = *(int *)(uStack_ec + 8) + 1;
        lVar7 = (ulonglong)*(uint *)(uVar9 + 8) - 1;
        *(int *)(uVar9 + 8) = (int)lVar7;
        if (lVar7 == 0) {
          fn_826944C8();
        }
        *param_1 = uVar3;
        lVar7 = (ulonglong)*(uint *)(uStack_ec + 8) - 1;
        *(int *)(uStack_ec + 8) = (int)lVar7;
        if (lVar7 == 0) {
          fn_826944C8(uStack_ec);
        }
        if (((bStack_e0 & 2) == 0) && (piStack_e8 != (int *)0x0)) {
          fn_826824B0();
        }
        piStack_e8 = (int *)0x0;
        if (((bStack_e0 & 1) == 0) && (iStack_e4 != 0)) {
          fn_826824B0();
        }
        iStack_e4 = 0;
        if (4 < abStack_d0[0]) {
          fn_826959C8(abStack_d0);
        }
      }
      else {
        uVar9 = *param_1;
        uVar3 = *(uint *)(*puVar4 + 0x14c);
        *(int *)(uVar3 + 8) = *(int *)(uVar3 + 8) + 1;
        lVar7 = (ulonglong)*(uint *)(uVar9 + 8) - 1;
        *(int *)(uVar9 + 8) = (int)lVar7;
        if (lVar7 == 0) {
          fn_826944C8();
        }
        *param_1 = uVar3;
        cVar5 = (**(code **)(*param_3 + 4))(param_3);
        if (cVar5 != '\0') {
          fn_826ADE60(param_3,0xffffffff820061c8);
        }
      }
      *(short *)(param_3 + 0x31) = *(short *)(param_3 + 0x31) + -1;
    }
    else if (((*param_2 == '\x06') && (iVar8 = *(int *)(param_2 + 4), iVar8 != 0)) &&
            (lVar7 = (**(code **)(*(int *)(iVar8 + 0x10) + 4))(iVar8 + 0x10,param_3), lVar7 != 0)) {
      uVar3 = fn_82694700((ulonglong)*puVar4 + 0x254);
      uVar9 = *param_1;
      *(int *)(uVar3 + 8) = *(int *)(uVar3 + 8) + 2;
      lVar7 = (ulonglong)*(uint *)(uVar9 + 8) - 1;
      *(int *)(uVar9 + 8) = (int)lVar7;
      if (lVar7 == 0) {
        fn_826944C8();
      }
      uVar9 = *(uint *)(uVar3 + 8);
      *param_1 = uVar3;
      lVar7 = (ulonglong)uVar9 - 1;
      *(int *)(uVar3 + 8) = (int)lVar7;
      if (lVar7 == 0) {
        fn_826944C8(uVar3);
      }
    }
    else {
      if ((*param_2 == '\a') && (*(int *)(param_2 + 4) != 0)) {
        puVar4 = (uint *)fn_826953D8(param_2,param_3);
        uVar9 = *puVar4;
      }
      else {
        uVar9 = *(uint *)(*puVar4 + 0x150);
      }
      uVar3 = *param_1;
      *(int *)(uVar9 + 8) = *(int *)(uVar9 + 8) + 1;
      lVar7 = (ulonglong)*(uint *)(uVar3 + 8) - 1;
      *(int *)(uVar3 + 8) = (int)lVar7;
      if (lVar7 == 0) {
        fn_826944C8();
      }
      *param_1 = uVar9;
    }
    if (abStack_c0[0] < 5) {
      return param_1;
    }
    fn_826959C8(abStack_c0);
    return param_1;
  case '\b':
  case '\v':
    uVar9 = *(uint *)(*puVar4 + 0x148);
    break;
  case '\t':
    uVar6 = 0xffffffff820061b8;
    goto code_r0x826971a8;
  case '\f':
    uVar6 = 0xffffffff820061a4;
code_r0x826971a8:
    fn_82681728(&uStack_f0,(ulonglong)*puVar4 + 0x254,uVar6);
    iVar8 = *(int *)(uStack_f0 + 8) + 1;
    goto code_r0x82696dec;
  default:
    uVar9 = *(uint *)(*puVar4 + 0xbc);
  }
  uVar3 = *param_1;
  *(int *)(uVar9 + 8) = *(int *)(uVar9 + 8) + 1;
  lVar7 = (ulonglong)*(uint *)(uVar3 + 8) - 1;
  *(int *)(uVar3 + 8) = (int)lVar7;
  if (lVar7 == 0) {
    fn_826944C8();
  }
  *param_1 = uVar9;
  return param_1;
}

