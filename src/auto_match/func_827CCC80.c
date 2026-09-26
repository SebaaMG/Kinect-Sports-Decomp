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
extern int fn_827CCAE0();


void fn_827CCC80(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  int *piVar15;
  int iVar16;
  ulonglong uVar17;
  uint *puVar18;
  ulonglong uVar19;
  
  iVar2 = param_1[0x6a];
  puVar18 = (uint *)(iVar2 + 0x20);
  uVar4 = fn_827CCAE0(param_1,puVar18);
  iVar14 = *param_1;
  iVar16 = (int)uVar4;
  if (param_1[0x19] == 3) {
    *(int *)(iVar14 + 0x18) = iVar16;
    *(uint *)(iVar14 + 0x1c) = *puVar18;
    *(undefined4 *)(iVar14 + 0x20) = *(undefined4 *)(iVar2 + 0x24);
    *(undefined4 *)(iVar14 + 0x24) = *(undefined4 *)(iVar2 + 0x28);
    *(undefined4 *)(*param_1 + 0x14) = 0x5e;
  }
  else {
    *(undefined4 *)(iVar14 + 0x14) = 0x5f;
    *(int *)(*param_1 + 0x18) = iVar16;
  }
  (**(code **)(*param_1 + 4))(param_1,1);
  piVar5 = (int *)(**(code **)(param_1[1] + 8))(param_1,1,uVar4,param_1[0x19]);
  iVar14 = 0;
  piVar15 = piVar5;
  if (0 < param_1[0x19]) {
    do {
      uVar7 = *puVar18;
      uVar13 = (ulonglong)uVar7;
      iVar1 = (int)uVar4 / (int)uVar7;
      uVar17 = (ulonglong)iVar1;
      trapWord(6,uVar13,0);
      trapWord(5,uVar13 & ~(((uVar4 & 0x7fffffff) << 1 | (uVar4 & 0xffffffff) >> 0x1f) - 1),0xffff);
      if (0 < (int)uVar7) {
        uVar8 = uVar13 - 1;
        lVar12 = 0;
        iVar9 = (int)uVar8;
        iVar6 = 0;
        do {
          uVar7 = iVar6 + (iVar9 >> 1) + (uint)(iVar9 < 0 && (uVar8 & 1) != 0);
          trapWord(6,uVar8,0);
          iVar11 = (int)lVar12;
          trapWord(5,uVar8 & ~((((ulonglong)uVar7 & 0x7fffffff) << 1 | (ulonglong)(uVar7 >> 0x1f)) -
                              1),0xffff);
          lVar10 = lVar12;
          while (iVar11 < iVar16) {
            iVar11 = 0;
            if (0 < iVar1) {
              uVar19 = uVar17;
              do {
                iVar3 = *piVar15 + iVar11;
                iVar11 = iVar11 + 1;
                *(char *)(iVar3 + (int)lVar10) = (char)((int)uVar7 / iVar9);
                uVar19 = uVar19 - 1;
              } while (uVar19 != 0);
            }
            lVar10 = lVar10 + uVar4;
            iVar11 = (int)lVar10;
          }
          uVar13 = uVar13 - 1;
          iVar6 = iVar6 + 0xff;
          lVar12 = lVar12 + uVar17;
        } while (uVar13 != 0);
      }
      iVar14 = iVar14 + 1;
      puVar18 = puVar18 + 1;
      uVar4 = uVar17;
      piVar15 = piVar15 + 1;
    } while (iVar14 < param_1[0x19]);
  }
  *(int **)(iVar2 + 0x10) = piVar5;
  *(int *)(iVar2 + 0x14) = iVar16;
  return;
}

