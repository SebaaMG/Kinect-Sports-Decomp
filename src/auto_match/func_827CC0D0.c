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
extern unsigned int uStack_274;


void fn_827CC0D0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  byte *param_7)

{
  byte bVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  byte *pbVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  undefined4 uStack_274;
  int aiStack_270 [156];
  
  puVar3 = &uStack_274;
  lVar16 = 0x80;
  do {
    puVar3 = puVar3 + 1;
    *puVar3 = 0x7fffffff;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  iVar10 = 0;
  if (0 < param_5) {
    do {
      piVar2 = *(int **)(param_1 + 0x74);
      piVar13 = aiStack_270;
      bVar1 = *(byte *)(iVar10 + param_6);
      lVar16 = 3;
      iVar4 = param_4 - (uint)*(byte *)(piVar2[2] + (uint)bVar1);
      iVar6 = (param_3 - (uint)*(byte *)(piVar2[1] + (uint)bVar1)) * 3;
      iVar14 = (param_2 - (uint)*(byte *)((uint)bVar1 + *piVar2)) * 2;
      iVar5 = iVar4 * iVar4 + iVar6 * iVar6 + iVar14 * iVar14;
      iVar14 = (iVar14 + 8) * 0x20;
      pbVar12 = param_7;
      do {
        lVar9 = 7;
        iVar11 = iVar5;
        iVar8 = (iVar6 + 6) * 0x18;
        do {
          lVar17 = 4;
          iVar7 = iVar11;
          iVar15 = (iVar4 + 4) * 0x10;
          do {
            if (iVar7 < *piVar13) {
              *piVar13 = iVar7;
              *pbVar12 = bVar1;
            }
            iVar7 = iVar15 + iVar7;
            iVar15 = iVar15 + 0x80;
            piVar13 = piVar13 + 1;
            pbVar12 = pbVar12 + 1;
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
          iVar11 = iVar8 + iVar11;
          lVar9 = lVar9 + -1;
          iVar8 = iVar8 + 0x120;
        } while (-1 < lVar9);
        iVar5 = iVar14 + iVar5;
        lVar16 = lVar16 + -1;
        iVar14 = iVar14 + 0x200;
      } while (-1 < lVar16);
      iVar10 = iVar10 + 1;
    } while (iVar10 < param_5);
  }
  return;
}

