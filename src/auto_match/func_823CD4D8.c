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
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_e0;
extern int fn_822315A0();
extern int fn_82250A18();
extern int fn_82250BD0();
extern int fn_822ABA88();
extern int fn_822EFBF0();
extern int fn_82369F08();
extern int fn_8236B1E8();
extern int fn_8236B328();
extern int fn_823CD698();
extern int fn_823E6B00();
extern int fn_823F2698();
extern unsigned int iStack_bc;
extern unsigned int lbl_832975B0;
extern unsigned int uStack_c4;
extern unsigned int uStack_c8;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;
extern unsigned int uStack_ef;
extern unsigned int uStack_f0;


undefined8
fn_823CD4D8(int param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6)

{
  int *piVar1;
  undefined4 *puVar2;
  int in_r0;
  undefined8 uVar3;
  int iVar5;
  longlong lVar4;
  undefined4 *puVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  undefined1 uStack_f0;
  undefined1 uStack_ef;
  undefined1 auStack_e0 [16];
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined1 auStack_c0 [4];
  int iStack_bc;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [160];
  
  piVar1 = *(int **)(param_2[1] * 4 + **(int **)(param_1 + 8));
  uVar3 = fn_822ABA88(*(undefined4 *)(piVar1[4] * 4 + *piVar1),*param_2);
  puVar6 = (undefined4 *)((uint)(auStack_b0 + in_r0) & 0xfffffff0);
  *puVar6 = in_register_000104d0;
  puVar6[1] = in_register_000104d4;
  puVar6[2] = in_register_000104d8;
  puVar6[3] = in_vr77;
  iVar5 = fn_82369F08(uVar3,param_3);
  if (iVar5 == 0) {
    uVar3 = 0;
  }
  else {
    uStack_f0 = 0;
    uStack_ef = 0;
    puVar6 = (undefined4 *)(iVar5 + 0x80U & 0xfffffff0);
    uVar8 = puVar6[1];
    uVar9 = puVar6[2];
    uVar10 = puVar6[3];
    uStack_c8 = *(undefined4 *)(iVar5 + 0x2c);
    uStack_cc = *(undefined4 *)(iVar5 + 0x28);
    puVar2 = (undefined4 *)((uint)(auStack_e0 + in_r0) & 0xfffffff0);
    *puVar2 = *puVar6;
    puVar2[1] = uVar8;
    puVar2[2] = uVar9;
    puVar2[3] = uVar10;
    uStack_d0 = 0;
    uStack_c4 = param_5;
    iVar5 = fn_8236B1E8(param_1);
    if (iVar5 == 0) {
      lVar4 = fn_8236B328(param_1,uStack_c8);
      uVar7 = lVar4 != 0;
    }
    else {
      uVar7 = 2;
    }
    fn_82250BD0(auStack_a0);
    if (*(int *)(param_1 + 0x4c0) == 0) {
      fn_823E6B00(param_1,uVar3,auStack_e0,uVar7,0,auStack_a0);
    }
    iVar5 = lbl_832975B0;
    if (lbl_832975B0 == 0) {
      iVar5 = fn_82250A18();
    }
    if (*(char *)(iVar5 + 4) == '\0') {
      fn_823CD698(param_1,param_2,uVar7,&uStack_f0,auStack_e0,auStack_a0,param_6);
    }
    else if (*(int *)(param_1 + 0x84) != 0) {
      puVar6 = (undefined4 *)fn_822EFBF0(auStack_c0);
      fn_823F2698((ulonglong)*(uint *)*puVar6 + 0xb98,param_2,uVar7,&uStack_f0,auStack_e0,
                        auStack_a0,param_6);
      if (iStack_bc != 0) {
        fn_822315A0();
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}

