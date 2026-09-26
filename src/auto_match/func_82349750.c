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
extern int fn_8242E688();
extern int fn_8255E0B0();
extern unsigned int lbl_821954C8;
extern unsigned int lbl_821CC160;


void fn_82349750(double param_1,int param_2)

{
  float fVar1;
  float fVar2;
  undefined4 *puVar3;
  int in_r0;
  int iVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auStack_40 [64];
  
  iVar5 = **(int **)(param_2 + 0xc);
  iVar6 = *(int *)(*(int *)(iVar5 + 0x1a0) + 0x180);
  if ((iVar6 != 0) &&
     (*(int *)(*(int *)(param_2 + 0x10) + 0xd4) = iVar6,
     *(float *)(*(int *)(param_2 + 0x10) + 0xcc) < *(float *)(*(int *)(param_2 + 0x10) + 200))) {
    *(undefined4 *)(*(int *)(param_2 + 0x10) + 200) = lbl_821CC160;
  }
  iVar6 = *(int *)(param_2 + 0x10);
  if (*(int *)(iVar6 + 0xd4) != 0) {
    if (*(float *)(iVar6 + 200) < *(float *)(iVar6 + 0xcc)) {
      fn_8255E0B0(*(undefined4 *)(*(int *)(iVar6 + 0xd4) + 0x14),4,auStack_40);
      iVar6 = *(int *)(iVar5 + 0x118);
      puVar3 = (undefined4 *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
      uVar8 = *puVar3;
      uVar9 = puVar3[1];
      uVar10 = puVar3[2];
      uVar11 = puVar3[3];
      *(undefined4 *)(iVar6 + 0xb0) = 1;
      puVar3 = (undefined4 *)(iVar6 + 0xa0U & 0xfffffff0);
      *puVar3 = uVar8;
      puVar3[1] = uVar9;
      puVar3[2] = uVar10;
      puVar3[3] = uVar11;
      iVar6 = *(int *)(param_2 + 0x10);
      *(float *)(iVar6 + 200) = (float)((double)*(float *)(iVar6 + 200) + param_1);
    }
  }
  iVar4 = *(int *)((int)(*(float **)(iVar5 + 0x1a0))[3] + 0x174);
  if (*(int *)(*(int *)(iVar4 + 0x5c) + 0x1d4) == -1) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(iVar4 + 0x5c);
    iVar4 = *(int *)(*(int *)(iVar4 + 0x1d4) * 4 + *(int *)(iVar4 + 0x1c4));
  }
  if (*(int *)(iVar6 + 0xd4) == 0) {
    dVar7 = (double)**(float **)(iVar5 + 0x1a0);
    if ((double)(**(float **)(iVar4 + 0x44) - *(float *)(iVar6 + 0xd0)) < dVar7) {
      iVar4 = fn_8242E688(*(undefined4 *)(*(int *)(iVar5 + 0x1a0) + 0xc),
                                (ulonglong)*(byte *)(*(int *)(iVar5 + 0x1a0) + 0x44) - 1);
      iVar5 = fn_8242E688(*(undefined4 *)(*(int *)(iVar5 + 0x1a0) + 0xc),
                                (ulonglong)*(byte *)(*(int *)(iVar5 + 0x1a0) + 0x44) + 1);
      fVar1 = lbl_821954C8;
      if (iVar4 != 0) {
        fVar1 = (float)(dVar7 - (double)**(float **)(iVar4 + 0x1a0));
      }
      fVar2 = lbl_821954C8;
      if (iVar5 != 0) {
        fVar2 = (float)(dVar7 - (double)**(float **)(iVar5 + 0x1a0));
      }
      if (ABS(fVar2) <= ABS(fVar1)) {
        iVar4 = iVar5;
      }
      if (iVar4 != 0) {
        fVar1 = (float)(dVar7 - (double)**(float **)(iVar4 + 0x1a0));
        if ((-*(float *)(*(int *)(param_2 + 0x10) + 0xd8) <= fVar1) &&
           (fVar1 < *(float *)(*(int *)(param_2 + 0x10) + 0xdc))) {
          *(int *)(iVar6 + 0xd4) = iVar4;
        }
      }
    }
  }
  return;
}

