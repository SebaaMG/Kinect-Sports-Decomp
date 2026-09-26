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
extern int fn_82CE4040();
extern int fn_82CE4118();
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82D8E9D0();
extern int fn_82D8FC48();
extern int fn_82DAE550();
extern int fn_82DB0380();
extern int fn_83080B30();
extern unsigned int lbl_821AAD20;


void fn_82D903E0(int param_1,int param_2,char param_3)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  int iVar5;
  ulonglong uVar4;
  ushort uVar6;
  ushort uVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  int iVar11;
  double dVar12;
  
  piVar10 = (int *)(param_1 + 0x28);
  *(undefined4 *)((uint)*(ushort *)(param_2 + 0x20) * 4 + *(int *)(param_1 + 0x34)) =
       *(undefined4 *)(*(int *)(param_1 + 0x38) * 4 + *(int *)(param_1 + 0x34) + -4);
  *(ushort *)(*(int *)((uint)*(ushort *)(param_2 + 0x20) * 4 + *(int *)(param_1 + 0x34)) + 0x20) =
       *(ushort *)(param_2 + 0x20);
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
  iVar5 = fn_82CE5410();
  fVar3 = lbl_821AAD20;
  if (*(uint *)(param_1 + 0x2c) == (*(uint *)(param_1 + 0x30) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
    fn_82CE63B0(*(undefined4 *)(iVar5 + 0x10),piVar10,4);
  }
  dVar12 = (double)lbl_821AAD20;
  iVar5 = 0;
  *(int *)(*(int *)(param_1 + 0x2c) * 4 + *piVar10) = param_2;
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  uVar1 = *(undefined4 *)(param_1 + 0x2c);
  *(float *)(param_2 + 0x30) = fVar3;
  *(float *)(param_2 + 0x34) = fVar3;
  *(short *)(param_2 + 0x20) = (short)uVar1 + -1;
  *(byte *)(param_2 + 0x26) = *(byte *)(param_2 + 0x26) & 0x3f | 0x40;
  if (0 < *(int *)(param_2 + 0x4c)) {
    iVar11 = 0;
    do {
      iVar2 = *(int *)(iVar11 + *(int *)(param_2 + 0x48));
      fn_83080B30(dVar12,dVar12);
      *(undefined2 *)(iVar2 + 0xea) = 0;
      *(undefined2 *)(iVar2 + 0xec) = 0;
      uVar6 = (ushort)*(byte *)(param_1 + 0x306);
      uVar7 = (ushort)*(byte *)(param_1 + 0x305);
      if ((*(byte *)(param_1 + 0x307) & 3) < (*(byte *)(iVar2 + 0xe9) & 3)) {
        uVar7 = ~uVar7;
      }
      if (*(byte *)(param_1 + 0x307) < *(byte *)(iVar2 + 0xe9)) {
        uVar6 = ~uVar6;
      }
      iVar5 = iVar5 + 1;
      *(ushort *)(iVar2 + 0xea) = uVar7 << 0xe;
      *(ushort *)(iVar2 + 0xec) = uVar6 << 0xe;
      iVar11 = iVar11 + 4;
    } while (iVar5 < *(int *)(param_2 + 0x4c));
  }
  fn_82DB0380((double)*(float *)(param_2 + 0x44),(double)*(float *)(param_1 + 0x1d0),param_2);
  iVar5 = **(int **)(param_2 + 0x48);
  fn_82CE4040(iVar5);
  fn_82DAE550(param_1,param_2);
  if (*(int *)(iVar5 + 0xcc) == param_2) {
    fn_82CE4118(iVar5);
    if (param_3 != '\0') {
      lVar9 = (ulonglong)*(uint *)(param_2 + 0x1c) + 3;
      lVar8 = (ulonglong)*(uint *)(param_2 + 0x4c) + 1;
      if ((int)lVar9 < (int)lVar8) {
        lVar9 = lVar8;
      }
      uVar4 = fn_82D8E9D0(param_1,piVar10,lVar9,param_2);
      if ((uVar4 & 0xffffffff) != 0) {
        fn_82D8FC48(param_1,uVar4,param_2);
        return;
      }
    }
    uVar6 = *(ushort *)(param_2 + 0x20);
    if ((uVar6 != 0) &&
       (iVar5 = *(int *)*piVar10, *(int *)(iVar5 + 0x4c) < *(int *)(param_2 + 0x4c))) {
      *(undefined2 *)(param_2 + 0x20) = 0;
      *(ushort *)(iVar5 + 0x20) = uVar6;
      *(int *)*piVar10 = param_2;
      *(int *)((uint)uVar6 * 4 + *piVar10) = iVar5;
    }
  }
  else {
    fn_82CE4118(iVar5);
  }
  return;
}

