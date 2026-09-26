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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern double sqrt(double);
#define SQRT(x) sqrt(x)
#define _uStack_a8 ((*(U64*)&uStack_a8))
extern int fn_82E9AB00();
extern int fn_82E9AC18();
extern int fn_82E9B140();
extern int fn_82F26110();
extern unsigned int iStack_b8;
extern unsigned int iStack_bc;
extern unsigned int iStack_c0;
extern unsigned int lbl_82005730;
extern unsigned int lbl_831898B8;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;
extern unsigned int uStack_a4;
extern unsigned int uStack_a8;
extern unsigned int uStack_b0;
extern unsigned int uStack_c4;
extern unsigned int uStack_c8;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;


void fn_82EA8EA0(int param_1,int param_2,longlong param_3,longlong param_4,int param_5,int param_6
                  ,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  byte *pbVar5;
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
  ulonglong uVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  undefined8 uVar39;
  byte *pbVar40;
  longlong lVar41;
  byte *pbVar42;
  ulonglong uVar43;
  longlong lVar44;
  longlong lVar45;
  uint uVar46;
  longlong lVar47;
  uint uVar48;
  undefined4 in_stack_00000054;
  int in_stack_0000005c;
  int in_stack_00000064;
  int in_stack_0000006c;
  undefined4 in_stack_00000074;
  int in_stack_0000007c;
  int in_stack_00000084;
  uint *in_stack_0000008c;
  int *in_stack_00000094;
  uint uStack_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  uint uStack_b0;
  uint uStack_a8;
  undefined4 uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  
  iStack_c0 = 0;
  uStack_c8 = in_stack_0000008c[2];
  uStack_d0 = *in_stack_0000008c;
  uStack_cc = in_stack_0000008c[1];
  uStack_c4 = in_stack_0000008c[3];
  uVar46 = *(uint *)(in_stack_00000064 + 8);
  uVar48 = *(uint *)(in_stack_00000064 + 0xc);
  uVar2 = *(uint *)(in_stack_0000006c + 8);
  uVar3 = *(uint *)(in_stack_0000006c + 0xc);
  pcVar4 = *(code **)(in_stack_00000084 + 8);
  fn_82F26110(param_1,&uStack_d0,&uStack_cc,param_7,param_8);
  lVar41 = (longlong)((int)uStack_cc >> 2) * (longlong)*(int *)(param_1 + 0x564) +
           (longlong)((int)uStack_d0 >> 2);
  if (in_stack_0000005c == 1) {
    (**(code **)(param_1 + 0x9b8))(lVar41 + param_3);
  }
  else {
    (**(code **)(param_1 + 0x9c0))
              (lVar41 + param_3,*(int *)(param_1 + 0x564),param_5,0x10,uStack_d0,uStack_cc,0,
               *(undefined4 *)(param_1 + 0x618));
  }
  fn_82F26110(param_1,&uStack_c8,&uStack_c4,param_7,param_8);
  iVar37 = *(int *)(param_1 + 0x564);
  if (in_stack_0000005c == 1) {
    (**(code **)(param_1 + 0x9b8))
              ((longlong)((int)uStack_c4 >> 2) * (longlong)iVar37 + (longlong)((int)uStack_c8 >> 2)
               + param_4);
  }
  else {
    (**(code **)(param_1 + 0x9c0))
              ((longlong)((int)uStack_c4 >> 2) * (longlong)iVar37 + (longlong)((int)uStack_c8 >> 2)
               + param_4,iVar37,param_5 + 0x100,0x10,uStack_c8,uStack_c4,0,
               *(undefined4 *)(param_1 + 0x618));
  }
  (**(code **)(param_1 + 0xb1c))(param_5,0x10,param_5 + 0x100,0x10,param_5,0x10,0x10,0x10);
  uVar35 = (ulonglong)*(uint *)(param_1 + 0xa2c);
  uVar43 = (ulonglong)*(uint *)(param_1 + 0xa30);
  lVar45 = ((uVar43 - uVar48) + (ulonglong)uStack_cc & (ulonglong)*(uint *)(param_1 + 0xa38)) -
           uVar43;
  lVar47 = ((uVar35 - uVar46) + (ulonglong)uStack_d0 & (ulonglong)*(uint *)(param_1 + 0xa34)) -
           uVar35;
  lVar44 = ((uVar35 - uVar2) + (ulonglong)uStack_c8 & (ulonglong)*(uint *)(param_1 + 0xa34)) -
           uVar35;
  uVar46 = (uint)lVar45;
  _uStack_a8 = CONCAT44(uVar46,uStack_a4);
  lVar41 = ((uVar43 - uVar3) + (ulonglong)uStack_c4 & (ulonglong)*(uint *)(param_1 + 0xa38)) -
           uVar43;
  uVar48 = (uint)lVar47;
  uStack_a0 = (uint)lVar44;
  uStack_9c = (uint)lVar41;
  uStack_b0 = uVar48;
  if (*(int *)(param_1 + 0x6d74) == 0) {
    if (*(int *)(param_1 + 0x6d78) == 0) {
      iVar37 = fn_82E9AB00(param_1,lVar44,lVar41,in_stack_0000007c);
      iVar36 = fn_82E9AB00(param_1,lVar47,lVar45);
      iVar38 = (*pcVar4)(param_2,0x10,param_5,0x10,in_stack_00000074);
      *in_stack_00000094 = iVar38 + iVar37 + iVar36;
    }
    else {
      pbVar42 = (byte *)(param_2 + 0xe);
      lVar41 = 0x10;
      pbVar40 = (byte *)(param_5 + -0x10);
      do {
        pbVar5 = pbVar40 + 0x1f;
        pbVar6 = pbVar40 + 0x1d;
        pbVar7 = pbVar40 + 0x1c;
        pbVar8 = pbVar40 + 0x18;
        pbVar9 = pbVar40 + 0x1b;
        pbVar10 = pbVar40 + 0x1a;
        pbVar11 = pbVar40 + 0x19;
        pbVar12 = pbVar40 + 0x17;
        pbVar13 = pbVar40 + 0x16;
        pbVar14 = pbVar40 + 0x15;
        pbVar15 = pbVar40 + 0x14;
        pbVar16 = pbVar40 + 0x13;
        pbVar17 = pbVar40 + 0x12;
        pbVar18 = pbVar40 + 0x11;
        pbVar40 = pbVar40 + 0x10;
        pbVar19 = pbVar42 + -0xe;
        pbVar20 = pbVar42 + -0xd;
        pbVar21 = pbVar42 + -0xc;
        pbVar22 = pbVar42 + (param_5 - param_2);
        pbVar23 = pbVar42 + -3;
        pbVar24 = pbVar42 + -0xb;
        pbVar25 = pbVar42 + -10;
        pbVar26 = pbVar42 + -9;
        pbVar27 = pbVar42 + -8;
        pbVar28 = pbVar42 + -7;
        pbVar29 = pbVar42 + -6;
        pbVar30 = pbVar42 + -5;
        pbVar31 = pbVar42 + 1;
        bVar1 = *pbVar42;
        pbVar32 = pbVar42 + -1;
        pbVar33 = pbVar42 + -2;
        pbVar34 = pbVar42 + -4;
        pbVar42 = pbVar42 + 0x10;
        iStack_c0 = ((uint)*pbVar40 - (uint)*pbVar19) * ((uint)*pbVar40 - (uint)*pbVar19) +
                    ((uint)*pbVar18 - (uint)*pbVar20) * ((uint)*pbVar18 - (uint)*pbVar20) +
                    ((uint)*pbVar17 - (uint)*pbVar21) * ((uint)*pbVar17 - (uint)*pbVar21) +
                    ((uint)*pbVar16 - (uint)*pbVar24) * ((uint)*pbVar16 - (uint)*pbVar24) +
                    ((uint)*pbVar15 - (uint)*pbVar25) * ((uint)*pbVar15 - (uint)*pbVar25) +
                    ((uint)*pbVar14 - (uint)*pbVar26) * ((uint)*pbVar14 - (uint)*pbVar26) +
                    ((uint)*pbVar13 - (uint)*pbVar27) * ((uint)*pbVar13 - (uint)*pbVar27) +
                    ((uint)*pbVar12 - (uint)*pbVar28) * ((uint)*pbVar12 - (uint)*pbVar28) +
                    ((uint)*pbVar8 - (uint)*pbVar29) * ((uint)*pbVar8 - (uint)*pbVar29) +
                    ((uint)*pbVar11 - (uint)*pbVar30) * ((uint)*pbVar11 - (uint)*pbVar30) +
                    ((uint)*pbVar10 - (uint)*pbVar34) * ((uint)*pbVar10 - (uint)*pbVar34) +
                    ((uint)*pbVar9 - (uint)*pbVar23) * ((uint)*pbVar9 - (uint)*pbVar23) +
                    ((uint)*pbVar7 - (uint)*pbVar33) * ((uint)*pbVar7 - (uint)*pbVar33) +
                    ((uint)*pbVar6 - (uint)*pbVar32) * ((uint)*pbVar6 - (uint)*pbVar32) +
                    ((uint)*pbVar22 - (uint)bVar1) * ((uint)*pbVar22 - (uint)bVar1) +
                    ((uint)*pbVar5 - (uint)*pbVar31) * ((uint)*pbVar5 - (uint)*pbVar31) + iStack_c0;
        lVar41 = lVar41 + -1;
      } while (lVar41 != 0);
      iVar36 = (uVar48 ^ (int)uVar48 >> 0x1f) - ((int)uVar48 >> 0x1f);
      iVar37 = (uVar46 ^ (int)uVar46 >> 0x1f) - ((int)uVar46 >> 0x1f);
      if ((iVar36 < 0x9f) && (iVar37 < 0x9f)) {
        iVar37 = *(int *)(*(int *)(&lbl_831898B8 + iVar37 * 4) * 4 + in_stack_0000007c) +
                 *(int *)(*(int *)(&lbl_831898B8 + iVar36 * 4) * 4 + in_stack_0000007c);
      }
      else {
        iVar37 = *(int *)(in_stack_0000007c + 0x14) << 1;
      }
      iVar38 = (uStack_a0 ^ (int)uStack_a0 >> 0x1f) - ((int)uStack_a0 >> 0x1f);
      iVar36 = (uStack_9c ^ (int)uStack_9c >> 0x1f) - ((int)uStack_9c >> 0x1f);
      if ((iVar38 < 0x9f) && (iVar36 < 0x9f)) {
        *in_stack_00000094 =
             *(int *)(*(int *)(&lbl_831898B8 + iVar36 * 4) * 4 + in_stack_0000007c) +
             *(int *)(*(int *)(&lbl_831898B8 + iVar38 * 4) * 4 + in_stack_0000007c) + iVar37 +
             (int)((double)SQRT((float)(longlong)iStack_c0) + lbl_82005730);
      }
      else {
        *in_stack_00000094 =
             *(int *)(in_stack_0000007c + 0x14) * 2 + iVar37 +
             (int)((double)SQRT((float)(longlong)iStack_c0) + lbl_82005730);
      }
    }
  }
  else {
    fn_82E9AC18(param_1,param_2,0x10,param_5,0x10,0x10,0x10,param_6);
    iVar37 = iStack_c0;
    iVar36 = fn_82E9B140(param_1,lVar47,lVar45,iStack_c0,in_stack_00000054);
    if (((iVar37 != 0) || (uVar48 != 0)) || (uVar39 = 0, uVar46 != 0)) {
      uVar39 = 1;
    }
    iVar37 = fn_82E9B140(param_1,lVar44,lVar41,uVar39,in_stack_00000054);
    *in_stack_00000094 = *(int *)(param_6 + 0x6c) * (iVar37 + iVar36 + iStack_bc) + iStack_b8;
  }
  return;
}

