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
extern int fn_82F07728();
extern int fn_82F65350();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82005344;
extern unsigned int lbl_8200E1A8;
extern unsigned int lbl_82014C4C;
extern unsigned int lbl_8318892C;
extern unsigned int uStack_1a;


void fn_82E83AC0(int param_1,ulonglong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  undefined2 uStack_1a;
  
  if ((*(int *)(param_1 + 0x7938) == 1) && (*(int *)(param_1 + 0x793c) == 2)) {
    uVar5 = fn_82F65350();
    *(uint *)(param_1 + 0x594) = uVar5 & 1;
  }
  iVar11 = *(int *)(param_1 + 0xaf0);
  if ((iVar11 == 1) && (*(int *)(param_1 + 0x1a64) == 0)) {
    if (*(int *)(param_1 + 0x7898) != 0) {
      param_2 = (ulonglong)*(uint *)(param_1 + 0x78d0);
      *(uint *)(param_1 + 0x2a4) = *(uint *)(param_1 + 0x78d0);
    }
    if (*(int *)(param_1 + 0x78a4) != 0) {
      *(undefined4 *)(param_1 + 0x590) = *(undefined4 *)(param_1 + 0x78dc);
    }
    if (*(int *)(param_1 + 0x78b0) != 0) {
      uVar10 = *(undefined4 *)(param_1 + 0x78e8);
LAB_82e83b94:
      *(undefined4 *)(param_1 + 0x594) = uVar10;
    }
  }
  else if (iVar11 == 2) {
    if (*(int *)(param_1 + 0x789c) != 0) {
      param_2 = (ulonglong)*(uint *)(param_1 + 0x78d4);
      *(uint *)(param_1 + 0x2a4) = *(uint *)(param_1 + 0x78d4);
    }
    if (*(int *)(param_1 + 0x78a8) != 0) {
      *(undefined4 *)(param_1 + 0x590) = *(undefined4 *)(param_1 + 0x78e0);
    }
    if (*(int *)(param_1 + 0x78b4) != 0) {
      uVar10 = *(undefined4 *)(param_1 + 0x78ec);
      goto LAB_82e83b94;
    }
  }
  iVar6 = (int)param_2;
  *(int *)(param_1 + 0x58c) = iVar6;
  if (8 < iVar6) {
    *(undefined4 *)(param_1 + 0x590) = 0;
  }
  if (*(int *)(param_1 + 0x598) == 0) {
    *(uint *)(param_1 + 0x594) = (uint)(param_2 < 9) - (iVar6 >> 0x1f);
  }
  if (*(int *)(param_1 + 0x594) == 0) {
    uVar10 = *(undefined4 *)(param_1 + 0x2014);
  }
  else {
    uVar10 = *(undefined4 *)(param_1 + 0x2018);
  }
  *(undefined4 *)(param_1 + 0x2010) = uVar10;
  if (iVar6 < 9) {
    iVar9 = param_1 + 0x4d74;
    iVar8 = param_1 + 0x4df4;
    iVar7 = param_1 + 0x4c74;
    iVar6 = param_1 + 0x4cf4;
  }
  else {
    iVar9 = param_1 + 0x4d34;
    iVar8 = param_1 + 0x4db4;
    iVar7 = param_1 + 0x4c34;
    iVar6 = param_1 + 0x4cb4;
  }
  *(int *)(param_1 + 0x4e38) = iVar6;
  *(int *)(param_1 + 0x4e2c) = iVar7;
  *(int *)(param_1 + 20000) = iVar8;
  *(int *)(param_1 + 0x4e14) = iVar9;
  if (*(int *)(param_1 + 0x594) == 0) {
    *(int *)(param_1 + 0x6d24) = param_1 + 0x5324;
    if (*(int *)(param_1 + 0x598) == 0) {
      param_2 = (ulonglong)*(uint *)((int)&lbl_8318892C + (int)((param_2 & 0xffffffff) << 2));
    }
  }
  else {
    *(int *)(param_1 + 0x6d24) = param_1 + 0x6024;
  }
  iVar6 = (int)param_2;
  *(int *)(param_1 + 0x588) = iVar6;
  *(undefined4 *)(param_1 + 0x924) = 0;
  if (((8 < iVar6) && (*(int *)(param_1 + 0x1eb8) == 0)) &&
     (*(undefined4 *)(param_1 + 0x924) = *(undefined4 *)(param_1 + 0x920), iVar11 == 2)) {
    *(undefined4 *)(param_1 + 0x924) = 0;
  }
  if (iVar6 < 5) {
    *(undefined4 *)(param_1 + 0x5b0) = 8;
    *(undefined4 *)(param_1 + 0x5ac) = 8;
    if ((*(int *)(param_1 + 0x624) == 0) || (2 < iVar6)) goto LAB_82e83cd0;
    iVar11 = (int)((param_2 & 0xffffffff) << 1);
  }
  else {
    iVar11 = (iVar6 >> 1) + (uint)(iVar6 < 0 && (param_2 & 1) != 0) + 6;
  }
  *(int *)(param_1 + 0x5ac) = iVar11;
  *(int *)(param_1 + 0x5b0) = iVar11;
LAB_82e83cd0:
  *(int *)(param_1 + 0x1ad8) = iVar6;
  *(int *)(param_1 + 0x4b18) = *(int *)(param_1 + 0x58c) * iVar6 * 5 >> 2;
  if (*(int *)(param_1 + 0x628) != 0) {
    *(int *)(param_1 + 0x4b18) = iVar6 * iVar6 * 0x14641 >> 0x10;
    *(int *)(param_1 + 0x1ad8) = iVar6 * 0x121 + 0x80 >> 8;
  }
  fVar4 = lbl_8200E1A8;
  fVar3 = lbl_82002C5C;
  fVar2 = lbl_82002AE0;
  fVar1 = lbl_82002AE0 / (float)(longlong)*(int *)(param_1 + 0x5b0);
  *(float *)(param_1 + 0x4b38) = fVar1;
  fVar2 = fVar2 / (float)(longlong)*(int *)(param_1 + 0x5ac);
  *(float *)(param_1 + 0x4b34) = fVar2;
  *(int *)(param_1 + 0x5c0) = (int)(fVar2 * fVar4);
  *(int *)(param_1 + 0x5c4) = (int)(fVar1 * fVar4);
  fVar1 = lbl_82014C4C;
  if ((*(uint *)(param_1 + 0x924) & 1) == 0) {
    uStack_1a = (undefined2)(int)(fVar2 * lbl_82014C4C + fVar3);
    **(undefined2 **)(param_1 + 0x4480) = uStack_1a;
    uStack_1a = (undefined2)(int)(*(float *)(param_1 + 0x4b38) * fVar1 + fVar3);
    **(undefined2 **)(param_1 + 0x4484) = uStack_1a;
  }
  else {
    **(undefined2 **)(param_1 + 0x4480) = 0;
    **(undefined2 **)(param_1 + 0x4484) = 0;
  }
  *(int *)(param_1 + 0x588) = iVar6;
  iVar11 = (int)((param_2 & 0xffffffff) << 1);
  *(int *)(param_1 + 0x5b8) = iVar6;
  *(int *)(param_1 + 0x5b4) = iVar11;
  fVar1 = lbl_82005344;
  *(float *)(param_1 + 0x4b28) = fVar3 / (float)(longlong)iVar6;
  *(float *)(param_1 + 0x4b24) = (float)(longlong)iVar11;
  *(undefined4 *)(param_1 + 0x4b2c) = *(undefined4 *)(param_1 + 0x4b24);
  *(float *)(param_1 + 0x4b30) = (float)(longlong)iVar11 * fVar1;
  *(int *)(param_1 + 0x5bc) = (int)((fVar3 / (float)(longlong)iVar6) * fVar4);
  fn_82F07728(param_1);
  return;
}

