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


void fn_82AAB1D8(longlong param_1,longlong param_2,longlong param_3,int *param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  int *piStack_60;
  
  iVar3 = (int)param_2;
  iVar10 = 0x40 - param_5;
  uVar8 = iVar3 * (int)param_3;
  if (0 < (int)param_3) {
    do {
      iVar9 = 0;
      if (0 < (int)param_1) {
        piVar6 = param_4;
        do {
          piStack_60 = piVar6;
          if (1 < iVar3) {
            lVar4 = param_2 + -1;
            piVar6 = piStack_60;
            do {
              piVar7 = piVar6 + 1;
              iVar5 = *piVar6;
              piVar6 = piVar6 + 1;
              *piVar6 = *piVar7 * iVar10 + iVar5 * param_5 + 0x20 >> 6;
              lVar4 = lVar4 + -1;
            } while (lVar4 != 0);
          }
          if (-1 < iVar3 + -2) {
            iVar5 = iVar3 + -1;
            piVar6 = piStack_60 + iVar3 + -1;
            do {
              piVar7 = piVar6 + -1;
              iVar1 = *piVar6;
              piVar6 = piVar6 + -1;
              *piVar6 = *piVar7 * iVar10 + iVar1 * param_5 + 0x20 >> 6;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
          }
          if ((iVar9 != 0) && (0 < iVar3)) {
            piVar7 = piStack_60 + -1;
            piVar6 = piStack_60 + (-1 - (uVar8 & 0x3fffffff));
            lVar4 = param_2;
            do {
              piVar6 = piVar6 + 1;
              piVar2 = piVar7 + 1;
              piVar7 = piVar7 + 1;
              *piVar7 = *piVar2 * iVar10 + *piVar6 * param_5 + 0x20 >> 6;
              lVar4 = lVar4 + -1;
            } while (lVar4 != 0);
          }
          iVar9 = iVar9 + 1;
          piVar6 = piStack_60 + uVar8;
        } while (iVar9 < (int)param_1);
      }
      if ((int)(param_1 + -2) < 1) {
        lVar4 = 1 - (param_1 + -2);
        do {
          if (0 < iVar3) {
            piVar7 = piStack_60 + -1;
            piVar6 = piStack_60 + (uVar8 - 1);
            lVar11 = param_2;
            do {
              piVar6 = piVar6 + 1;
              piVar2 = piVar7 + 1;
              piVar7 = piVar7 + 1;
              *piVar7 = *piVar2 * iVar10 + *piVar6 * param_5 + 0x20 >> 6;
              lVar11 = lVar11 + -1;
            } while (lVar11 != 0);
          }
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
      param_3 = param_3 + -1;
      param_4 = param_4 + iVar3;
    } while (param_3 != 0);
  }
  return;
}

