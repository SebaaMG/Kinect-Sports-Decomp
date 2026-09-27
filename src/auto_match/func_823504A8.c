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
extern int fn_822AE3C0();
extern int fn_82350888();
extern int fn_82355ED8();
extern int fn_824904F0();
extern int fn_824C6280();
extern int fn_824C80A0();
extern int fn_824C83B8();
extern int fn_824C84E8();
extern int fn_82507EA8();
extern unsigned int lbl_8218E1AC;
extern unsigned int lbl_821CC160;
extern float lbl_8327F894;


void fn_823504A8(int param_1,undefined8 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined8 in_r0;
  int iVar4;
  int *piVar5;
  double dVar6;
  double dVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  
  dVar7 = (double)lbl_821CC160;
  if ((double)*(float *)(*(int *)(param_1 + 0x14) + 0x838) <= dVar7) {
    dVar7 = (double)(*(float *)(*(int *)(param_1 + 0x14) + 0x820) * lbl_8327F894);
  }
  if ((*(int *)(param_1 + 8) != 10) && (*(int *)(param_1 + 0x1c) != 0)) {
    fn_822AE3C0(dVar7,*(int *)(param_1 + 0x1c),param_2,0);
  }
  if (*(int *)(param_1 + 8) == 10) {
    fn_824C83B8(param_1 + 0x40);
    iVar4 = (int)in_r0;
    dVar6 = (double)lbl_8218E1AC;
    piVar1 = *(int **)(param_1 + 0x44);
    for (piVar5 = *(int **)(param_1 + 0x40); piVar5 != piVar1; piVar5 = piVar5 + 2) {
      if (*(int *)(*piVar5 + 0x10) == 0) {
        fn_824C84E8(dVar6,param_1 + 0x40,piVar5);
        fn_824C6280(dVar7,*piVar5);
        dVar6 = (double)lbl_8218E1AC;
      }
      iVar4 = (int)in_r0;
    }
    uVar2 = *(undefined4 *)(param_1 + 0x80);
    *(undefined4 *)(param_1 + 0x80) = 0;
    puVar3 = (undefined4 *)(iVar4 + param_1 + 0x60 & 0xfffffff0);
    uVar8 = *puVar3;
    uVar9 = puVar3[1];
    uVar10 = puVar3[2];
    uVar11 = puVar3[3];
    *(undefined4 *)(param_1 + 0x84) = uVar2;
    puVar3 = (undefined4 *)(param_1 + 0x70U & 0xfffffff0);
    *puVar3 = uVar8;
    puVar3[1] = uVar9;
    puVar3[2] = uVar10;
    puVar3[3] = uVar11;
    puVar3 = (undefined4 *)(iVar4 + param_1 + 0x60 & 0xfffffff0);
    *puVar3 = in_register_000104d0;
    puVar3[1] = in_register_000104d4;
    puVar3[2] = in_register_000104d8;
    puVar3[3] = in_vr77;
  }
  else {
    fn_824C80A0(dVar7,param_1 + 0x40);
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    fn_82507EA8(dVar7);
  }
  if ((*(int *)(param_1 + 0x28) != 0) &&
     ((*(int *)(param_1 + 8) == 9 || (*(int *)(param_1 + 8) == 10)))) {
    iVar4 = fn_824904F0(dVar7);
    if (iVar4 == 0) {
      if (*(int *)(param_1 + 8) == 10) {
        iVar4 = *(int *)(*(int *)(param_1 + 0x28) + 0x48);
        *(undefined4 *)(param_1 + 0xc) = 10;
        if (iVar4 == 0) {
          *(undefined4 *)(param_1 + 8) = 9;
        }
        else {
          *(undefined4 *)(param_1 + 8) = 0xd;
          fn_82355ED8(param_1);
        }
      }
    }
    else {
      if (*(int *)(param_1 + 8) == 9) {
        fn_82350888(param_1,10);
      }
      if (*(int **)(param_1 + 0x18) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0x18) + 0x38))(dVar7);
      }
    }
  }
  return;
}

