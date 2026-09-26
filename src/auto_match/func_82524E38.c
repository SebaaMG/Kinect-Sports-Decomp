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
extern int fn_827EFC90();
extern unsigned int lbl_821902F0;
extern unsigned int lbl_821CA460;
extern unsigned int *lbl_832767EC;
extern unsigned int uRam8327f254;


void fn_82524E38(int param_1)

{
  float fVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int *piVar10;
  uint uVar11;
  float *pfVar12;
  double dVar13;
  
  if (*(int *)(param_1 + 0x9c0) == 0) {
    puVar2 = (uint *)**(int **)(param_1 + 0xa18);
    uVar3 = puVar2[1];
    iVar4 = *(int *)(*lbl_832767EC + 4);
    if (*puVar2 != 0) {
      uVar11 = 0;
      dVar13 = (double)lbl_821CA460;
      do {
        uVar5 = *(uint *)(&lbl_821902F0 + uVar11 * 4);
        if ((((uVar11 == 0x1a) || (uVar11 == 0x1b)) || (uVar11 == 0x20)) ||
           (((uVar11 == 0x1d || (uVar11 == 0x1e)) || (uVar11 == 0x23)))) {
          pfVar12 = (float *)((uVar5 + 0x195) * 0x10 + param_1);
          iVar7 = uVar11 * 0x60 + uVar3;
          iVar6 = uVar5 * 0x10 + param_1;
          *pfVar12 = *(float *)(uVar11 * 0x60 + iVar4 + 0x50);
          *(undefined4 *)(iVar6 + 0x1954) = *(undefined4 *)(iVar7 + 0x54);
          fVar1 = *(float *)(iVar7 + 0x58);
          *(float *)(iVar6 + 0x1958) = fVar1;
        }
        else {
          iVar8 = uVar11 * 0x60 + uVar3;
          iVar7 = (uVar5 + 0x195) * 0x10;
          iVar6 = uVar5 * 0x10 + param_1;
          pfVar12 = (float *)(iVar7 + param_1);
          *(undefined4 *)(iVar7 + param_1) = *(undefined4 *)(iVar8 + 0x50);
          *(undefined4 *)(iVar6 + 0x1954) = *(undefined4 *)(uVar11 * 0x60 + iVar4 + 0x54);
          fVar1 = *(float *)(iVar8 + 0x58);
          *(float *)(iVar6 + 0x1958) = fVar1;
        }
        if (((((double)*pfVar12 != dVar13) || ((double)*(float *)(iVar6 + 0x1954) != dVar13)) ||
            ((double)fVar1 != dVar13)) &&
           ((*(int *)(param_1 + 0x319b8) == 0 ||
            (((((uVar11 != 0 && (uVar11 != 0xe)) && (uVar11 != 0x13)) &&
              ((uVar11 != 0x21 && (uVar11 != 0x24)))) && ((uVar11 != 1 && (uVar11 != 5)))))))) {
          if (*(int *)(param_1 + 0xb68) != 0) {
            fn_827EFC90(*(int *)(param_1 + 0xb68),uVar5 & 0xffff,uRam8327f254,pfVar12);
          }
          piVar10 = (int *)(param_1 + 0xb6c);
          lVar9 = 4;
          do {
            if (*piVar10 != 0) {
              fn_827EFC90(*piVar10,uVar5 & 0xffff,uRam8327f254,pfVar12);
            }
            lVar9 = lVar9 + -1;
            piVar10 = piVar10 + 1;
          } while (lVar9 != 0);
        }
        uVar11 = uVar11 + 1 & 0xffff;
      } while (uVar11 < *puVar2);
    }
  }
  return;
}

