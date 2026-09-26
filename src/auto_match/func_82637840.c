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
extern int fn_82639DB0();
extern int fn_82F6A540();
extern int fn_82F6A58C();
extern unsigned int lbl_8218E8E8;


void fn_82637840(undefined8 param_1,double param_2,double param_3,double param_4,double param_5,
                  double param_6)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  double dVar9;
  double extraout_f1;
  double dVar10;
  double dVar11;
  double dVar12;
  
  iVar3 = fn_82F6A540();
  iVar4 = *(int *)(iVar3 + 0x3148);
  iVar6 = iVar4;
  if ((iVar4 != 0) || (iVar6 = *(int *)(iVar3 + 0x3158), iVar6 != 0)) {
    if ((*(byte *)(iVar3 + 0x2abc) & 0x10) == 0) {
      if (((((*(byte *)(iVar3 + 0x2abc) & 0x20) == 0) ||
           ((*(int *)(iVar3 + 0x3268) != iVar4 && (iVar4 != 0)))) ||
          ((*(int *)(iVar3 + 0x326c) != *(int *)(iVar3 + 0x314c) && (*(int *)(iVar3 + 0x314c) != 0))
          )) || ((((*(int *)(iVar3 + 0x3270) != *(int *)(iVar3 + 0x3150) &&
                   (*(int *)(iVar3 + 0x3150) != 0)) ||
                  ((*(int *)(iVar3 + 0x3274) != *(int *)(iVar3 + 0x3154) &&
                   (*(int *)(iVar3 + 0x3154) != 0)))) ||
                 ((*(int *)(iVar3 + 0x3278) != *(int *)(iVar3 + 0x3158) &&
                  (*(int *)(iVar3 + 0x3158) != 0)))))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      uVar7 = (ulonglong)*(uint *)(iVar3 + 0x342c);
      iVar4 = *(int *)(iVar3 + 0x3430);
    }
    else {
      uVar7 = (ulonglong)(*(uint *)(iVar6 + 0x24) >> 0x12) + 1;
      iVar4 = (*(uint *)(iVar6 + 0x24) >> 3 & 0x7fff) + 1;
    }
    uVar5 = (ulonglong)(uint)(int)param_3 + (ulonglong)(uint)(int)extraout_f1;
    if ((int)uVar5 < (int)uVar7) {
      uVar7 = uVar5;
    }
    iVar6 = (int)param_4 + (int)param_2;
    if (iVar4 <= iVar6) {
      iVar6 = iVar4;
    }
    lVar8 = uVar7 - (uint)(int)extraout_f1;
    iVar6 = iVar6 - (int)param_2;
    if ((lVar8 < 0) || (iVar6 < 0)) {
      lVar8 = 0;
      iVar6 = 0;
    }
    *(float *)(iVar3 + 0x3218) = (float)extraout_f1;
    *(float *)(iVar3 + 0x321c) = (float)param_2;
    dVar11 = (double)(longlong)iVar6;
    *(float *)(iVar3 + 0x3228) = (float)param_5;
    *(float *)(iVar3 + 0x322c) = (float)param_6;
    *(float *)(iVar3 + 0x3224) = (float)(longlong)iVar6;
    *(undefined4 *)(iVar3 + 0x3230) = 0;
    dVar10 = (double)(longlong)(int)lVar8;
    *(float *)(iVar3 + 0x3220) = (float)(longlong)(int)lVar8;
    dVar12 = extraout_f1;
    fn_82639DB0(iVar3,iVar3 + 0x3234);
    *(float *)(iVar3 + 0x2918) = (float)(param_6 - param_5);
    *(float *)(iVar3 + 0x291c) = (float)param_5;
    dVar9 = (double)lbl_8218E8E8;
    fVar1 = (float)(dVar10 * dVar9);
    *(float *)(iVar3 + 0x2908) = fVar1;
    dVar9 = (double)(float)(dVar11 * dVar9);
    *(float *)(iVar3 + 0x290c) = (float)((double)fVar1 + dVar12);
    *(float *)(iVar3 + 0x2910) = (float)-dVar9;
    *(float *)(iVar3 + 0x2914) = (float)(dVar9 + param_2);
    uVar7 = *(ulonglong *)(iVar3 + 0x10);
    *(ulonglong *)(iVar3 + 0x10) = uVar7 | 0x4000000;
    *(ulonglong *)(iVar3 + 0x10) = uVar7 | 0x6000000;
    *(ulonglong *)(iVar3 + 0x10) = uVar7 | 0x7000000;
    *(ulonglong *)(iVar3 + 0x10) = uVar7 | 0x7800000;
    *(ulonglong *)(iVar3 + 0x10) = uVar7 | 0x7c00000;
    *(ulonglong *)(iVar3 + 0x10) = uVar7 | 0x7e00000;
  }
  fn_82F6A58C();
  return;
}

