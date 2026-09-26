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
extern int fn_82F65FB0();
extern int fn_82F98A08();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8200571C;
extern unsigned int lbl_82005748;
extern unsigned int lbl_8216C674;
extern unsigned int lbl_8216C678;
extern unsigned int lbl_821AAD20;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82F98BF8(int param_1,int *param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  float fVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined4 *puVar9;
  double dVar10;
  
  if ((*(char *)(param_1 + 0x3e) != '\0') ||
     ((*(int *)(param_1 + 0x20) != 0 && (*(int *)(param_1 + 0x28) != 0)))) {
    iVar3 = *(int *)(param_1 + 4);
    *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(iVar3 + 0x14);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(iVar3 + 8);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(iVar3 + 0xc);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(iVar3 + 0x10);
    if (*(char *)(param_1 + 0x40) != '\0') {
      *(undefined4 *)(param_1 + 0x10) = lbl_82002AE0;
    }
    fVar4 = lbl_821AAD20;
    if (*(char *)(param_1 + 0x18) == '\0') {
      *(float *)(param_1 + 0xc) = lbl_821AAD20;
    }
    iVar3 = param_2[2];
    if (iVar3 == 0x11) {
      if ((*(char *)(param_1 + 0x18) == '\0') || (*(float *)(param_1 + 0xc) == fVar4)) {
        if ((*(char *)(param_1 + 0x3c) != '\0') || (*(char *)(param_1 + 0x3d) == '\0')) {
          *(undefined1 *)(param_1 + 0x3c) = 0;
          *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x28);
        }
      }
      else if ((*(float *)(param_1 + 0xc) != *(float *)(param_1 + 0x38)) ||
              (*(char *)(param_1 + 0x3d) == '\0')) {
        dVar10 = (double)fn_82F65FB0();
        fVar4 = lbl_82005748;
        if ((float)dVar10 * lbl_8200571C < lbl_8216C678) {
          fVar4 = lbl_8216C674 / ((float)dVar10 * lbl_8200571C);
        }
        *(int *)(param_1 + 0x2c) = (int)(longlong)((float)*(uint *)(param_1 + 0x28) * fVar4);
      }
      uVar1 = *(ushort *)((int)param_2 + 0xe);
      uVar2 = *(ushort *)(param_2 + 3);
      uVar8 = (uint)uVar2 - (uint)uVar1;
      uVar5 = *(uint *)(param_1 + 0x2c);
      if (uVar8 <= *(uint *)(param_1 + 0x2c)) {
        uVar5 = uVar8;
      }
      uVar7 = 0;
      for (uVar8 = param_2[1]; uVar8 != 0; uVar8 = uVar8 - 1 & uVar8) {
        uVar7 = uVar7 + 1;
      }
      if ((uVar7 & 0xffffffff) != 0) {
        iVar6 = (uint)uVar1 * 4 + *param_2;
        do {
          if (uVar5 != 0) {
            puVar9 = (undefined4 *)(iVar6 + -4);
            uVar8 = uVar5;
            do {
              puVar9 = puVar9 + 1;
              *puVar9 = 0;
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
          }
          uVar7 = uVar7 - 1;
          iVar6 = (uint)uVar2 * 4 + iVar6;
        } while (uVar7 != 0);
      }
      *(ushort *)((int)param_2 + 0xe) = uVar1 + (short)uVar5;
      iVar6 = *(int *)(param_1 + 0x2c) - uVar5;
      *(int *)(param_1 + 0x2c) = iVar6;
      if (iVar6 != 0) {
        param_2[2] = 0x2d;
      }
    }
    fn_82F98A08(param_1,param_2);
    *(bool *)(param_1 + 0x3d) = iVar3 == 0x11;
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0xc);
  }
  return;
}

