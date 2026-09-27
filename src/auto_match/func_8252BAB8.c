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
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_82523340();
extern int fn_82523548();
extern int fn_8252C088();
extern int fn_8252CAF8();
extern int fn_82549960();
extern int fn_8265C9E0();
extern float lbl_8218E8FC;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


bool fn_8252BAB8(int param_1,uint *param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar4;
  ulonglong uVar2;
  undefined4 uVar5;
  longlong lVar3;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  
  iVar9 = param_1 + 0x8bc;
  if (*(int **)(param_1 + 0x8c0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x8c0) + 8))();
    puVar1 = *(undefined4 **)(param_1 + 0x8c0);
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    *(undefined4 *)(param_1 + 0x8c0) = 0;
  }
  if ((param_2 == (uint *)0x0) || (*param_2 == 0)) {
    return true;
  }
  if (*param_2 >> 0x18 != 0x6f) {
    fn_8252C088(iVar9,param_4 + 200,param_4 + 0xcc);
    uVar2 = fn_8265C9E0(0x200);
    if ((uVar2 & 0xffffffff) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = fn_82549960(uVar2,param_2,0,0,param_3,param_1 + 0x8cc);
    }
    *(undefined4 *)(param_1 + 0x8c0) = uVar5;
    goto LAB_8252bd24;
  }
  iVar4 = fn_8251F720(param_2,0);
  if (*(int *)(iVar4 + 8) == 0) {
    if ((*(int *)(iVar4 + 4) == 0) || (lVar3 = fn_8251F720(iVar4 + 4,0), lVar3 == 0)) {
      fn_8252C088(iVar9,iVar4 + 0xc,iVar4 + 0x10);
      uVar2 = fn_8265C9E0(0x200);
      if ((uVar2 & 0xffffffff) == 0) goto LAB_8252bcb0;
      uVar5 = fn_82549960(uVar2,iVar4,0,0,param_3,param_1 + 0x8cc);
      goto LAB_8252bcb4;
    }
    iVar6 = param_4 + 200;
    if ((*(int *)(param_4 + 200) == 0) || (iVar7 = param_4 + 0xcc, *(int *)(param_4 + 0xcc) == 0)) {
      iVar7 = iVar4 + 0x10;
      iVar6 = iVar4 + 0xc;
    }
    fn_8252C088(iVar9,iVar6,iVar7);
    uVar5 = *(undefined4 *)(*(int *)(param_3 + 0xb8) + 0x80);
    uVar2 = fn_8265C9E0(0x319c0);
    if ((uVar2 & 0xffffffff) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = fn_82523340(uVar2,lVar3,param_1 + 0x8cc,param_1 + 0x8f0,uVar5,
                                *(undefined4 *)(param_4 + 0x4d8),0,*(undefined4 *)(param_4 + 0x4dc))
      ;
    }
    *(undefined4 *)(param_1 + 0x8c0) = uVar5;
    fn_8251FA58(lVar3);
  }
  else {
    iVar6 = param_4 + 200;
    if ((*(int *)(param_4 + 200) == 0) || (iVar7 = param_4 + 0xcc, *(int *)(param_4 + 0xcc) == 0)) {
      iVar7 = iVar4 + 0x10;
      iVar6 = iVar4 + 0xc;
    }
    fn_8252C088(iVar9,iVar6,iVar7);
    uVar5 = *(undefined4 *)(*(int *)(param_3 + 0xb8) + 0x80);
    uVar2 = fn_8265C9E0(0x319c0);
    if ((uVar2 & 0xffffffff) == 0) {
LAB_8252bcb0:
      uVar5 = 0;
    }
    else {
      uVar5 = fn_82523548(uVar2,1,0,1,param_1 + 0x8cc,param_1 + 0x8f0,uVar5,
                                *(undefined4 *)(param_4 + 0x4d8));
    }
LAB_8252bcb4:
    *(undefined4 *)(param_1 + 0x8c0) = uVar5;
  }
  (**(code **)(**(int **)(param_1 + 0x8c0) + 0x98))
            (*(int **)(param_1 + 0x8c0),iVar4 + 0x14,iVar4 + 0x18);
  fn_8251FA58(iVar4);
LAB_8252bd24:
  uVar8 = *(uint *)(param_1 + 0x91c);
  if (uVar8 == 4) {
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    uVar8 = (uint)(((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) * lbl_8218E8FC);
  }
  fn_8252CAF8(param_1,0xf,uVar8 & 0xff);
  return *(int *)(param_1 + 0x8c0) != 0;
}

