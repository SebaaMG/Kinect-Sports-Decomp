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
extern unsigned int fStack_18;
extern unsigned int fStack_1c;
extern unsigned int fStack_20;
extern unsigned int lbl_82015BD0;
extern unsigned int lbl_82015BD8;
extern float lbl_8207F394;


longlong fn_82A05578(int param_1,ulonglong param_2,ulonglong param_3,int *param_4)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int in_r0;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  iVar7 = (int)param_2;
  puVar1 = (undefined4 *)((int)&fStack_20 + in_r0 & 0xfffffff0);
  *puVar1 = in_register_00010010;
  puVar1[1] = in_register_00010014;
  puVar1[2] = in_register_00010018;
  puVar1[3] = in_vr1;
  fVar5 = lbl_8207F394;
  fVar4 = lbl_82015BD8;
  fVar3 = lbl_82015BD0;
  iVar13 = (iVar7 >> 1) + (uint)(iVar7 < 0 && (param_2 & 1) != 0);
  iVar9 = (int)param_3;
  fVar2 = (fStack_20 / fStack_18) * lbl_8207F394;
  iVar12 = (iVar9 >> 1) + (uint)(iVar9 < 0 && (param_3 & 1) != 0);
  lVar6 = 0;
  *param_4 = 0;
  iVar11 = (int)(fVar2 + fVar3);
  iVar8 = iVar11 - iVar13;
  iVar10 = (int)(fVar4 - (fStack_1c / fStack_18) * fVar5);
  iVar13 = iVar13 + iVar11;
  iVar11 = iVar10 - iVar12;
  iVar12 = iVar12 + iVar10;
  if (param_2 !=
      ((longlong)(iVar7 >> 1) + (ulonglong)(iVar7 < 0 && (param_2 & 1) != 0) & 0x7fffffff) << 1) {
    iVar13 = iVar13 + 1;
  }
  if (param_3 !=
      ((longlong)(iVar9 >> 1) + (ulonglong)(iVar9 < 0 && (param_3 & 1) != 0) & 0x7fffffff) << 1) {
    iVar12 = iVar12 + 1;
  }
  for (; iVar11 < iVar12; iVar11 = iVar11 + 1) {
    if (((-1 < iVar11) && (iVar11 < 0xf0)) && (iVar8 < iVar13)) {
      iVar9 = iVar13 - iVar8;
      iVar7 = iVar8 * 2;
      iVar10 = iVar8;
      do {
        if ((-1 < iVar10) && (iVar10 < 0x140)) {
          if ((*(ushort *)(*(int *)(param_1 + 4) * iVar11 + *(int *)(param_1 + 8) + iVar7) & 7) == 0
             ) {
            lVar6 = lVar6 + 1;
          }
          *param_4 = *param_4 + 1;
        }
        iVar10 = iVar10 + 1;
        iVar7 = iVar7 + 2;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
  }
  return lVar6;
}

