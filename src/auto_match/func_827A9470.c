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
extern int fn_827A8630();
extern unsigned int lbl_821AAD20;


undefined4 * fn_827A9470(undefined4 *param_1,int *param_2,float *param_3)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  float fVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  
  if (param_2[1] != 0) {
    iVar8 = fn_827A8630(param_2,0,param_2[1],param_3 + 1,0xffffffff827a83f8);
    if (iVar8 == param_2[1]) {
      iVar8 = iVar8 + -1;
    }
    iVar11 = iVar8 * 4;
    fVar2 = param_3[1];
    piVar12 = *(int **)(*param_2 + iVar11);
    iVar10 = *piVar12;
    piVar5 = piVar12 + 4;
    iVar4 = *piVar5;
    do {
      if (fVar2 < (float)(longlong)iVar4) break;
      if (iVar10 < 0) {
        uVar9 = (uint)*(ushort *)((int)piVar12 + 0x16);
        iVar10 = (int)*(char *)((int)piVar12 + 0x1d);
      }
      else {
        uVar9 = piVar12[6];
        iVar10 = (int)*(short *)(piVar12 + 10);
      }
      if ((float)(longlong)(int)(iVar10 + uVar9 + iVar4) <= fVar2) break;
      fVar3 = *param_3;
      fVar6 = (float)(longlong)piVar12[3];
      if (fVar6 <= fVar3) {
        if (fVar3 == fVar6) {
          uVar9 = piVar12[5];
        }
        else {
          uVar9 = (uint)*(ushort *)(piVar12 + 5);
        }
        if (fVar3 < (float)(longlong)(int)(uVar9 + piVar12[3])) {
          bVar1 = *(byte *)(param_2 + 0x1d);
          param_1[2] = iVar8;
          *param_1 = param_2;
          param_1[1] = 0;
          *(byte *)(param_1 + 4) = bVar1 >> 2 & 1;
          uVar7 = lbl_821AAD20;
          goto LAB_827a95e8;
        }
      }
      iVar8 = iVar8 + 1;
      iVar11 = iVar11 + 4;
      if (iVar8 == param_2[1]) break;
      piVar12 = *(int **)(iVar11 + *param_2);
      iVar10 = *piVar12;
      iVar4 = piVar12[4];
    } while (iVar4 == *piVar5);
  }
  *param_1 = 0;
  param_1[1] = 0;
  uVar7 = lbl_821AAD20;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
LAB_827a95e8:
  param_1[3] = uVar7;
  return param_1;
}

