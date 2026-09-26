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
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int *auStack_100;
extern unsigned int *auStack_108;
extern unsigned int *auStack_80;
extern unsigned int *auStack_88;
extern unsigned int *auStack_90;
extern unsigned int *auStack_98;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_a8;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_b8;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_c8;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_d8;
extern unsigned int *auStack_e0;
extern unsigned int *auStack_e8;
extern unsigned int *auStack_f0;
extern unsigned int *auStack_f8;
extern int fn_822315A0();
extern int fn_824CC840();
extern int fn_824CD030();
extern int fn_824D2AE8();
extern int fn_824D7160();
extern int fn_824D7230();
extern int fn_82F51468();
extern int fn_82F51FD0();
extern int fn_82F53380();
extern unsigned int iStack_10c;
extern unsigned int lbl_821C0E54;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_110;
extern U64 storeWordConditionalIndexed();


undefined4 * fn_824D4F90(undefined4 *param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar4;
  undefined8 uVar3;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  uint *puVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  char in_RESERVE;
  byte bVar14;
  undefined4 uStack_110;
  int iStack_10c;
  undefined1 auStack_108 [4];
  int *piStack_104;
  undefined1 auStack_100 [4];
  int *piStack_fc;
  undefined1 auStack_f8 [4];
  int *piStack_f4;
  undefined1 auStack_f0 [4];
  int *piStack_ec;
  undefined1 auStack_e8 [4];
  int *piStack_e4;
  undefined1 auStack_e0 [4];
  int *piStack_dc;
  undefined1 auStack_d8 [4];
  int *piStack_d4;
  undefined1 auStack_d0 [4];
  int *piStack_cc;
  undefined1 auStack_c8 [4];
  int *piStack_c4;
  undefined1 auStack_c0 [4];
  int *piStack_bc;
  undefined1 auStack_b8 [4];
  int *piStack_b4;
  undefined1 auStack_b0 [4];
  int *piStack_ac;
  undefined1 auStack_a8 [4];
  int *piStack_a4;
  undefined1 auStack_a0 [4];
  int *piStack_9c;
  undefined1 auStack_98 [4];
  int *piStack_94;
  undefined1 auStack_90 [4];
  int *piStack_8c;
  undefined1 auStack_88 [4];
  int *piStack_84;
  undefined1 auStack_80 [4];
  int *piStack_7c;
  
  fn_824CC840();
  param_1[0x3c] = 0;
  uVar2 = lbl_821CC160;
  *param_1 = &lbl_821C0E54;
  param_1[0x58] = uVar2;
  *(undefined1 *)(param_1 + 0x38) = 1;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  piVar10 = param_1 + 0x47;
  param_1[0x40] = 0;
  piVar9 = param_1 + 0x48;
  param_1[0x41] = 0;
  piVar11 = param_1 + 0x49;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x57] = 0;
  param_1[0x59] = 0;
  param_1[0x56] = 0;
  iVar4 = fn_824CD030(param_1);
  bVar14 = (iVar4 == 0) << 1;
  if (iVar4 != 0) {
    piVar12 = (int *)(param_2 + 0x30);
    if (*(int *)(param_2 + 0x30) == 0) {
      param_1[0x40] = 0;
    }
    else {
      uVar3 = fn_82F51468(auStack_88,param_1[8]);
      fn_824D2AE8(&uStack_110,uVar3);
      if (ZEXT48(piStack_84) != 0) {
        lVar7 = ZEXT48(piStack_84) + 8;
        do {
          puVar8 = (uint *)lVar7;
          lVar6 = (ulonglong)*puVar8 - 1;
          if (in_RESERVE != '\0') {
            uVar1 = storeWordConditionalIndexed(lVar6,0,lVar7);
            *puVar8 = uVar1;
            bVar14 = 2;
          }
        } while (!(bool)(bVar14 >> 1 & 1));
        if ((int)lVar6 == 0) {
          (**(code **)(*piStack_84 + 4))();
        }
      }
      iVar5 = fn_82F53380(uStack_110,piVar12,0,1);
      bVar14 = (iVar5 == 0) << 1;
      iVar4 = 0;
      if (iVar5 != 0) {
        iVar4 = iVar5;
      }
      param_1[0x40] = iVar4;
      if (iStack_10c != 0) {
        fn_822315A0();
      }
    }
    if (param_1[0x40] != 0) {
      *(undefined4 *)(param_1[0x40] + 0x3c) = 1;
    }
    if (*piVar12 == 0) {
      param_1[0x41] = 0;
    }
    else {
      uVar3 = fn_82F51468(auStack_f8,param_1[8]);
      fn_824D2AE8(&uStack_110,uVar3);
      if (ZEXT48(piStack_f4) != 0) {
        lVar7 = ZEXT48(piStack_f4) + 8;
        do {
          puVar8 = (uint *)lVar7;
          lVar6 = (ulonglong)*puVar8 - 1;
          if (in_RESERVE != '\0') {
            uVar1 = storeWordConditionalIndexed(lVar6,0,lVar7);
            *puVar8 = uVar1;
            bVar14 = 2;
          }
        } while (!(bool)(bVar14 >> 1 & 1));
        if ((int)lVar6 == 0) {
          (**(code **)(*piStack_f4 + 4))();
        }
      }
      iVar5 = fn_82F53380(uStack_110,piVar12,0,1);
      bVar14 = (iVar5 == 0) << 1;
      iVar4 = 0;
      if (iVar5 != 0) {
        iVar4 = iVar5;
      }
      param_1[0x41] = iVar4;
      if (iStack_10c != 0) {
        fn_822315A0();
      }
    }
    if (param_1[0x41] != 0) {
      *(undefined4 *)(param_1[0x41] + 0x3c) = 0;
    }
    piVar12 = (int *)(param_2 + 0x34);
    if (*(int *)(param_2 + 0x34) == 0) {
      param_1[0x42] = 0;
    }
    else {
      uVar3 = fn_82F51468(auStack_b8,param_1[8]);
      fn_824D2AE8(&uStack_110,uVar3);
      if (ZEXT48(piStack_b4) != 0) {
        lVar7 = ZEXT48(piStack_b4) + 8;
        do {
          puVar8 = (uint *)lVar7;
          lVar6 = (ulonglong)*puVar8 - 1;
          if (in_RESERVE != '\0') {
            uVar1 = storeWordConditionalIndexed(lVar6,0,lVar7);
            *puVar8 = uVar1;
            bVar14 = 2;
          }
        } while (!(bool)(bVar14 >> 1 & 1));
        if ((int)lVar6 == 0) {
          (**(code **)(*piStack_b4 + 4))();
        }
      }
      iVar5 = fn_82F53380(uStack_110,piVar12,0,1);
      bVar14 = (iVar5 == 0) << 1;
      iVar4 = 0;
      if (iVar5 != 0) {
        iVar4 = iVar5;
      }
      param_1[0x42] = iVar4;
      if (iStack_10c != 0) {
        fn_822315A0();
      }
    }
    if (param_1[0x42] != 0) {
      *(undefined4 *)(param_1[0x42] + 0x3c) = 1;
    }
    if (*piVar12 == 0) {
      param_1[0x43] = 0;
    }
    else {
      uVar3 = fn_82F51468(auStack_e8,param_1[8]);
      fn_824D2AE8(&uStack_110,uVar3);
      if (ZEXT48(piStack_e4) != 0) {
        lVar7 = ZEXT48(piStack_e4) + 8;
        do {
          puVar8 = (uint *)lVar7;
          lVar6 = (ulonglong)*puVar8 - 1;
          if (in_RESERVE != '\0') {
            uVar1 = storeWordConditionalIndexed(lVar6,0,lVar7);
            *puVar8 = uVar1;
            bVar14 = 2;
          }
        } while (!(bool)(bVar14 >> 1 & 1));
        if ((int)lVar6 == 0) {
          (**(code **)(*piStack_e4 + 4))();
        }
      }
      iVar5 = fn_82F53380(uStack_110,piVar12,0,1);
      bVar14 = (iVar5 == 0) << 1;
      iVar4 = 0;
      if (iVar5 != 0) {
        iVar4 = iVar5;
      }
      param_1[0x43] = iVar4;
      if (iStack_10c != 0) {
        fn_822315A0();
      }
    }
    if (param_1[0x43] != 0) {
      *(undefined4 *)(param_1[0x43] + 0x3c) = 0;
    }
    if (*(int *)(param_2 + 0x38) == 0) {
      param_1[0x3c] = 0;
    }
    else {
      uVar3 = fn_82F51468(auStack_98,param_1[8]);
      fn_824D2AE8(&uStack_110,uVar3);
      if (ZEXT48(piStack_94) != 0) {
        lVar7 = ZEXT48(piStack_94) + 8;
        do {
          puVar8 = (uint *)lVar7;
          lVar6 = (ulonglong)*puVar8 - 1;
          if (in_RESERVE != '\0') {
            uVar1 = storeWordConditionalIndexed(lVar6,0,lVar7);
            *puVar8 = uVar1;
            bVar14 = 2;
          }
        } while (!(bool)(bVar14 >> 1 & 1));
        if ((int)lVar6 == 0) {
          (**(code **)(*piStack_94 + 4))();
        }
      }
      iVar5 = fn_82F53380(uStack_110,param_2 + 0x38,0,1);
      bVar14 = (iVar5 == 0) << 1;
      iVar4 = 0;
      if (iVar5 != 0) {
        iVar4 = iVar5;
      }
      param_1[0x3c] = iVar4;
      if (iStack_10c != 0) {
        fn_822315A0();
      }
    }
    if (param_1[0x3c] != 0) {
      *(undefined4 *)(param_1[0x3c] + 0x3c) = 1;
    }
    piVar12 = (int *)(param_2 + 0x40);
    if (*(int *)(param_2 + 0x40) == 0) {
      param_1[0x3d] = 0;
    }
    else {
      uVar3 = fn_82F51468(auStack_d8,param_1[8]);
      fn_824D2AE8(&uStack_110,uVar3);
      if (ZEXT48(piStack_d4) != 0) {
        lVar7 = ZEXT48(piStack_d4) + 8;
        do {
          puVar8 = (uint *)lVar7;
          lVar6 = (ulonglong)*puVar8 - 1;
          if (in_RESERVE != '\0') {
            uVar1 = storeWordConditionalIndexed(lVar6,0,lVar7);
            *puVar8 = uVar1;
            bVar14 = 2;
          }
        } while (!(bool)(bVar14 >> 1 & 1));
        if ((int)lVar6 == 0) {
          (**(code **)(*piStack_d4 + 4))();
        }
      }
      iVar5 = fn_82F53380(uStack_110,piVar12,0,1);
      bVar14 = (iVar5 == 0) << 1;
      iVar4 = 0;
      if (iVar5 != 0) {
        iVar4 = iVar5;
      }
      param_1[0x3d] = iVar4;
      if (iStack_10c != 0) {
        fn_822315A0();
      }
    }
    if (param_1[0x3d] != 0) {
      *(undefined4 *)(param_1[0x3d] + 0x3c) = 1;
    }
    if (*piVar12 == 0) {
      param_1[0x3e] = 0;
    }
    else {
      uVar3 = fn_82F51468(auStack_a8,param_1[8]);
      fn_824D2AE8(&uStack_110,uVar3);
      if (ZEXT48(piStack_a4) != 0) {
        lVar7 = ZEXT48(piStack_a4) + 8;
        do {
          puVar8 = (uint *)lVar7;
          lVar6 = (ulonglong)*puVar8 - 1;
          if (in_RESERVE != '\0') {
            uVar1 = storeWordConditionalIndexed(lVar6,0,lVar7);
            *puVar8 = uVar1;
            bVar14 = 2;
          }
        } while (!(bool)(bVar14 >> 1 & 1));
        if ((int)lVar6 == 0) {
          (**(code **)(*piStack_a4 + 4))();
        }
      }
      iVar5 = fn_82F53380(uStack_110,piVar12,0,1);
      bVar14 = (iVar5 == 0) << 1;
      iVar4 = 0;
      if (iVar5 != 0) {
        iVar4 = iVar5;
      }
      param_1[0x3e] = iVar4;
      if (iStack_10c != 0) {
        fn_822315A0();
      }
    }
    if (param_1[0x3e] != 0) {
      *(undefined4 *)(param_1[0x3e] + 0x3c) = 0;
    }
    if (*(int *)(param_2 + 0x44) == 0) {
      param_1[0x3f] = 0;
    }
    else {
      uVar3 = fn_82F51468(auStack_c8,param_1[8]);
      fn_824D2AE8(&uStack_110,uVar3);
      if (ZEXT48(piStack_c4) != 0) {
        lVar7 = ZEXT48(piStack_c4) + 8;
        do {
          puVar8 = (uint *)lVar7;
          lVar6 = (ulonglong)*puVar8 - 1;
          if (in_RESERVE != '\0') {
            uVar1 = storeWordConditionalIndexed(lVar6,0,lVar7);
            *puVar8 = uVar1;
            bVar14 = 2;
          }
        } while (!(bool)(bVar14 >> 1 & 1));
        if ((int)lVar6 == 0) {
          (**(code **)(*piStack_c4 + 4))();
        }
      }
      iVar5 = fn_82F53380(uStack_110,param_2 + 0x44,0,1);
      bVar14 = (iVar5 == 0) << 1;
      iVar4 = 0;
      if (iVar5 != 0) {
        iVar4 = iVar5;
      }
      param_1[0x3f] = iVar4;
      if (iStack_10c != 0) {
        fn_822315A0();
      }
    }
    if (param_1[0x3f] != 0) {
      *(undefined4 *)(param_1[0x3f] + 0x3c) = 0;
    }
    piVar12 = (int *)(param_2 + 0x3c);
    if (*(int *)(param_2 + 0x3c) == 0) {
      param_1[0x44] = 0;
    }
    else {
      fn_824D7160(param_1,param_1 + 0x44,piVar12);
    }
    piVar13 = (int *)(param_2 + 0x4c);
    if (*(int *)(param_2 + 0x4c) == 0) {
      param_1[0x50] = 0;
    }
    else {
      fn_824D7160(param_1,param_1 + 0x50,piVar13);
    }
    if (*piVar13 == 0) {
      param_1[0x4f] = 0;
    }
    else {
      fn_824D7160(param_1,param_1 + 0x4f,piVar13);
    }
    if (param_1[0x45] != 0) {
      *(undefined4 *)(*(int *)(param_1[0x45] + 0x3c) + 0x20) = 0xe;
    }
    if (param_1[0x46] != 0) {
      *(undefined4 *)(*(int *)(param_1[0x46] + 0x3c) + 0x20) = 0x12;
    }
    if (*piVar12 == 0) {
      *piVar10 = 0;
    }
    else {
      fn_824D7160(param_1,piVar10,piVar12);
    }
    if (*piVar10 != 0) {
      *(undefined4 *)(*(int *)(*piVar10 + 0x3c) + 0x20) = 0xd;
    }
    if (*piVar12 == 0) {
      *piVar9 = 0;
    }
    else {
      fn_824D7160(param_1,piVar9,piVar12);
    }
    if (*piVar9 != 0) {
      *(undefined4 *)(*(int *)(*piVar9 + 0x3c) + 0x20) = 0x11;
    }
    if (*piVar12 == 0) {
      *piVar11 = 0;
    }
    else {
      fn_824D7160(param_1,piVar11,piVar12);
    }
    if (*piVar11 != 0) {
      *(undefined4 *)(*(int *)(*piVar11 + 0x3c) + 0x20) = 1;
    }
    piVar11 = (int *)(param_2 + 0x48);
    if (*(int *)(param_2 + 0x48) == 0) {
      param_1[0x4a] = 0;
    }
    else {
      uVar3 = fn_82F51468(auStack_108,param_1[8]);
      fn_824D2AE8(&uStack_110,uVar3);
      if (ZEXT48(piStack_104) != 0) {
        lVar7 = ZEXT48(piStack_104) + 8;
        do {
          puVar8 = (uint *)lVar7;
          lVar6 = (ulonglong)*puVar8 - 1;
          if (in_RESERVE != '\0') {
            uVar1 = storeWordConditionalIndexed(lVar6,0,lVar7);
            *puVar8 = uVar1;
            bVar14 = 2;
          }
        } while (!(bool)(bVar14 >> 1 & 1));
        if ((int)lVar6 == 0) {
          (**(code **)(*piStack_104 + 4))();
        }
      }
      iVar5 = fn_82F53380(uStack_110,piVar11,0,1);
      bVar14 = (iVar5 == 0) << 1;
      iVar4 = 0;
      if (iVar5 != 0) {
        iVar4 = iVar5;
      }
      param_1[0x4a] = iVar4;
      if (iStack_10c != 0) {
        fn_822315A0();
      }
    }
    iVar4 = param_1[0x4a];
    if (iVar4 != 0) {
      *(undefined4 *)(iVar4 + 0x48) = 2;
      *(undefined4 *)(iVar4 + 0x3c) = 1;
    }
    if (*piVar11 == 0) {
      param_1[0x4b] = 0;
    }
    else {
      uVar3 = fn_82F51468(auStack_100,param_1[8]);
      fn_824D2AE8(&uStack_110,uVar3);
      if (ZEXT48(piStack_fc) != 0) {
        lVar7 = ZEXT48(piStack_fc) + 8;
        do {
          puVar8 = (uint *)lVar7;
          lVar6 = (ulonglong)*puVar8 - 1;
          if (in_RESERVE != '\0') {
            uVar1 = storeWordConditionalIndexed(lVar6,0,lVar7);
            *puVar8 = uVar1;
            bVar14 = 2;
          }
        } while (!(bool)(bVar14 >> 1 & 1));
        if ((int)lVar6 == 0) {
          (**(code **)(*piStack_fc + 4))();
        }
      }
      iVar5 = fn_82F53380(uStack_110,piVar11,0,1);
      bVar14 = (iVar5 == 0) << 1;
      iVar4 = 0;
      if (iVar5 != 0) {
        iVar4 = iVar5;
      }
      param_1[0x4b] = iVar4;
      if (iStack_10c != 0) {
        fn_822315A0();
      }
    }
    iVar4 = param_1[0x4b];
    if (iVar4 != 0) {
      *(undefined4 *)(iVar4 + 0x48) = 2;
      *(undefined4 *)(iVar4 + 0x3c) = 0;
    }
    if (*piVar11 == 0) {
      param_1[0x4c] = 0;
    }
    else {
      uVar3 = fn_82F51468(auStack_f0,param_1[8]);
      fn_824D2AE8(&uStack_110,uVar3);
      if (ZEXT48(piStack_ec) != 0) {
        lVar7 = ZEXT48(piStack_ec) + 8;
        do {
          puVar8 = (uint *)lVar7;
          lVar6 = (ulonglong)*puVar8 - 1;
          if (in_RESERVE != '\0') {
            uVar1 = storeWordConditionalIndexed(lVar6,0,lVar7);
            *puVar8 = uVar1;
            bVar14 = 2;
          }
        } while (!(bool)(bVar14 >> 1 & 1));
        if ((int)lVar6 == 0) {
          (**(code **)(*piStack_ec + 4))();
        }
      }
      iVar5 = fn_82F53380(uStack_110,piVar11,0,1);
      bVar14 = (iVar5 == 0) << 1;
      iVar4 = 0;
      if (iVar5 != 0) {
        iVar4 = iVar5;
      }
      param_1[0x4c] = iVar4;
      if (iStack_10c != 0) {
        fn_822315A0();
      }
    }
    iVar4 = param_1[0x4c];
    if (iVar4 != 0) {
      *(undefined4 *)(iVar4 + 0x48) = 3;
      *(undefined4 *)(iVar4 + 0x3c) = 1;
    }
    if (*piVar11 == 0) {
      param_1[0x4d] = 0;
    }
    else {
      uVar3 = fn_82F51468(auStack_e0,param_1[8]);
      fn_824D2AE8(&uStack_110,uVar3);
      if (ZEXT48(piStack_dc) != 0) {
        lVar7 = ZEXT48(piStack_dc) + 8;
        do {
          puVar8 = (uint *)lVar7;
          lVar6 = (ulonglong)*puVar8 - 1;
          if (in_RESERVE != '\0') {
            uVar1 = storeWordConditionalIndexed(lVar6,0,lVar7);
            *puVar8 = uVar1;
            bVar14 = 2;
          }
        } while (!(bool)(bVar14 >> 1 & 1));
        if ((int)lVar6 == 0) {
          (**(code **)(*piStack_dc + 4))();
        }
      }
      iVar5 = fn_82F53380(uStack_110,piVar11,0,1);
      bVar14 = (iVar5 == 0) << 1;
      iVar4 = 0;
      if (iVar5 != 0) {
        iVar4 = iVar5;
      }
      param_1[0x4d] = iVar4;
      if (iStack_10c != 0) {
        fn_822315A0();
      }
    }
    iVar4 = param_1[0x4d];
    if (iVar4 != 0) {
      *(undefined4 *)(iVar4 + 0x48) = 3;
      *(undefined4 *)(iVar4 + 0x3c) = 0;
    }
    if (*piVar11 == 0) {
      param_1[0x4e] = 0;
    }
    else {
      uVar3 = fn_82F51468(auStack_d0,param_1[8]);
      fn_824D2AE8(&uStack_110,uVar3);
      if (ZEXT48(piStack_cc) != 0) {
        lVar7 = ZEXT48(piStack_cc) + 8;
        do {
          puVar8 = (uint *)lVar7;
          lVar6 = (ulonglong)*puVar8 - 1;
          if (in_RESERVE != '\0') {
            uVar1 = storeWordConditionalIndexed(lVar6,0,lVar7);
            *puVar8 = uVar1;
            bVar14 = 2;
          }
        } while (!(bool)(bVar14 >> 1 & 1));
        if ((int)lVar6 == 0) {
          (**(code **)(*piStack_cc + 4))();
        }
      }
      iVar5 = fn_82F53380(uStack_110,piVar11,0,1);
      bVar14 = (iVar5 == 0) << 1;
      iVar4 = 0;
      if (iVar5 != 0) {
        iVar4 = iVar5;
      }
      param_1[0x4e] = iVar4;
      if (iStack_10c != 0) {
        fn_822315A0();
      }
    }
    iVar4 = param_1[0x4e];
    if (iVar4 != 0) {
      *(undefined4 *)(iVar4 + 0x48) = 1;
      *(undefined4 *)(iVar4 + 0x3c) = 1;
    }
    piVar11 = (int *)(param_2 + 0x54);
    if (*(int *)(param_2 + 0x54) == 0) {
      param_1[0x51] = 0;
    }
    else {
      uVar3 = fn_82F51468(auStack_c0,param_1[8]);
      fn_824D2AE8(&uStack_110,uVar3);
      if (ZEXT48(piStack_bc) != 0) {
        lVar7 = ZEXT48(piStack_bc) + 8;
        do {
          puVar8 = (uint *)lVar7;
          lVar6 = (ulonglong)*puVar8 - 1;
          if (in_RESERVE != '\0') {
            uVar1 = storeWordConditionalIndexed(lVar6,0,lVar7);
            *puVar8 = uVar1;
            bVar14 = 2;
          }
        } while (!(bool)(bVar14 >> 1 & 1));
        if ((int)lVar6 == 0) {
          (**(code **)(*piStack_bc + 4))();
        }
      }
      iVar5 = fn_82F53380(uStack_110,piVar11,0,1);
      bVar14 = (iVar5 == 0) << 1;
      iVar4 = 0;
      if (iVar5 != 0) {
        iVar4 = iVar5;
      }
      param_1[0x51] = iVar4;
      if (iStack_10c != 0) {
        fn_822315A0();
      }
    }
    if (param_1[0x51] != 0) {
      *(undefined4 *)(param_1[0x51] + 0x3c) = 1;
    }
    if (*piVar11 == 0) {
      param_1[0x52] = 0;
    }
    else {
      uVar3 = fn_82F51468(auStack_b0,param_1[8]);
      fn_824D2AE8(&uStack_110,uVar3);
      if (ZEXT48(piStack_ac) != 0) {
        lVar7 = ZEXT48(piStack_ac) + 8;
        do {
          puVar8 = (uint *)lVar7;
          lVar6 = (ulonglong)*puVar8 - 1;
          if (in_RESERVE != '\0') {
            uVar1 = storeWordConditionalIndexed(lVar6,0,lVar7);
            *puVar8 = uVar1;
            bVar14 = 2;
          }
        } while (!(bool)(bVar14 >> 1 & 1));
        if ((int)lVar6 == 0) {
          (**(code **)(*piStack_ac + 4))();
        }
      }
      iVar5 = fn_82F53380(uStack_110,piVar11,0,1);
      bVar14 = (iVar5 == 0) << 1;
      iVar4 = 0;
      if (iVar5 != 0) {
        iVar4 = iVar5;
      }
      param_1[0x52] = iVar4;
      if (iStack_10c != 0) {
        fn_822315A0();
      }
    }
    if (param_1[0x52] != 0) {
      *(undefined4 *)(param_1[0x52] + 0x3c) = 0;
    }
    piVar11 = (int *)(param_2 + 0x5c);
    if (*(int *)(param_2 + 0x5c) == 0) {
      param_1[0x53] = 0;
    }
    else {
      uVar3 = fn_82F51468(auStack_a0,param_1[8]);
      fn_824D2AE8(&uStack_110,uVar3);
      if (ZEXT48(piStack_9c) != 0) {
        lVar7 = ZEXT48(piStack_9c) + 8;
        do {
          puVar8 = (uint *)lVar7;
          lVar6 = (ulonglong)*puVar8 - 1;
          if (in_RESERVE != '\0') {
            uVar1 = storeWordConditionalIndexed(lVar6,0,lVar7);
            *puVar8 = uVar1;
            bVar14 = 2;
          }
        } while (!(bool)(bVar14 >> 1 & 1));
        if ((int)lVar6 == 0) {
          (**(code **)(*piStack_9c + 4))();
        }
      }
      iVar5 = fn_82F53380(uStack_110,piVar11,0,1);
      bVar14 = (iVar5 == 0) << 1;
      iVar4 = 0;
      if (iVar5 != 0) {
        iVar4 = iVar5;
      }
      param_1[0x53] = iVar4;
      if (iStack_10c != 0) {
        fn_822315A0();
      }
    }
    if (param_1[0x53] != 0) {
      *(undefined4 *)(param_1[0x53] + 0x3c) = 1;
    }
    if (*piVar11 == 0) {
      param_1[0x54] = 0;
    }
    else {
      uVar3 = fn_82F51468(auStack_90,param_1[8]);
      fn_824D2AE8(&uStack_110,uVar3);
      if (ZEXT48(piStack_8c) != 0) {
        lVar7 = ZEXT48(piStack_8c) + 8;
        do {
          puVar8 = (uint *)lVar7;
          lVar6 = (ulonglong)*puVar8 - 1;
          if (in_RESERVE != '\0') {
            uVar1 = storeWordConditionalIndexed(lVar6,0,lVar7);
            *puVar8 = uVar1;
            bVar14 = 2;
          }
        } while (!(bool)(bVar14 >> 1 & 1));
        if ((int)lVar6 == 0) {
          (**(code **)(*piStack_8c + 4))();
        }
      }
      iVar5 = fn_82F53380(uStack_110,piVar11,0,1);
      bVar14 = (iVar5 == 0) << 1;
      iVar4 = 0;
      if (iVar5 != 0) {
        iVar4 = iVar5;
      }
      param_1[0x54] = iVar4;
      if (iStack_10c != 0) {
        fn_822315A0();
      }
    }
    if (param_1[0x54] != 0) {
      *(undefined4 *)(param_1[0x54] + 0x3c) = 0;
    }
    if (*(int *)(param_2 + 0x58) == 0) {
      param_1[0x55] = 0;
    }
    else {
      uVar3 = fn_82F51468(auStack_80,param_1[8]);
      fn_824D2AE8(&uStack_110,uVar3);
      if (ZEXT48(piStack_7c) != 0) {
        lVar7 = ZEXT48(piStack_7c) + 8;
        do {
          puVar8 = (uint *)lVar7;
          lVar6 = (ulonglong)*puVar8 - 1;
          if (in_RESERVE != '\0') {
            uVar1 = storeWordConditionalIndexed(lVar6,0,lVar7);
            *puVar8 = uVar1;
            bVar14 = 2;
          }
        } while (!(bool)(bVar14 >> 1 & 1));
        if ((int)lVar6 == 0) {
          (**(code **)(*piStack_7c + 4))();
        }
      }
      iVar5 = fn_82F53380(uStack_110,param_2 + 0x58,0,1);
      iVar4 = 0;
      if (iVar5 != 0) {
        iVar4 = iVar5;
      }
      param_1[0x55] = iVar4;
      if (iStack_10c != 0) {
        fn_822315A0();
      }
    }
    if (param_1[0x55] != 0) {
      *(undefined4 *)(param_1[0x55] + 0x3c) = 0;
    }
    fn_824D7230(param_1,param_1 + 0x56,param_2 + 0x60);
  }
  fn_82F51FD0(param_1[8],1);
  return param_1;
}

