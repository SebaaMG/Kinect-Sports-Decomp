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
extern unsigned int lbl_82002C5C;


void fn_8275E678(int param_1,float *param_2,char param_3)

{
  float fVar1;
  float fVar2;
  short sVar3;
  short sVar4;
  short *psVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  if (*(uint *)(param_1 + 4) < *(uint *)(param_1 + 8)) {
    psVar5 = *(short **)(param_1 + 0x1c);
    bVar9 = false;
    if (psVar5 == (short *)0x0) {
      if (*(int *)(param_1 + 0x18) == 0) {
        uVar6 = **(undefined4 **)(param_1 + 0x20);
        *(undefined4 **)(param_1 + 0x20) = *(undefined4 **)(param_1 + 0x20) + 1;
        *(undefined4 *)(param_1 + 0x18) = 1;
        *(undefined4 *)(param_1 + 0x14) = uVar6;
      }
      if ((*(uint *)(param_1 + 0x14) & *(uint *)(param_1 + 0x18)) == 0) {
        piVar7 = *(int **)(param_1 + 0x20);
        iVar10 = *piVar7;
        *(int **)(param_1 + 0x20) = piVar7 + 1;
        iVar13 = piVar7[1];
        *(int **)(param_1 + 0x20) = piVar7 + 2;
        iVar12 = iVar10;
        iVar11 = iVar13;
      }
      else {
        piVar7 = *(int **)(param_1 + 0x20);
        bVar9 = true;
        iVar10 = *piVar7;
        *(int **)(param_1 + 0x20) = piVar7 + 1;
        iVar13 = piVar7[1];
        *(int **)(param_1 + 0x20) = piVar7 + 2;
        iVar12 = piVar7[2];
        *(int **)(param_1 + 0x20) = piVar7 + 3;
        iVar11 = piVar7[3];
        *(int **)(param_1 + 0x20) = piVar7 + 4;
      }
    }
    else {
      if (0x8000 < *(uint *)(param_1 + 0x18)) {
        sVar3 = *psVar5;
        *(undefined4 *)(param_1 + 0x18) = 1;
        *(short **)(param_1 + 0x1c) = psVar5 + 1;
        *(int *)(param_1 + 0x14) = (int)sVar3;
      }
      if ((*(uint *)(param_1 + 0x14) & *(uint *)(param_1 + 0x18)) == 0) {
        psVar5 = *(short **)(param_1 + 0x1c);
        iVar10 = (int)*psVar5;
        *(short **)(param_1 + 0x1c) = psVar5 + 1;
        iVar13 = (int)psVar5[1];
        *(short **)(param_1 + 0x1c) = psVar5 + 2;
        iVar12 = iVar10;
        iVar11 = iVar13;
      }
      else {
        psVar5 = *(short **)(param_1 + 0x1c);
        bVar9 = true;
        iVar10 = (int)*psVar5;
        *(short **)(param_1 + 0x1c) = psVar5 + 1;
        iVar13 = (int)psVar5[1];
        *(short **)(param_1 + 0x1c) = psVar5 + 2;
        sVar3 = psVar5[2];
        *(short **)(param_1 + 0x1c) = psVar5 + 3;
        sVar4 = psVar5[3];
        *(short **)(param_1 + 0x1c) = psVar5 + 4;
        iVar12 = (int)sVar3;
        iVar11 = (int)sVar4;
      }
    }
    if (bVar9) {
      *param_2 = (float)(longlong)(*(int *)(param_1 + 0xc) + iVar10) * *(float *)(param_1 + 0x24);
      param_2[1] = (float)(longlong)(*(int *)(param_1 + 0x10) + iVar13) * *(float *)(param_1 + 0x24)
      ;
      param_2[2] = (float)(longlong)(*(int *)(param_1 + 0xc) + iVar12 + iVar10) *
                   *(float *)(param_1 + 0x24);
      fVar1 = *(float *)(param_1 + 0x24);
      iVar8 = *(int *)(param_1 + 0x10);
      *(undefined1 *)(param_2 + 4) = 1;
      param_2[3] = (float)(longlong)(iVar8 + iVar11 + iVar13) * fVar1;
      iVar10 = *(int *)(param_1 + 0xc) + iVar12 + iVar10;
      iVar13 = *(int *)(param_1 + 0x10) + iVar11 + iVar13;
    }
    else {
      param_2[2] = (float)(longlong)(*(int *)(param_1 + 0xc) + iVar12) * *(float *)(param_1 + 0x24);
      param_2[3] = (float)(longlong)(*(int *)(param_1 + 0x10) + iVar11) * *(float *)(param_1 + 0x24)
      ;
      fVar1 = lbl_82002C5C;
      if (param_3 == '\0') {
        *(undefined1 *)(param_2 + 4) = 0;
      }
      else {
        *param_2 = ((float)(longlong)iVar12 * lbl_82002C5C +
                   (float)(longlong)*(int *)(param_1 + 0xc)) * *(float *)(param_1 + 0x24);
        iVar10 = *(int *)(param_1 + 0x10);
        fVar2 = *(float *)(param_1 + 0x24);
        *(undefined1 *)(param_2 + 4) = 1;
        param_2[1] = ((float)(longlong)iVar11 * fVar1 + (float)(longlong)iVar10) * fVar2;
      }
      iVar10 = *(int *)(param_1 + 0xc) + iVar12;
      iVar13 = *(int *)(param_1 + 0x10) + iVar11;
    }
    *(int *)(param_1 + 0x10) = iVar13;
    *(int *)(param_1 + 0xc) = iVar10;
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) << 1;
  }
  return;
}

