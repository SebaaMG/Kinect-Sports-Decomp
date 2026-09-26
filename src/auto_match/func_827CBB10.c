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
extern int fn_827CB680();
extern int fn_827CB708();


ulonglong fn_827CBB10(undefined8 param_1,longlong param_2,ulonglong param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  byte bVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if ((int)param_3 < param_4) {
    lVar8 = (param_3 & 0x7fffffff) << 1;
    lVar10 = (param_3 & 0x7ffffff) * 0x20 + param_2 + 0xc;
    do {
      if (param_4 < (int)lVar8) {
        iVar4 = 0;
        uVar3 = 0;
        if (0 < (int)param_3) {
          lVar5 = param_2 + 0x18;
          uVar11 = param_3;
          do {
            if (iVar4 < *(int *)lVar5) {
              uVar3 = lVar5 - 0x18;
              iVar4 = *(int *)lVar5;
            }
            lVar5 = lVar5 + 0x20;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
      }
      else {
        uVar3 = fn_827CB680(param_2,param_3);
      }
      if ((uVar3 & 0xffffffff) == 0) {
        return param_3;
      }
      piVar1 = (int *)uVar3;
      piVar2 = (int *)lVar10;
      piVar2[-2] = piVar1[1];
      *piVar2 = piVar1[3];
      piVar2[2] = piVar1[5];
      piVar2[-3] = *piVar1;
      piVar2[-1] = piVar1[2];
      piVar2[1] = piVar1[4];
      iVar4 = (piVar1[1] - *piVar1) * 0x10;
      iVar6 = (piVar1[3] - piVar1[2]) * 0xc;
      bVar9 = iVar4 <= iVar6;
      if (!(bool)bVar9) {
        iVar6 = iVar4;
      }
      if (iVar6 < (piVar1[5] - piVar1[4]) * 8) {
        bVar9 = 2;
      }
      if (bVar9 == 0) {
        uVar7 = *piVar1 + piVar1[1];
        iVar4 = ((int)uVar7 >> 1) + (uint)((int)uVar7 < 0 && (uVar7 & 1) != 0);
        piVar1[1] = iVar4;
        *(int *)(lVar10 + -0xc) = iVar4 + 1;
      }
      else if (bVar9 == 1) {
        uVar7 = piVar1[2] + piVar1[3];
        iVar4 = ((int)uVar7 >> 1) + (uint)((int)uVar7 < 0 && (uVar7 & 1) != 0);
        piVar1[3] = iVar4;
        piVar2[-1] = iVar4 + 1;
      }
      else if (bVar9 < 3) {
        uVar7 = piVar1[4] + piVar1[5];
        iVar4 = ((int)uVar7 >> 1) + (uint)((int)uVar7 < 0 && (uVar7 & 1) != 0);
        piVar1[5] = iVar4;
        piVar2[1] = iVar4 + 1;
      }
      fn_827CB708(param_1);
      fn_827CB708(param_1,lVar10 + -0xc);
      param_3 = param_3 + 1;
      lVar8 = lVar8 + 2;
      lVar10 = lVar10 + 0x20;
    } while ((int)param_3 < param_4);
  }
  return param_3;
}

