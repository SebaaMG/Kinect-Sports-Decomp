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
extern unsigned int *auStack_ac;
extern int fn_82C10AD0();
extern int fn_82C10E58();
extern int fn_82C10F40();
extern int fn_82C1E938();
extern int fn_82C1EAB8();
extern int fn_82C1EC50();
extern int fn_82C1EE20();
extern int fn_82C1EFD0();
extern int fn_82F691F0();
extern unsigned int lbl_820ED038;
extern unsigned int lbl_820ED048;
extern unsigned int lbl_820ED058;
extern unsigned int lbl_820ED068;
extern unsigned int lbl_820F8EB8;
extern unsigned int lbl_820F8EC8;
extern unsigned int uStack_90;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;
extern unsigned int uStack_a4;
extern unsigned int uStack_ae;


/* WARNING: Type propagation algorithm not settling */

undefined8 fn_82C1FA60(int param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  int *piVar3;
  uint uVar4;
  ushort uVar5;
  uint uVar6;
  undefined8 uVar7;
  int iVar8;
  ulonglong uVar9;
  byte *pbVar10;
  undefined4 *puVar11;
  byte *pbVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 uVar15;
  longlong lVar16;
  undefined2 uStack_ae;
  ushort auStack_ac [2];
  undefined1 *puStack_a8;
  uint uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined1 *puStack_94;
  uint uStack_90;
  int aiStack_8c [3];
  undefined8 auStack_80 [2];
  byte abStack_70 [16];
  byte abStack_60 [96];
  
  piVar3 = *(int **)(param_1 + 0x1c);
  uStack_9c = 0;
  uVar13 = param_2 - 0x18;
  uStack_a4 = 0;
  puStack_a8 = (undefined1 *)0x0;
  puStack_94 = (undefined1 *)0x0;
  uStack_a0 = (undefined4)uVar13;
  uStack_90 = 0;
  aiStack_8c[0] = 0;
  auStack_ac[0] = 0;
  aiStack_8c[1] = 0;
  uStack_ae = 0;
  uStack_98 = 0;
  uVar7 = (**(code **)(*piVar3 + 0xc))(*piVar3,uVar13);
  if ((int)uVar7 < 0) {
    return uVar7;
  }
  if ((uVar13 & 0xffffffff) < 0x36) {
    return 0xffffffff8050000c;
  }
  uVar7 = fn_82C1EE20(param_1,abStack_60,&uStack_9c,&uStack_a4,&uStack_a0);
  if ((int)uVar7 < 0) {
    return uVar7;
  }
  uVar7 = fn_82C1EE20(param_1,abStack_70,&uStack_9c,&uStack_a4,&uStack_a0);
  if ((int)uVar7 < 0) {
    return uVar7;
  }
  uVar7 = fn_82C1EC50(param_1,auStack_80,&uStack_9c,&uStack_a4,&uStack_a0);
  if ((int)uVar7 < 0) {
    return uVar7;
  }
  uVar7 = fn_82C1EAB8(param_1,&uStack_90,&uStack_9c,&uStack_a4,&uStack_a0);
  if ((int)uVar7 < 0) {
    return uVar7;
  }
  uVar7 = fn_82C1EAB8(param_1,aiStack_8c,&uStack_9c,&uStack_a4,&uStack_a0);
  if ((int)uVar7 < 0) {
    return uVar7;
  }
  uVar7 = fn_82C1E938(param_1,auStack_ac,&uStack_9c,&uStack_a4,&uStack_a0);
  if ((int)uVar7 < 0) {
    return uVar7;
  }
  uVar7 = fn_82C1EAB8(param_1,aiStack_8c + 1,&uStack_9c,&uStack_a4,&uStack_a0);
  if ((int)uVar7 < 0) {
    return uVar7;
  }
  uVar14 = 0x36;
  uVar5 = auStack_ac[0] & 0x7f;
  uVar4 = (uint)((auStack_ac[0] & 0x8000) != 0);
  iVar8 = fn_82C10F40(piVar3[0x25],uVar5,&puStack_94);
  if ((iVar8 == -0x7fafffea) &&
     (uVar7 = fn_82C10E58(piVar3[0x25],uVar5,&puStack_94), (int)uVar7 < 0)) {
    return uVar7;
  }
  pbVar12 = &lbl_820ED058;
  pbVar10 = abStack_60;
  uVar15 = (undefined1)uVar5;
  *puStack_94 = uVar15;
  *(undefined8 *)(puStack_94 + 0x38) = auStack_80[0];
  *(uint *)(puStack_94 + 0x40) = uVar4;
  *(undefined4 *)(puStack_94 + 0x44) = 1;
  do {
    bVar1 = *pbVar12;
    bVar2 = *pbVar10;
    if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
    pbVar12 = pbVar12 + 1;
    pbVar10 = pbVar10 + 1;
  } while (pbVar12 != &lbl_820ED068);
  if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
    uVar7 = fn_82C10E58(*(undefined4 *)(piVar3[1] + 0x7c),uVar5,&puStack_a8);
    if ((int)uVar7 < 0) {
      return uVar7;
    }
    uVar7 = fn_82C10AD0(piVar3[0x38],0xb,0x18,puStack_a8 + 8);
    uVar6 = uStack_90;
    if ((int)uVar7 < 0) {
      return uVar7;
    }
    lVar16 = 6;
    puVar11 = (undefined4 *)(*(int *)(puStack_a8 + 8) + -4);
    do {
      puVar11 = puVar11 + 1;
      *puVar11 = 0;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    *(undefined2 *)(puStack_94 + 0x2c) = *(undefined2 *)(piVar3[1] + 0x26);
    *(undefined4 *)(puStack_94 + 0x30) = 1;
    *(short *)(piVar3[1] + 0x26) = *(short *)(piVar3[1] + 0x26) + 1;
    *(short *)(piVar3[1] + 0x24) = *(short *)(piVar3[1] + 0x24) + 1;
    *(undefined4 *)(puStack_a8 + 4) = 1;
    *puStack_a8 = uVar15;
    *(undefined8 *)(puStack_a8 + 0x10) = auStack_80[0];
    *(uint *)(puStack_a8 + 0x18) = uVar4;
    if ((ulonglong)uStack_90 != 0) {
      if ((uVar13 & 0xffffffff) < ((ulonglong)uStack_90 + 0x36 & 0xffffffff)) {
        return 0xffffffff8050000c;
      }
      uVar7 = fn_82C1E938(param_1,&uStack_ae,&uStack_9c,&uStack_a4,&uStack_a0);
      if ((int)uVar7 < 0) {
        return uVar7;
      }
      **(undefined2 **)(puStack_a8 + 8) = uStack_ae;
      uVar7 = fn_82C1E938(param_1,&uStack_ae,&uStack_9c,&uStack_a4,&uStack_a0);
      if ((int)uVar7 < 0) {
        return uVar7;
      }
      *(undefined2 *)(*(int *)(puStack_a8 + 8) + 2) = uStack_ae;
      uVar7 = fn_82C1EAB8(param_1,&uStack_98,&uStack_9c,&uStack_a4,&uStack_a0);
      if ((int)uVar7 < 0) {
        return uVar7;
      }
      *(undefined4 *)(*(int *)(puStack_a8 + 8) + 4) = uStack_98;
      uVar7 = fn_82C1EAB8(param_1,&uStack_98,&uStack_9c,&uStack_a4,&uStack_a0);
      if ((int)uVar7 < 0) {
        return uVar7;
      }
      *(undefined4 *)(*(int *)(puStack_a8 + 8) + 8) = uStack_98;
      uVar7 = fn_82C1E938(param_1,&uStack_ae,&uStack_9c,&uStack_a4,&uStack_a0);
      if ((int)uVar7 < 0) {
        return uVar7;
      }
      *(undefined2 *)(*(int *)(puStack_a8 + 8) + 0xc) = uStack_ae;
      uVar7 = fn_82C1E938(param_1,&uStack_ae,&uStack_9c,&uStack_a4,&uStack_a0);
      if ((int)uVar7 < 0) {
        return uVar7;
      }
      *(undefined2 *)(*(int *)(puStack_a8 + 8) + 0xe) = uStack_ae;
      uVar7 = fn_82C1E938(param_1,&uStack_ae,&uStack_9c,&uStack_a4,&uStack_a0);
      if ((int)uVar7 < 0) {
        return uVar7;
      }
      *(short *)(*(int *)(puStack_a8 + 8) + 0x10) = (short)uVar6 + -0x12;
      uVar7 = fn_82C10AD0(piVar3[0x38],0xb,*(undefined2 *)(*(int *)(puStack_a8 + 8) + 0x10),
                                *(int *)(puStack_a8 + 8) + 0x14);
      if ((int)uVar7 < 0) {
        return uVar7;
      }
      uVar9 = (ulonglong)*(ushort *)(*(int *)(puStack_a8 + 8) + 0x10);
      uVar14 = uVar9 + 0x48;
      if ((uVar13 & 0xffffffff) < uVar14) {
        return 0xffffffff8050000c;
      }
      uVar7 = fn_82C1EFD0(param_1,*(undefined4 *)(*(int *)(puStack_a8 + 8) + 0x14),uVar9,
                            &uStack_9c,&uStack_a4,&uStack_a0);
      if ((int)uVar7 < 0) {
        return uVar7;
      }
    }
    if (aiStack_8c[0] != 0) {
      pbVar10 = abStack_70;
      pbVar12 = &lbl_820ED048;
      do {
        bVar1 = *pbVar12;
        bVar2 = *pbVar10;
        if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
        pbVar12 = pbVar12 + 1;
        pbVar10 = pbVar10 + 1;
      } while (pbVar12 != &lbl_820ED058);
      if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) {
        pbVar10 = abStack_70;
        pbVar12 = &lbl_820ED038;
        do {
          bVar1 = *pbVar12;
          bVar2 = *pbVar10;
          if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
          pbVar12 = pbVar12 + 1;
          pbVar10 = pbVar10 + 1;
        } while (pbVar12 != &lbl_820ED048);
        if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) {
          return 0xffffffff8050000c;
        }
      }
    }
  }
  else {
    pbVar10 = abStack_60;
    pbVar12 = &lbl_820F8EB8;
    do {
      bVar1 = *pbVar12;
      bVar2 = *pbVar10;
      if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
      pbVar12 = pbVar12 + 1;
      pbVar10 = pbVar10 + 1;
    } while (pbVar12 != &lbl_820F8EC8);
    if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
      if (uStack_90 == 0) {
        return 0xffffffff8050000c;
      }
      if (uStack_90 < 0x33) {
        return 0xffffffff8050000c;
      }
      uVar7 = fn_82C10E58(*(undefined4 *)(piVar3[1] + 0x7c),uVar5,&puStack_a8);
      if ((int)uVar7 < 0) {
        return uVar7;
      }
      uVar7 = fn_82C10AD0(piVar3[0x38],0xb,0x38,puStack_a8 + 8);
      if (-1 < (int)uVar7) {
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(*(undefined4 *)(puStack_a8 + 8),0,0x38);
      }
      return uVar7;
    }
    uVar7 = fn_82C10E58(*(undefined4 *)(piVar3[1] + 0x7c),uVar5,&puStack_a8);
    if ((int)uVar7 < 0) {
      return uVar7;
    }
    *(short *)(piVar3[1] + 0x24) = *(short *)(piVar3[1] + 0x24) + 1;
    *(undefined8 *)(puStack_a8 + 0x10) = auStack_80[0];
    *(undefined4 *)(puStack_94 + 0x30) = 0;
    *(undefined4 *)(puStack_a8 + 4) = 0;
    *puStack_a8 = uVar15;
  }
  *(short *)(piVar3[1] + 0x2c) = *(short *)(piVar3[1] + 0x2c) + 1;
  uVar14 = (uVar13 - uStack_a4) - uVar14;
  if (uVar14 == 0) {
    return uVar7;
  }
  uVar7 = (**(code **)(*piVar3 + 0x14))(*piVar3,uVar14);
  if (-1 < (int)uVar7) {
    *(ulonglong *)(piVar3 + 2) = (uVar14 & 0xffffffff) + *(longlong *)(piVar3 + 2);
    return uVar7;
  }
  return uVar7;
}

