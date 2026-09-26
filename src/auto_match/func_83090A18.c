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
extern int fn_82CE5410();
extern int fn_82CE63B0();


void fn_83090A18(int param_1,int *param_2,longlong param_3,int *param_4,longlong param_5,
                  int param_6,int *param_7)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  ushort *puVar8;
  int iVar9;
  int *piVar10;
  uint *puVar11;
  
  iVar2 = *(int *)(param_1 + 0xd8);
  do {
    if (*(ushort *)(param_4 + 2) < *(ushort *)(param_2 + 2)) {
      uVar1 = *(ushort *)((int)param_4 + 10);
      if (*(ushort *)(param_2 + 2) < uVar1) {
        piVar10 = param_2 + 3;
        do {
          if (((piVar10[-2] - *param_4 | param_4[1] - piVar10[-3]) & 0x80008000U) == 0) {
            if ((param_4[3] & 1U) == 0) {
              iVar7 = fn_82CE5410();
              if (param_7[1] == (param_7[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
                fn_82CE63B0(*(undefined4 *)(iVar7 + 0x10),param_7,8);
              }
              iVar7 = *param_7;
              iVar6 = param_7[1] * 8;
              param_7[1] = param_7[1] + 1;
              *(int *)(iVar6 + iVar7) = *piVar10;
              *(int *)(iVar6 + iVar7 + 4) = param_4[3];
            }
            else if (param_6 != 1) {
              iVar7 = (param_4[3] & 0xfffffffeU) + iVar2;
              uVar3 = *(uint *)*piVar10;
              if (param_6 == 0) {
                iVar6 = fn_82CE5410();
                if (*(uint *)(iVar7 + 8) == (*(uint *)(iVar7 + 0xc) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
                  fn_82CE63B0(*(undefined4 *)(iVar6 + 0x10),(int *)(iVar7 + 4),2);
                }
                *(short *)(*(int *)(iVar7 + 8) * 2 + *(int *)(iVar7 + 4)) = (short)uVar3;
                *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
              }
              else {
                iVar6 = 0;
                if (0 < *(int *)(iVar7 + 8)) {
                  puVar8 = *(ushort **)(iVar7 + 4);
                  do {
                    if ((uint)*puVar8 == (uVar3 & 0xffff)) goto LAB_83090b4c;
                    iVar6 = iVar6 + 1;
                    puVar8 = puVar8 + 1;
                  } while (iVar6 < *(int *)(iVar7 + 8));
                }
                iVar6 = -1;
LAB_83090b4c:
                iVar9 = *(int *)(iVar7 + 8) + -1;
                *(int *)(iVar7 + 8) = iVar9;
                if (iVar9 != iVar6) {
                  *(undefined2 *)(iVar6 * 2 + *(int *)(iVar7 + 4)) =
                       *(undefined2 *)(iVar9 * 2 + *(int *)(iVar7 + 4));
                }
              }
            }
          }
          puVar8 = (ushort *)(piVar10 + 3);
          piVar10 = piVar10 + 4;
        } while (*puVar8 < uVar1);
      }
      param_5 = param_5 + -1;
      param_4 = param_4 + 4;
      lVar5 = param_5;
    }
    else {
      uVar1 = *(ushort *)((int)param_2 + 10);
      if (*(ushort *)(param_4 + 2) < uVar1) {
        puVar11 = (uint *)(param_4 + 3);
        do {
          if (((param_2[1] - puVar11[-3] | puVar11[-2] - *param_2) & 0x80008000) == 0) {
            if ((*puVar11 & 1) == 0) {
              iVar7 = fn_82CE5410();
              if (param_7[1] == (param_7[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
                fn_82CE63B0(*(undefined4 *)(iVar7 + 0x10),param_7,8);
              }
              iVar7 = *param_7;
              iVar6 = param_7[1] * 8;
              param_7[1] = param_7[1] + 1;
              *(int *)(iVar6 + iVar7) = param_2[3];
              *(uint *)(iVar6 + iVar7 + 4) = *puVar11;
            }
            else if (param_6 != 1) {
              iVar7 = (*puVar11 & 0xfffffffe) + iVar2;
              uVar3 = *(uint *)param_2[3];
              if (param_6 == 0) {
                iVar6 = fn_82CE5410();
                if (*(uint *)(iVar7 + 8) == (*(uint *)(iVar7 + 0xc) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
                  fn_82CE63B0(*(undefined4 *)(iVar6 + 0x10),(int *)(iVar7 + 4),2);
                }
                *(short *)(*(int *)(iVar7 + 8) * 2 + *(int *)(iVar7 + 4)) = (short)uVar3;
                *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
              }
              else {
                iVar6 = 0;
                if (0 < *(int *)(iVar7 + 8)) {
                  puVar8 = *(ushort **)(iVar7 + 4);
                  do {
                    if ((uint)*puVar8 == (uVar3 & 0xffff)) goto LAB_83090cdc;
                    iVar6 = iVar6 + 1;
                    puVar8 = puVar8 + 1;
                  } while (iVar6 < *(int *)(iVar7 + 8));
                }
                iVar6 = -1;
LAB_83090cdc:
                iVar9 = *(int *)(iVar7 + 8) + -1;
                *(int *)(iVar7 + 8) = iVar9;
                if (iVar9 != iVar6) {
                  *(undefined2 *)(iVar6 * 2 + *(int *)(iVar7 + 4)) =
                       *(undefined2 *)(iVar9 * 2 + *(int *)(iVar7 + 4));
                }
              }
            }
          }
          puVar4 = puVar11 + 3;
          puVar11 = puVar11 + 4;
        } while (*(ushort *)puVar4 < uVar1);
      }
      param_3 = param_3 + -1;
      param_2 = param_2 + 4;
      lVar5 = param_3;
    }
    if (lVar5 < 1) {
      return;
    }
  } while( true );
}

