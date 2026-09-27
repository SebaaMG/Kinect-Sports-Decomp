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
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int *auStack_350;
extern unsigned int *auStack_370;
extern int fn_82E9AC18();
extern int fn_82E9B140();
extern int fn_82EAA818();
extern int fn_82EB1548();
extern int fn_82F261D8();
extern unsigned int iStack00000014;
extern unsigned int iStack0000001c;
extern unsigned int iStack0000003c;
extern unsigned int iStack_36c;
extern unsigned int lbl_82005730;
extern unsigned int lbl_831898B8;
extern unsigned int uStack0000004c;
extern unsigned int uStack_358;
extern unsigned int uStack_368;


void fn_82EC82F8(undefined8 param_1, int param_2, longlong param_3, undefined8 param_4, int *param_5, int param_6, undefined8 param_7, ulonglong param_8, undefined8 unused_arg_9, undefined8 unused_arg_10, undefined8 unused_arg_11, undefined8 unused_arg_12, undefined8 unused_arg_13, int in_stack_0000007c, int in_stack_00000084, int in_stack_0000008c)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte *pbVar21;
  byte *pbVar22;
  byte *pbVar23;
  byte *pbVar24;
  byte *pbVar25;
  byte *pbVar26;
  byte *pbVar27;
  byte *pbVar28;
  byte *pbVar29;
  byte *pbVar30;
  byte *pbVar31;
  byte *pbVar32;
  byte *pbVar33;
  byte *pbVar34;
  byte *pbVar35;
  undefined4 uVar36;
  ulonglong uVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  ulonglong uVar41;
  ulonglong uVar42;
  longlong lVar43;
  byte *pbVar44;
  byte *pbVar45;
  int iVar46;
  ulonglong uVar47;
  ulonglong uVar48;
  uint uVar49;
  ulonglong uVar50;
  ulonglong uVar51;
  ulonglong uVar52;
  ulonglong uVar53;
  ulonglong uVar54;
  ulonglong uVar55;
  int iStack00000014;
  int iStack0000001c;
  int *piStack00000034;
  int iStack0000003c;
  uint uStack0000004c;



  uint *in_stack_000000a4;
  uint *in_stack_000000ac;
  int *in_stack_000000b4;
  undefined1 auStack_370 [4];
  int iStack_36c;
  uint uStack_368;
  longlong lStack_360;
  uint uStack_358;
  undefined8 auStack_350 [1];
  byte abStack_340 [832];
  
  iStack00000014 = (int)param_1;
  uStack0000004c = (uint)param_8;
  iStack0000001c = param_2;
  piStack00000034 = param_5;
  iStack0000003c = param_6;
  if (in_stack_0000007c == 0) {
    lStack_360 = param_3;
    auStack_350[0] = param_1;
    fn_82EAA818();
    param_3 = lStack_360;
    param_1 = auStack_350[0];
  }
  else {
    iStack_36c = in_stack_0000008c;
    fn_82EB1548();
    param_8 = (ulonglong)uStack0000004c;
    param_6 = iStack0000003c;
    param_2 = iStack0000001c;
  }
  uVar2 = uStack_358;
  uVar49 = uStack_368;
  iVar40 = (int)param_1;
  uVar50 = (ulonglong)uStack_358;
  uVar48 = (ulonglong)uStack_368;
  if (*(int *)(iVar40 + 0x6d78) == 0) {
    if ((*(int *)(iVar40 + 0x6d74) != 0) && (*(int *)(iVar40 + 0x6d84) == 0)) {
      lStack_360 = ((((U64)(lStack_360)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)(uStack_358)) & ((U64)0xFFFFFFFF)) << 0));
      fn_82F261D8(param_1,auStack_370,&lStack_360,param_7,param_8);
      iVar46 = *(int *)(iVar40 + 0x564);
      if (in_stack_00000084 == 1) {
        (**(code **)(iVar40 + 0x9b8))
                  ((longlong)((int)(((U64)(lStack_360) >> 0) & 0xFFFFFFFF) >> 2) * (longlong)iVar46 +
                   (longlong)((int)uVar49 >> 2) + param_3);
      }
      else {
        (**(code **)(iVar40 + 0x9c0))
                  ((longlong)((int)(((U64)(lStack_360) >> 0) & 0xFFFFFFFF) >> 2) * (longlong)iVar46 +
                   (longlong)((int)uVar49 >> 2) + param_3,iVar46,abStack_340,0x10,uVar49,
                   (((U64)(lStack_360) >> 0) & 0xFFFFFFFF),in_stack_00000084,*(undefined4 *)(iVar40 + 0x618));
      }
      fn_82E9AC18(param_1,param_2,0x10,abStack_340,0x10,0x10,0x10,param_6);
      iVar46 = *param_5;
      uVar36 = ((uint)((ulonglong)(auStack_350[0]) >> 32));
      uVar37 = (ulonglong)(uint)param_5[3];
      uVar51 = (ulonglong)(uint)param_5[2];
      if (iVar46 != 0) {
        uVar41 = (ulonglong)*(uint *)(iVar40 + 0xa30);
        uVar55 = (ulonglong)*(uint *)(iVar40 + 0xa2c);
        uVar2 = *(uint *)(iVar40 + 0xa38);
        uVar3 = *(uint *)(iVar40 + 0xa34);
        uVar4 = param_5[5];
        uVar5 = param_5[4];
        iVar38 = fn_82E9B140(param_1,((uVar55 - uVar51) + uVar48 & (ulonglong)uVar3) - uVar55,
                               ((uVar41 - uVar37) + uVar50 & (ulonglong)uVar2) - uVar41,
                               ((uint)((ulonglong)(auStack_350[0]) >> 32)),0);
        iVar39 = fn_82E9B140(param_1,((uVar55 - uVar5) + uVar48 & (ulonglong)uVar3) - uVar55,
                               ((uVar41 - uVar4) + uVar50 & (ulonglong)uVar2) - uVar41,uVar36,0);
        if (iVar39 <= iVar38) {
          uVar51 = (ulonglong)uVar5;
          uVar37 = (ulonglong)uVar4;
        }
      }
      iVar40 = fn_82E9B140(param_1,((*(uint *)(iVar40 + 0xa2c) - uVar51) + uVar48 &
                                     (ulonglong)*(uint *)(iVar40 + 0xa34)) -
                                     (ulonglong)*(uint *)(iVar40 + 0xa2c),
                             ((*(uint *)(iVar40 + 0xa30) - uVar37) + uVar50 &
                             (ulonglong)*(uint *)(iVar40 + 0xa38)) -
                             (ulonglong)*(uint *)(iVar40 + 0xa30),uVar36,in_stack_0000007c);
      iVar40 = iVar40 + iStack_36c;
      if (iVar46 != 0) {
        iVar40 = iVar40 + 1;
      }
      iStack_36c = *(int *)(param_6 + 0x6c) * iVar40 + uStack_368;
    }
  }
  else {
    lStack_360 = ((((U64)(lStack_360)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)(uStack_368)) & ((U64)0xFFFFFFFF)) << 0));
    iStack_36c = 0;
    fn_82F261D8(param_1,&lStack_360,auStack_370,param_7,param_8);
    lVar43 = (longlong)((int)uVar2 >> 2) * (longlong)*(int *)(iVar40 + 0x564);
    if (in_stack_00000084 == 1) {
      (**(code **)(iVar40 + 0x9b8))(lVar43 + ((int)(((U64)(lStack_360) >> 0) & 0xFFFFFFFF) >> 2) + param_3);
    }
    else {
      (**(code **)(iVar40 + 0x9c0))
                (lVar43 + ((int)(((U64)(lStack_360) >> 0) & 0xFFFFFFFF) >> 2) + param_3,*(int *)(iVar40 + 0x564),
                 abStack_340,0x10,(((U64)(lStack_360) >> 0) & 0xFFFFFFFF),uVar2,in_stack_00000084,
                 *(undefined4 *)(iVar40 + 0x618));
    }
    pbVar44 = (byte *)auStack_350;
    pbVar45 = (byte *)(param_2 + 0xe);
    lVar43 = 0x10;
    do {
      pbVar6 = pbVar44 + 0x1d;
      pbVar7 = pbVar45 + -1;
      pbVar8 = pbVar44 + 0x1c;
      pbVar9 = pbVar45 + -2;
      pbVar10 = pbVar44 + 0x19;
      pbVar11 = pbVar44 + 0x1b;
      pbVar12 = pbVar44 + 0x1a;
      pbVar13 = pbVar44 + 0x1f;
      pbVar14 = pbVar44 + 0x18;
      pbVar15 = pbVar44 + 0x17;
      pbVar16 = pbVar44 + 0x16;
      pbVar17 = pbVar44 + 0x15;
      pbVar18 = pbVar44 + 0x14;
      pbVar19 = pbVar44 + 0x13;
      pbVar20 = pbVar44 + 0x12;
      pbVar21 = pbVar44 + 0x11;
      pbVar22 = pbVar45 + ((int)abStack_340 - param_2);
      pbVar44 = pbVar44 + 0x10;
      bVar1 = *pbVar45;
      pbVar23 = pbVar45 + 1;
      pbVar24 = pbVar45 + -0xe;
      pbVar25 = pbVar45 + -0xd;
      pbVar26 = pbVar45 + -0xc;
      pbVar27 = pbVar45 + -0xb;
      pbVar28 = pbVar45 + -10;
      pbVar29 = pbVar45 + -9;
      pbVar30 = pbVar45 + -3;
      pbVar31 = pbVar45 + -4;
      pbVar32 = pbVar45 + -5;
      pbVar33 = pbVar45 + -6;
      pbVar34 = pbVar45 + -7;
      pbVar35 = pbVar45 + -8;
      pbVar45 = pbVar45 + 0x10;
      iStack_36c = ((uint)*pbVar8 - (uint)*pbVar9) * ((uint)*pbVar8 - (uint)*pbVar9) +
                   ((uint)*pbVar6 - (uint)*pbVar7) * ((uint)*pbVar6 - (uint)*pbVar7) +
                   ((uint)*pbVar22 - (uint)bVar1) * ((uint)*pbVar22 - (uint)bVar1) +
                   ((uint)*pbVar13 - (uint)*pbVar23) * ((uint)*pbVar13 - (uint)*pbVar23) +
                   ((uint)*pbVar44 - (uint)*pbVar24) * ((uint)*pbVar44 - (uint)*pbVar24) +
                   ((uint)*pbVar21 - (uint)*pbVar25) * ((uint)*pbVar21 - (uint)*pbVar25) +
                   ((uint)*pbVar20 - (uint)*pbVar26) * ((uint)*pbVar20 - (uint)*pbVar26) +
                   ((uint)*pbVar19 - (uint)*pbVar27) * ((uint)*pbVar19 - (uint)*pbVar27) +
                   ((uint)*pbVar18 - (uint)*pbVar28) * ((uint)*pbVar18 - (uint)*pbVar28) +
                   ((uint)*pbVar17 - (uint)*pbVar29) * ((uint)*pbVar17 - (uint)*pbVar29) +
                   ((uint)*pbVar16 - (uint)*pbVar35) * ((uint)*pbVar16 - (uint)*pbVar35) +
                   ((uint)*pbVar15 - (uint)*pbVar34) * ((uint)*pbVar15 - (uint)*pbVar34) +
                   ((uint)*pbVar14 - (uint)*pbVar33) * ((uint)*pbVar14 - (uint)*pbVar33) +
                   ((uint)*pbVar10 - (uint)*pbVar32) * ((uint)*pbVar10 - (uint)*pbVar32) +
                   ((uint)*pbVar12 - (uint)*pbVar31) * ((uint)*pbVar12 - (uint)*pbVar31) +
                   ((uint)*pbVar11 - (uint)*pbVar30) * ((uint)*pbVar11 - (uint)*pbVar30) +
                   iStack_36c;
      lVar43 = lVar43 + -1;
    } while (lVar43 != 0);
    uVar50 = (ulonglong)uStack_368;
    uVar48 = (ulonglong)(uint)piStack00000034[2];
    uVar51 = (ulonglong)uStack_358;
    if (*piStack00000034 == 0) {
      uVar55 = (ulonglong)(uint)piStack00000034[3];
      uVar37 = uVar48;
    }
    else {
      uVar42 = (ulonglong)*(uint *)(iStack00000014 + 0xa2c);
      uVar41 = (ulonglong)*(uint *)(iStack00000014 + 0xa30);
      uVar55 = (ulonglong)(uint)piStack00000034[5];
      uVar37 = (ulonglong)(uint)piStack00000034[4];
      uVar54 = ((uVar42 - uVar48) + uVar50 & (ulonglong)*(uint *)(iStack00000014 + 0xa34)) - uVar42;
      uVar52 = ((uVar41 - (uint)piStack00000034[3]) + uVar51 &
               (ulonglong)*(uint *)(iStack00000014 + 0xa38)) - uVar41;
      uVar53 = (ulonglong)((int)uVar54 >> 0x1f);
      uVar47 = (ulonglong)((int)uVar52 >> 0x1f);
      uVar53 = (uVar54 ^ uVar53) - uVar53;
      uVar41 = ((uVar41 - uVar55) + uVar51 & (ulonglong)*(uint *)(iStack00000014 + 0xa38)) - uVar41;
      uVar42 = ((uVar42 - uVar37) + uVar50 & (ulonglong)*(uint *)(iStack00000014 + 0xa34)) - uVar42;
      uVar47 = (uVar52 ^ uVar47) - uVar47;
      if (((int)uVar53 < 0x9f) && ((int)uVar47 < 0x9f)) {
        iVar40 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar47 & 0xffffffff) << 2)) * 4 +
                         in_stack_0000008c) +
                 *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar53 & 0xffffffff) << 2)) * 4 +
                         in_stack_0000008c);
      }
      else {
        iVar40 = *(int *)(in_stack_0000008c + 0x14) << 1;
      }
      uVar53 = (ulonglong)((int)uVar42 >> 0x1f);
      uVar47 = (ulonglong)((int)uVar41 >> 0x1f);
      uVar53 = (uVar42 ^ uVar53) - uVar53;
      uVar47 = (uVar41 ^ uVar47) - uVar47;
      if (((int)uVar53 < 0x9f) && ((int)uVar47 < 0x9f)) {
        iVar46 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar47 & 0xffffffff) << 2)) * 4 +
                         in_stack_0000008c) +
                 *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar53 & 0xffffffff) << 2)) * 4 +
                         in_stack_0000008c);
      }
      else {
        iVar46 = *(int *)(in_stack_0000008c + 0x14) << 1;
      }
      if (iVar40 < iVar46) {
        uVar37 = uVar48;
        uVar55 = (ulonglong)(uint)piStack00000034[3];
      }
    }
    uVar37 = ((*(uint *)(iStack00000014 + 0xa2c) - uVar37) + uVar50 &
             (ulonglong)*(uint *)(iStack00000014 + 0xa34)) -
             (ulonglong)*(uint *)(iStack00000014 + 0xa2c);
    uVar51 = ((*(uint *)(iStack00000014 + 0xa30) - uVar55) + uVar51 &
             (ulonglong)*(uint *)(iStack00000014 + 0xa38)) -
             (ulonglong)*(uint *)(iStack00000014 + 0xa30);
    uVar50 = (ulonglong)((int)uVar37 >> 0x1f);
    uVar48 = (ulonglong)((int)uVar51 >> 0x1f);
    uVar50 = (uVar37 ^ uVar50) - uVar50;
    uVar48 = (uVar51 ^ uVar48) - uVar48;
    uVar49 = uStack_368;
    if (((int)uVar50 < 0x9f) && ((int)uVar48 < 0x9f)) {
      iStack_36c = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar48 & 0xffffffff) << 2)) * 4 +
                           in_stack_0000008c) +
                   *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar50 & 0xffffffff) << 2)) * 4 +
                           in_stack_0000008c) +
                   (int)((double)SQRT((float)(longlong)iStack_36c) + lbl_82005730);
    }
    else {
      iStack_36c = *(int *)(in_stack_0000008c + 0x14) * 2 +
                   (int)((double)SQRT((float)(longlong)iStack_36c) + lbl_82005730);
    }
  }
  *in_stack_000000a4 = uVar49;
  *in_stack_000000ac = uStack_358;
  *in_stack_000000b4 = iStack_36c;
  return;
}

