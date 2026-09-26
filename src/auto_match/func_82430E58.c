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
extern unsigned int *auStack_40;
extern unsigned int fStack_38;
extern int fn_82337C80();
extern int fn_82359558();
extern int fn_8255AE78();
extern unsigned int lbl_821CC160;


int fn_82430E58(double param_1,int param_2,int param_3)

{
  int iVar1;
  float *pfVar2;
  undefined4 *puVar3;
  int in_r0;
  int iVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_40 [8];
  float fStack_38;
  
  iVar4 = fn_82359558(*(undefined4 *)(param_3 + 0x240),*(undefined4 *)(param_3 + 0x10));
  pfVar2 = (float *)(iVar4 + 0x80U & 0xfffffff0);
  fVar10 = *pfVar2;
  fVar11 = pfVar2[1];
  fVar12 = pfVar2[2];
  fVar13 = pfVar2[3];
  fn_82337C80();
  iVar4 = *(int *)(param_3 + 0x244);
  iVar1 = *(int *)(iVar4 + 8);
  puVar3 = (undefined4 *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
  *puVar3 = in_register_000104d0;
  puVar3[1] = in_register_000104d4;
  puVar3[2] = in_register_000104d8;
  puVar3[3] = in_vr77;
  dVar5 = (double)lbl_821CC160;
  if (0 < iVar1) {
    if (iVar1 < 3) {
      iVar1 = *(int *)(iVar4 + 0xc);
      if ((iVar1 < 8) || ((10 < iVar1 && ((iVar1 < 0xc || ((0xe < iVar1 && (iVar1 != 0x12))))))))
      goto LAB_82430f2c;
    }
    else if (((iVar1 != 3) && (iVar1 != 5)) ||
            ((iVar1 = *(int *)(iVar4 + 0xc), iVar1 < 8 ||
             ((10 < iVar1 && ((iVar1 < 0xc || (0xe < iVar1)))))))) goto LAB_82430f2c;
    dVar5 = (double)*(float *)(iVar4 + 0x30);
  }
LAB_82430f2c:
  fStack_38 = (float)(dVar5 * param_1);
  pfVar2 = (float *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
  fVar6 = *pfVar2;
  fVar7 = pfVar2[1];
  fVar8 = pfVar2[2];
  fVar9 = pfVar2[3];
  fn_8255AE78();
  pfVar2 = (float *)(in_r0 + param_2 & 0xfffffff0);
  *pfVar2 = fVar10 + fVar6;
  pfVar2[1] = fVar11 + fVar7;
  pfVar2[2] = fVar12 + fVar8;
  pfVar2[3] = fVar13 + fVar9;
  return param_2;
}

