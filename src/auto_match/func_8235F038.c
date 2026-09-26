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
extern int fn_8235F3E8();
extern int fn_82547C80();
extern unsigned int lbl_8218E8FC;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


void fn_8235F038(double param_1,int param_2)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar11;
  ulonglong uVar9;
  longlong lVar10;
  int iVar12;
  double dVar13;
  
  fVar1 = (float)(param_1 + (double)*(float *)(param_2 + 0x2be4));
  *(float *)(param_2 + 0x2be4) = fVar1;
  iVar12 = *(int *)(param_2 + 0x2b2c) * 0x68 + param_2;
  fVar2 = *(float *)(iVar12 + 0x1604);
  if (fVar2 < fVar1) {
    *(float *)(param_2 + 0x2be4) = fVar1 - fVar2;
    uVar3 = *(uint *)(iVar12 + 0x1600);
    if (uVar3 == 0) {
      uVar9 = (ulonglong)*(uint *)(param_2 + 0x2be8) + 1;
      uVar8 = (ulonglong)*(uint *)(param_2 + 0x644) - (ulonglong)*(uint *)(param_2 + 0x640);
      lVar10 = uVar9 - (longlong)(int)((uVar9 & 0xffffffff) / (uVar8 & 0xffffffff)) *
                       (longlong)(int)uVar8;
      *(int *)(param_2 + 0x2be8) = (int)lVar10;
      uVar8 = lVar10 + (ulonglong)*(uint *)(param_2 + 0x640);
    }
    else {
      if (uVar3 != 1) {
        if (2 < uVar3) {
          return;
        }
        lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
        dVar13 = (double)lbl_821CA460;
        for (uVar8 = (ulonglong)
                     (uint)(int)((double)(float)((double)(float)(lbl_83265A28 & 0x7fffff |
                                                                0x3f800000) - dVar13) *
                                 (double)lbl_8218E8FC + dVar13); uVar8 != 0; uVar8 = uVar8 - 1) {
          lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
          uVar4 = *(uint *)(param_2 + 0x648);
          uVar3 = (uint)((float)(longlong)(*(int *)(param_2 + 0x644) - *(int *)(param_2 + 0x640)) *
                         (float)((double)(float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - dVar13) +
                        (float)(longlong)*(int *)(param_2 + 0x640));
          uVar11 = uVar3 - (uVar3 / uVar4) * uVar4;
          iVar7 = (uVar11 & 0xff) * 4;
          iVar5 = iVar7 >> 3;
          iVar12 = **(int **)((uVar3 / uVar4 + 0xafb) * 4 + param_2);
          fn_82547C80(iVar12 + 0xd0,uVar11 & 0xff,
                       (*(byte *)(iVar5 + iVar12 + 0xd4) >> (iVar7 + iVar5 * -8 & 0x3fU) & 0xf) == 0
                      );
        }
        return;
      }
      bVar6 = *(int *)(param_2 + 0x2be8) == 0;
      *(uint *)(param_2 + 0x2be8) = (uint)bVar6;
      if (bVar6) {
        uVar8 = (ulonglong)*(uint *)(param_2 + 0x644);
      }
      else {
        uVar8 = (ulonglong)*(uint *)(param_2 + 0x640);
      }
    }
    fn_8235F3E8(param_2,uVar8);
  }
  return;
}

