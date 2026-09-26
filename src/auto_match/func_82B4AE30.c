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
extern int fn_82AA66A8();
extern int fn_82ABE9F0();
extern int fn_82F68CC0();


void fn_82B4AE30(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar6;
  undefined8 uVar5;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  
  piVar1 = *(int **)(param_3 + 0x50);
  if (piVar1 != (int *)0x0) {
    uVar2 = *(uint *)(param_5 + 0x14);
    iVar6 = fn_82ABE9F0(param_5,uVar2 << 2,0);
    uVar10 = 0;
    if (uVar2 != 0) {
      iVar11 = 0;
      piVar12 = piVar1;
      do {
        if (*piVar12 != 0) {
          if (uVar10 == *(uint *)(param_4 + 0x10)) {
LAB_82b4af44:
            *(int *)((iVar6 - (int)piVar1) + (int)piVar12) = *piVar12;
            *piVar12 = 0;
          }
          else {
            iVar7 = *(int *)(param_4 + 0x2c);
            if ((iVar7 != 0) && (*(int *)(iVar7 + 4) != 1)) {
                    /* WARNING: Subroutine does not return */
              fn_82AA66A8(param_1,0x12c1);
            }
            if (iVar7 != 0) {
              do {
                iVar3 = *(int *)(iVar7 + 8);
                if (*(int *)(iVar3 + 4) == 6) {
                  if (*(int *)(iVar3 + 0x10) != 1) {
                    /* WARNING: Subroutine does not return */
                    fn_82AA66A8(param_1,0x12c1);
                  }
                  iVar3 = *(int *)(iVar3 + 0x18);
                  if ((iVar3 == 0) || (*(int *)(iVar3 + 4) != 0xb)) {
                    /* WARNING: Subroutine does not return */
                    fn_82AA66A8(param_1,0x12c1);
                  }
                  if (((*(uint *)(iVar3 + 0x2c) & 0x20) != 0) && (uVar10 == *(uint *)(iVar3 + 0x10))
                     ) break;
                }
                iVar7 = *(int *)(iVar7 + 0xc);
                if ((iVar7 != 0) && (*(int *)(iVar7 + 4) != 1)) {
                    /* WARNING: Subroutine does not return */
                  fn_82AA66A8(param_1,0x12c1);
                }
              } while (iVar7 != 0);
              if (iVar7 != 0) goto LAB_82b4af44;
            }
            uVar8 = *(uint *)(*(int *)(param_5 + 0xc) + iVar11) & 0x1fff8;
            uVar5 = fn_82ABE9F0(param_5,uVar8,0);
            fn_82F68CC0(uVar5,*piVar12,uVar8);
            *(int *)((iVar6 - (int)piVar1) + (int)piVar12) = (int)uVar5;
            if ((*(uint *)(*(int *)(param_5 + 0xc) + iVar11 + 4) >> 2 & 1) != 0) {
              uVar8 = 0;
              if ((*(uint *)(iVar11 + *(int *)(param_1 + 0xc)) & 0x1fff8) != 0) {
                iVar7 = 0;
                do {
                  puVar9 = (uint *)(iVar7 + *piVar12);
                  iVar7 = iVar7 + 8;
                  *puVar9 = *puVar9 | 1;
                  uVar4 = uVar8 & 0x3fff;
                  uVar8 = uVar8 + 1;
                  puVar9[1] = uVar4 << 2 | puVar9[1] & 0x10000 | uVar10 << 0x11;
                } while (uVar8 < (*(uint *)(iVar11 + *(int *)(param_1 + 0xc)) >> 3 & 0x3fff));
              }
            }
          }
        }
        uVar10 = uVar10 + 1;
        piVar12 = piVar12 + 1;
        iVar11 = iVar11 + 0x28;
      } while (uVar10 < uVar2);
    }
    *(int **)(param_2 + 0x50) = piVar1;
    *(int *)(param_3 + 0x50) = iVar6;
  }
  return;
}

