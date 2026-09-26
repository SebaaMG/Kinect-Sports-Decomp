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


undefined8
fn_8299D5C0(int param_1,int param_2,uint param_3,uint param_4,int *param_5,longlong param_6,
             uint *param_7,undefined4 *param_8)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  int *piVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined4 *in_stack_00000054;
  
  *param_8 = 0;
  uVar9 = 0;
  *in_stack_00000054 = 0;
  if (param_3 < param_4) {
    iVar7 = param_4 - param_3;
    piVar8 = (int *)(param_3 * 4 + param_2);
    uVar9 = 0;
    do {
      puVar1 = (uint *)*piVar8;
      if ((puVar1 != (uint *)0x0) && (uVar2 = *puVar1, uVar2 != 0)) {
        uVar3 = puVar1[1];
        uVar4 = (ulonglong)uVar2 & 0xfffff;
        uVar11 = 0;
        trapWord(6,uVar4,0);
        lVar10 = param_6;
        piVar12 = param_5;
        if ((int)param_6 != 0) {
          do {
            if (uVar3 / uVar4 != 0) {
              lVar14 = 0;
              uVar13 = uVar3 / uVar4;
              do {
                uVar15 = 0;
                lVar16 = lVar14;
                uVar17 = uVar4;
                if ((uVar2 & 0xfffff) != 0) {
                  do {
                    iVar6 = *(int *)(puVar1[2] + (int)lVar16);
                    if ((*(int *)(*(int *)(iVar6 * 4 + *(int *)(param_1 + 0x14)) + 0x38) == *piVar12
                        ) || (iVar6 == *piVar12)) {
                      uVar11 = uVar11 + 1;
                      uVar15 = uVar15 + 1;
                      if (uVar9 < uVar11) {
                        uVar9 = uVar11;
                      }
                      if ((puVar1[3] == 1) &&
                         (*(int *)(*(int *)(*(int *)puVar1[4] * 4 + *(int *)(param_1 + 0x14)) + 0x10
                                  ) == 3)) {
                        *param_8 = 1;
                      }
                      if (((*puVar1 & 0xfff00000) != 0x50000000) && (uVar5 = 0, puVar1[3] != 0)) {
                        iVar6 = 0;
                        do {
                          if (*(int *)(*(int *)(*(int *)(puVar1[4] + iVar6) * 4 +
                                               *(int *)(param_1 + 0x14)) + 0x10) == 3) {
                            *param_8 = 1;
                          }
                          uVar5 = uVar5 + 1;
                          iVar6 = iVar6 + 4;
                        } while (uVar5 < puVar1[3]);
                      }
                    }
                    uVar17 = uVar17 - 1;
                    lVar16 = lVar16 + 4;
                  } while (uVar17 != 0);
                }
                if ((uVar15 != uVar4) && (uVar15 != 0)) {
                  *in_stack_00000054 = 1;
                }
                uVar13 = uVar13 - 1;
                lVar14 = ((ulonglong)uVar2 & 0xfffff) * 4 + lVar14;
              } while (uVar13 != 0);
            }
            lVar10 = lVar10 + -1;
            piVar12 = piVar12 + 1;
          } while (lVar10 != 0);
        }
      }
      iVar7 = iVar7 + -1;
      piVar8 = piVar8 + 1;
    } while (iVar7 != 0);
  }
  *param_7 = uVar9;
  return 0;
}

