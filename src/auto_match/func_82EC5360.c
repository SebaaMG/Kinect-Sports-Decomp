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
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern int fn_82E9AC18();
extern int fn_82E9B140();
extern int fn_82EAA320();
extern int fn_82F26110();
extern int fn_82F26F98();
extern unsigned int iStack_c8;
extern unsigned int iStack_cc;
extern unsigned int iStack_dc;
extern unsigned int iStack_e0;
extern unsigned int lbl_831898B8;
extern unsigned int uStack00000024;
extern unsigned int uStack0000002c;
extern unsigned int uStack0000003c;
extern unsigned int uStack00000044;
extern unsigned int uStack_d0;
extern unsigned int uStack_d4;
extern unsigned int uStack_d8;
extern unsigned int uStack_e4;
extern unsigned int uStack_e8;
extern unsigned int uStack_ec;
extern unsigned int uStack_f0;


void fn_82EC5360(int param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  longlong param_5,undefined4 param_6,undefined4 param_7,longlong param_8)

{
  code *pcVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  undefined4 uStack00000024;
  undefined4 uStack0000002c;
  undefined4 uStack0000003c;
  undefined4 uStack00000044;
  undefined4 in_stack_00000054;
  undefined4 in_stack_0000005c;
  uint in_stack_00000064;
  int in_stack_0000006c;
  undefined4 in_stack_00000074;
  undefined4 in_stack_0000007c;
  undefined4 in_stack_00000084;
  int in_stack_0000008c;
  int in_stack_00000094;
  int in_stack_0000009c;
  int in_stack_000000ac;
  undefined4 *in_stack_000000b4;
  uint *in_stack_000000bc;
  int *in_stack_000000c4;
  uint uStack_f0;
  uint uStack_ec;
  uint uStack_e8;
  uint uStack_e4;
  int iStack_e0;
  int iStack_dc;
  uint uStack_d8;
  undefined4 uStack_d4;
  uint uStack_d0;
  int iStack_cc;
  int iStack_c8;
  uint auStack_c0 [4];
  uint auStack_b0 [44];
  
  uVar16 = (ulonglong)*(uint *)(param_1 + 0xa2c);
  uVar14 = (ulonglong)*(uint *)(param_1 + 0xa30);
  uStack_f0 = *in_stack_000000bc;
  uStack_ec = in_stack_000000bc[1];
  uStack_e8 = in_stack_000000bc[2];
  uStack_e4 = in_stack_000000bc[3];
  uVar18 = (ulonglong)in_stack_00000064;
  pcVar1 = (code *)*in_stack_000000b4;
  lVar17 = uVar18 + 0x100;
  pcVar2 = (code *)in_stack_000000b4[3];
  uVar13 = ((uVar16 - *(uint *)(in_stack_00000094 + 8)) + (ulonglong)uStack_f0 &
           (ulonglong)*(uint *)(param_1 + 0xa34)) - uVar16;
  uVar12 = ((uVar14 - *(uint *)(in_stack_00000094 + 0xc)) + (ulonglong)uStack_ec &
           (ulonglong)*(uint *)(param_1 + 0xa38)) - uVar14;
  uVar16 = ((uVar16 - *(uint *)(in_stack_0000009c + 8)) + (ulonglong)uStack_e8 &
           (ulonglong)*(uint *)(param_1 + 0xa34)) - uVar16;
  uVar14 = ((uVar14 - *(uint *)(in_stack_0000009c + 0xc)) + (ulonglong)uStack_e4 &
           (ulonglong)*(uint *)(param_1 + 0xa38)) - uVar14;
  uStack00000024 = param_3;
  uStack0000002c = param_4;
  uStack0000003c = param_6;
  uStack00000044 = param_7;
  if (*(int *)(param_1 + 0x6d74) == 0) {
    uVar11 = (ulonglong)((int)uVar13 >> 0x1f);
    uVar9 = (ulonglong)((int)uVar12 >> 0x1f);
    uVar11 = (uVar13 ^ uVar11) - uVar11;
    uVar9 = (uVar12 ^ uVar9) - uVar9;
    if (((int)uVar11 < 0x9f) && ((int)uVar9 < 0x9f)) {
      iVar5 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar9 & 0xffffffff) << 2)) * 4 +
                      in_stack_000000ac) +
              *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar11 & 0xffffffff) << 2)) * 4 +
                      in_stack_000000ac);
    }
    else {
      iVar5 = *(int *)(in_stack_000000ac + 0x14) << 1;
    }
    uVar13 = (ulonglong)((int)uVar16 >> 0x1f);
    uVar12 = (ulonglong)((int)uVar14 >> 0x1f);
    uVar13 = (uVar16 ^ uVar13) - uVar13;
    uVar12 = (uVar14 ^ uVar12) - uVar12;
    if (((int)uVar13 < 0x9f) && ((int)uVar12 < 0x9f)) {
      iVar6 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar12 & 0xffffffff) << 2)) * 4 +
                      in_stack_000000ac) +
              *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar13 & 0xffffffff) << 2)) * 4 +
                      in_stack_000000ac);
    }
    else {
      iVar6 = *(int *)(in_stack_000000ac + 0x14) << 1;
    }
    fn_82F26110(param_1,&uStack_f0,&uStack_ec,in_stack_00000074,in_stack_0000007c);
    lVar10 = (longlong)((int)uStack_ec >> 2) * (longlong)*(int *)(param_1 + 0x564) +
             (longlong)((int)uStack_f0 >> 2);
    if (in_stack_0000008c == 1) {
      (**(code **)(param_1 + 0x9b8))(lVar10 + param_5);
    }
    else {
      (**(code **)(param_1 + 0x9c0))
                (lVar10 + param_5,*(int *)(param_1 + 0x564),uVar18,0x10,uStack_f0,uStack_ec,0,
                 *(undefined4 *)(param_1 + 0x618));
    }
    fn_82F26110(param_1,&uStack_e8,&uStack_e4,in_stack_00000074,in_stack_0000007c);
    lVar10 = (longlong)((int)uStack_e4 >> 2) * (longlong)*(int *)(param_1 + 0x564) +
             (longlong)((int)uStack_e8 >> 2);
    if (in_stack_0000008c == 1) {
      (**(code **)(param_1 + 0x9b8))(lVar10 + param_8);
    }
    else {
      (**(code **)(param_1 + 0x9c0))
                (lVar10 + param_8,*(int *)(param_1 + 0x564),lVar17,0x10,uStack_e8,uStack_e4,0,
                 *(undefined4 *)(param_1 + 0x618));
    }
    (**(code **)(param_1 + 0xb1c))(uVar18,0x10,lVar17,0x10,uVar18,0x10,0x10,0x10);
    iVar7 = (*pcVar2)(param_2,0x10,uVar18,0x10,0x10);
    iVar7 = iVar7 + iVar6 + iVar5;
    auStack_c0[0] = uStack_f0;
    auStack_b0[0] = uStack_ec;
    fn_82EAA320(param_1,auStack_c0,auStack_b0,&iStack_dc,&uStack_d8,1);
    auStack_c0[0] = uStack_e8;
    auStack_b0[0] = uStack_e4;
    fn_82EAA320(param_1,auStack_c0,auStack_b0,&uStack_d4,&iStack_e0,1);
    if ((*(uint *)(param_1 + 0x6dc4) & 1) != 0) {
      fn_82F26F98(param_1,uStack0000003c,*(undefined4 *)(param_1 + 0x568),uVar18,8,iStack_dc,
                        uStack_d8,0);
      fn_82F26F98(param_1,in_stack_00000054,*(undefined4 *)(param_1 + 0x568),lVar17,8,
                        uStack_d4,iStack_e0,0);
      (**(code **)(param_1 + 0xb1c))(uVar18,8,lVar17,8,uVar18,8,8,8);
      iVar5 = (*pcVar1)(uStack00000024,8,uVar18,8);
      iVar7 = iVar5 + iVar7;
    }
    if ((*(uint *)(param_1 + 0x6dc4) & 2) == 0) {
      *in_stack_000000c4 = iVar7;
    }
    else {
      fn_82F26F98(param_1,uStack00000044,*(undefined4 *)(param_1 + 0x568),uVar18,8,iStack_dc,
                        uStack_d8,0);
      fn_82F26F98(param_1,in_stack_0000005c,*(undefined4 *)(param_1 + 0x568),lVar17,8,
                        uStack_d4,iStack_e0,0);
      (**(code **)(param_1 + 0xb1c))(uVar18,8,lVar17,8,uVar18,8,8,8);
      iVar5 = (*pcVar1)(uStack0000002c,8,uVar18,8);
      *in_stack_000000c4 = iVar5 + iVar7;
    }
  }
  else {
    fn_82F26110(param_1,&uStack_f0,&uStack_ec,in_stack_00000074,in_stack_0000007c);
    lVar10 = (longlong)((int)uStack_ec >> 2) * (longlong)*(int *)(param_1 + 0x564) +
             (longlong)((int)uStack_f0 >> 2);
    if (in_stack_0000008c == 1) {
      (**(code **)(param_1 + 0x9b8))(lVar10 + param_5);
    }
    else {
      (**(code **)(param_1 + 0x9c0))
                (lVar10 + param_5,*(int *)(param_1 + 0x564),uVar18,0x10,uStack_f0,uStack_ec,0,
                 *(undefined4 *)(param_1 + 0x618));
    }
    fn_82F26110(param_1,&uStack_e8,&uStack_e4,in_stack_00000074,in_stack_0000007c);
    iVar5 = *(int *)(param_1 + 0x564);
    if (in_stack_0000008c == 1) {
      (**(code **)(param_1 + 0x9b8))
                ((longlong)((int)uStack_e4 >> 2) * (longlong)iVar5 + (longlong)((int)uStack_e8 >> 2)
                 + param_8);
    }
    else {
      (**(code **)(param_1 + 0x9c0))
                ((longlong)((int)uStack_e4 >> 2) * (longlong)iVar5 + (longlong)((int)uStack_e8 >> 2)
                 + param_8,iVar5,lVar17,0x10,uStack_e8,uStack_e4,0,*(undefined4 *)(param_1 + 0x618))
      ;
    }
    (**(code **)(param_1 + 0xb1c))(uVar18,0x10,lVar17,0x10,uVar18,0x10,0x10,0x10);
    fn_82E9AC18(param_1,param_2,0x10,uVar18,0x10,0x10,0x10,in_stack_0000006c);
    auStack_c0[0] = uStack_f0;
    auStack_b0[0] = uStack_ec;
    fn_82EAA320(param_1,auStack_c0,auStack_b0,&iStack_dc,&uStack_d8,1);
    auStack_c0[0] = uStack_e8;
    auStack_b0[0] = uStack_e4;
    fn_82EAA320(param_1,auStack_c0,auStack_b0,&uStack_d4,&iStack_e0,1);
    uVar4 = uStack_d8;
    iVar6 = iStack_dc;
    iVar5 = iStack_e0;
    iVar7 = iStack_cc;
    uVar3 = uStack_d0;
    iVar15 = iStack_c8;
    if ((*(uint *)(param_1 + 0x6dc4) & 1) != 0) {
      fn_82F26F98(param_1,uStack0000003c,*(undefined4 *)(param_1 + 0x568),uVar18,8,iStack_dc,
                        uStack_d8,0);
      fn_82F26F98(param_1,in_stack_00000054,*(undefined4 *)(param_1 + 0x568),lVar17,8,
                        uStack_d4,iVar5,0);
      (**(code **)(param_1 + 0xb1c))(uVar18,8,lVar17,8,uVar18,8,8,8);
      fn_82E9AC18(param_1,uStack00000024,8,uVar18,8,8,8,in_stack_0000006c);
      iVar7 = iStack_dc + iStack_cc;
      uVar3 = uStack_d8 | uStack_d0;
      iVar15 = iStack_e0 + iStack_c8;
    }
    if ((*(uint *)(param_1 + 0x6dc4) & 2) != 0) {
      fn_82F26F98(param_1,uStack00000044,*(undefined4 *)(param_1 + 0x568),uVar18,8,iVar6,uVar4
                        ,0);
      fn_82F26F98(param_1,in_stack_0000005c,*(undefined4 *)(param_1 + 0x568),lVar17,8,
                        uStack_d4,iVar5,0);
      (**(code **)(param_1 + 0xb1c))(uVar18,8,lVar17,8,uVar18,8,8,8);
      fn_82E9AC18(param_1,uStack0000002c,8,uVar18,8,8,8,in_stack_0000006c);
      iVar15 = iStack_e0 + iVar15;
      iVar7 = iStack_dc + iVar7;
      uVar3 = uStack_d8 | uVar3;
    }
    iVar5 = fn_82E9B140(param_1,uVar13,uVar12,uVar3,in_stack_00000084);
    if (((uVar3 != 0) || ((int)uVar13 != 0)) || (uVar8 = 0, (int)uVar12 != 0)) {
      uVar8 = 1;
    }
    iVar6 = fn_82E9B140(param_1,uVar16,uVar14,uVar8,in_stack_00000084);
    *in_stack_000000c4 = *(int *)(in_stack_0000006c + 0x6c) * (iVar6 + iVar5 + iVar15) + iVar7;
  }
  return;
}

