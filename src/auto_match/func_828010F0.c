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
extern int fn_827F9FA8();
extern int fn_827FEDF8();
extern int fn_82800AF0();
extern int fn_82800AF8();
extern int fn_82800B10();
extern int fn_82809E58();
extern int fn_8280A5D8();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_64;
extern unsigned int uStack_6a;


void fn_828010F0(int *param_1,float *param_2,undefined4 *param_3,int param_4)

{
  bool bVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint *puVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  ushort uStack_6a;
  undefined4 uStack_64;
  
  if (param_4 == 0) {
    uVar4 = fn_827F9FA8();
  }
  else {
    uVar4 = fn_827FEDF8();
  }
  piVar7 = param_1 + 0x29;
  param_3[3] = 0;
  param_3[2] = 0;
  param_3[1] = 0;
  *param_3 = 0;
  dVar14 = (double)*(float *)(*param_1 + 0x58);
  iVar5 = fn_82800B10(piVar7);
  if (iVar5 != 0) {
    iVar5 = fn_82800B10(piVar7);
    dVar11 = (double)fn_8280A5D8((double)(longlong)(iVar5 + 1));
    dVar14 = (double)(float)(dVar11 * dVar14);
  }
  iVar5 = (uVar4 & 0xffff) - 1;
  dVar13 = (double)(longlong)iVar5;
  dVar11 = (double)fn_82809E58((double)(float)(dVar13 * dVar14 + (double)lbl_82002AE0));
  uVar8 = ((longlong)dVar11 & 0xffffU) - 1;
  uVar6 = (uint)uVar8;
  uVar8 = uVar8 & 0xffff;
  if (uVar8 == 0) {
    *param_2 = lbl_821AAD20;
  }
  else {
    dVar11 = (double)fn_8280A5D8(dVar14);
    uStack_6a = (ushort)(longlong)(dVar11 + (double)lbl_82002C5C);
    uVar3 = iVar5 - (iVar5 / (int)(uint)uStack_6a) * (uint)uStack_6a & 0xffff;
    dVar12 = (double)fn_82800AF8(piVar7);
    dVar11 = (double)(float)(dVar12 * dVar13);
    *param_2 = (float)(dVar12 * dVar13);
    dVar12 = (double)(longlong)(int)(((uVar4 & 0xffff) - uVar3) + -1);
    dVar14 = dVar11 * dVar14;
    if (dVar11 <= dVar12) {
      *param_2 = (float)dVar14;
      uStack_64 = ((((U64)(uStack_64)) & (~(((U64)0xFFFF) << 16))) | ((((U64)((ushort)(longlong)dVar14)) & ((U64)0xFFFF)) << 16));
      param_3[1] = (uint)(((U64)(uStack_64) >> 16) & 0xFFFF);
      fVar2 = *param_2 - (float)((longlong)dVar14 & 0xffff);
    }
    else {
      uStack_64 = ((((U64)(uStack_64)) & (~(((U64)0xFFFF) << 16))) | ((((U64)((ushort)(longlong)dVar14)) & ((U64)0xFFFF)) << 16));
      param_3[1] = (uint)(((U64)(uStack_64) >> 16) & 0xFFFF);
      *param_2 = (float)((double)*param_2 - dVar12);
      dVar14 = (double)fn_8280A5D8((double)(longlong)(int)uVar3);
      fVar2 = (float)(dVar14 * (double)*param_2);
    }
    *param_2 = fVar2;
    iVar5 = fn_82800AF0(piVar7);
    if (iVar5 == 0) {
      uVar6 = 1;
    }
    if (param_1[0x2f] == 1) {
      if ((uint)param_3[1] == uVar8) {
        uVar6 = uVar6 & 0xffff;
      }
      else {
        uVar6 = param_3[1] + 1;
      }
      param_3[2] = uVar6;
    }
    iVar5 = fn_82800B10(piVar7);
    if (iVar5 != 0) {
      puVar10 = param_3 + -1;
      lVar9 = 4;
      do {
        uVar4 = puVar10[1];
        iVar5 = fn_82800B10(piVar7);
        puVar10[1] = (iVar5 + 1) * uVar4;
        uVar4 = puVar10[1];
        dVar14 = (double)fn_82809E58((double)(float)((double)*(float *)(*param_1 + 0x58) * dVar13))
        ;
        uStack_64 = (uint)(longlong)dVar14;
        bVar1 = uStack_64 < uVar4;
        uStack_64 = uVar4;
        if (bVar1) {
          dVar14 = (double)fn_82809E58((double)(float)((double)*(float *)(*param_1 + 0x58) * dVar13
                                                       ));
          uStack_64 = (uint)(longlong)dVar14;
        }
        lVar9 = lVar9 + -1;
        puVar10 = puVar10 + 1;
        *puVar10 = uStack_64;
      } while (lVar9 != 0);
    }
  }
  return;
}

