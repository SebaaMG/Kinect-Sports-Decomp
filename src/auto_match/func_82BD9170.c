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
extern int fn_82A1EFC0();
extern int fn_82BD62B8();
extern int fn_82BD66F0();
extern unsigned int lbl_8208E090;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82BD9170(int param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,int param_5
                  )

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  undefined2 *puVar6;
  uint uVar7;
  undefined2 *puVar8;
  float *pfVar9;
  uint uVar10;
  uint *puVar11;
  int *piVar12;
  longlong lVar13;
  double dVar14;
  
  if (*(int *)(*(int *)(param_1 + 0x20) + 0x44) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x48) = 1;
    if (param_3[1] == 0) {
      uVar10 = 0;
      piVar12 = (int *)(param_1 + 0x834);
      do {
        iVar4 = *(int *)((int)piVar12 + *(int *)(param_1 + 0x20) + (-0x7e4 - param_1));
        if (((iVar4 != 0) && ((*(uint *)(iVar4 + 0xd0) & 4) != 0)) &&
           (iVar4 = fn_82BD62B8(iVar4), iVar4 != 0x70000000)) {
                    /* WARNING: Subroutine does not return */
          fn_82A1EFC0((uVar10 + *piVar12) * 0xac + param_1 + 0x24,0,0xac);
        }
        *piVar12 = 0;
        uVar10 = uVar10 + 3;
        piVar12 = piVar12 + 1;
      } while (uVar10 < 0xc);
    }
    else if (param_3[1] == 1) {
      pfVar9 = (float *)*param_3;
      uVar10 = 0;
      puVar11 = (uint *)(param_1 + 0x834);
      iVar4 = param_1 + 0x28;
      dVar14 = (double)lbl_8208E090;
      do {
        iVar2 = *(int *)((int)puVar11 + *(int *)(param_1 + 0x20) + (-0x7e4 - param_1));
        if (((iVar2 == 0) || ((*(uint *)(iVar2 + 0xd0) & 4) == 0)) ||
           (iVar3 = fn_82BD62B8(iVar2), iVar3 == 0x70000000)) {
          *puVar11 = 0;
        }
        else {
          fVar1 = *(float *)(iVar2 + 0xc4);
          uVar7 = 0;
          puVar8 = (undefined2 *)((uVar10 + *puVar11) * 0xac + param_1 + 0x24);
          pfVar5 = pfVar9;
          if (param_3[2] != 0) {
            do {
              iVar3 = (int)((double)(*pfVar5 * fVar1) * dVar14);
              if (iVar3 < 0x7fff) {
                if (iVar3 < -0x7fff) {
                  iVar3 = -0x7fe2;
                }
              }
              else {
                iVar3 = 0x7fff;
              }
              uVar7 = uVar7 + 1;
              *puVar8 = (short)iVar3;
              puVar8 = puVar8 + 1;
              pfVar5 = pfVar5 + 4;
            } while (uVar7 < (uint)param_3[2]);
          }
          uVar7 = *puVar11;
          *puVar11 = uVar7 + 1;
          if (2 < uVar7 + 1) {
            *puVar11 = 0;
            puVar6 = (undefined2 *)(iVar4 + -4);
            puVar8 = (undefined2 *)(iVar4 + -4);
            lVar13 = 0x80;
            do {
              puVar8 = puVar8 + 2;
              puVar6 = puVar6 + 1;
              *puVar6 = *puVar8;
              lVar13 = lVar13 + -1;
            } while (lVar13 != 0);
            fn_82BD66F0(iVar2,iVar4 + -4,0x102);
          }
        }
        uVar10 = uVar10 + 3;
        pfVar9 = pfVar9 + 1;
        puVar11 = puVar11 + 1;
        iVar4 = iVar4 + 0x204;
      } while (uVar10 < 0xc);
    }
    *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x48) = 0;
  }
  *(undefined4 *)(param_5 + 8) = param_3[2];
  *(undefined4 *)(param_5 + 4) = param_3[1];
  return;
}

