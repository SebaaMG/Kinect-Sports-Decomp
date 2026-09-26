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
extern unsigned int *auStack_c0;
extern unsigned int *auStack_d0;
extern int fn_822315A0();
extern int fn_82250A18();
extern int fn_82250BD0();
extern int fn_822ABA88();
extern int fn_822EFBF0();
extern int fn_823692A0();
extern int fn_8236AF28();
extern int fn_8236B1E8();
extern int fn_8236B328();
extern int fn_823CDF08();
extern int fn_823DBB58();
extern int fn_823E6B00();
extern int fn_823F1470();
extern int fn_8288B760();
extern unsigned int iStack_cc;
extern unsigned int lbl_832975B0;
extern unsigned int uStack_d8;
extern unsigned int uStack_e0;
extern unsigned int uStack_e8;
extern unsigned int uStack_f0;


undefined8
fn_823CDBB0(int *param_1,undefined8 param_2,int param_3,undefined8 *param_4,undefined2 *param_5,
             int param_6)

{
  int *piVar1;
  undefined4 *puVar2;
  int in_r0;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar3;
  undefined4 *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [4];
  int iStack_cc;
  undefined1 auStack_c0 [192];
  
  piVar1 = *(int **)(param_3 * 4 + *(int *)param_1[2]);
  puVar8 = param_4;
  iVar4 = fn_822ABA88(*(undefined4 *)(piVar1[4] * 4 + *piVar1));
  uVar5 = fn_823692A0(param_1,*(undefined4 *)((int)puVar8 + 0x14),*(undefined4 *)(puVar8 + 3));
  if ((uVar5 != 0) && (iVar6 = *(int *)(*(int *)(uVar5 + 0x110) + 0x18), iVar6 != 10)) {
    uVar5 = -(uint)(iVar6 == 0xb) & uVar5;
  }
  uStack_f0 = *param_4;
  uStack_e8 = param_4[1];
  uStack_e0 = param_4[2];
  uStack_d8 = param_4[3];
  if ((((param_6 == 3) && (uVar5 != 0)) && (*(int *)(param_4 + 2) == 0)) &&
     (iVar6 = fn_8236AF28(param_1,param_2,param_3), iVar6 == 0)) {
    uStack_e0 = CONCAT44((((U64)(uStack_e0) >> 0) & 0xFFFFFFFF),*(undefined4 *)(uVar5 + 0x28));
    uStack_d8 = CONCAT44(*(undefined4 *)(uVar5 + 0x2c),(((U64)(uStack_d8) >> 32) & 0xFFFFFFFF));
  }
  piVar1 = *(int **)((((U64)(uStack_d8) >> 0) & 0xFFFFFFFF) * 4 + *(int *)param_1[2]);
  if ((((U64)(uStack_e0) >> 0) & 0xFFFFFFFF) == 0) {
    iVar6 = fn_822ABA88(*(undefined4 *)(piVar1[4] * 4 + *piVar1),(((U64)(uStack_e0) >> 32) & 0xFFFFFFFF));
    puVar7 = (undefined4 *)(iVar6 + 0x80U & 0xfffffff0);
    uVar12 = puVar7[1];
    uVar13 = puVar7[2];
    uVar14 = puVar7[3];
    puVar2 = (undefined4 *)((int)&uStack_f0 + in_r0 & 0xfffffff0);
    *puVar2 = *puVar7;
    puVar2[1] = uVar12;
    puVar2[2] = uVar13;
    puVar2[3] = uVar14;
  }
  iVar6 = fn_8236B1E8(param_1,*(undefined4 *)(param_4 + 3),
                            *(undefined4 *)((int)param_4 + 0x14));
  if (iVar6 == 0) {
    lVar10 = fn_8236B328(param_1,*(undefined4 *)(param_4 + 3));
    uVar11 = lVar10 != 0;
  }
  else {
    uVar11 = 2;
  }
  fn_82250BD0(auStack_c0);
  if (param_1[0x130] == 0) {
    uVar9 = (ulonglong)*(uint *)(*(int *)(iVar4 + 0x110) + 0x18);
    lVar10 = uVar9 - 9;
    fn_823E6B00(param_1,iVar4,&uStack_f0,uVar11,
                      lVar10 - ((uVar9 - 10) + (ulonglong)(lVar10 == 0)),auStack_c0);
  }
  if ((param_1[0x15] == 8) || ((param_1[0x15] != 0xe && (*(int *)(param_1[300] + 0xd4) == 0)))) {
    iVar6 = lbl_832975B0;
    if (lbl_832975B0 == 0) {
      iVar6 = fn_82250A18();
    }
    if (*(char *)(iVar6 + 4) == '\0') {
      fn_823CDF08(param_1,param_2,param_3,&uStack_f0,param_5,uVar11,auStack_c0,1);
      iVar4 = (**(code **)(*param_1 + 200))(param_1);
      if (iVar4 == 0) {
        fn_823DBB58(param_1[300]);
      }
    }
    else {
      iVar6 = param_1[0x21];
      if (iVar6 != 0) {
        if (*(int *)(iVar4 + 0x168) == 0) {
          uVar5 = *(uint *)(iVar4 + 0x16c);
        }
        else {
          uVar5 = fn_8288B760();
          uVar5 = uVar5 & 0xff;
        }
        if (uVar5 != 0) {
          puVar7 = (undefined4 *)fn_822EFBF0(auStack_d0,iVar6);
          fn_823F1470((ulonglong)*(uint *)*puVar7 + 0x890,param_2,param_3,uStack_f0,uStack_e8,
                            uStack_e0,uStack_d8,*param_5);
          if (iStack_cc != 0) {
            fn_822315A0();
          }
        }
      }
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

