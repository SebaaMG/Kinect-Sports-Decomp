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
extern int fn_82A1DDC0();
extern int memcpy();
extern int fn_8304D840();
extern int fn_8304E960();
extern int fn_8304EA78();
extern unsigned int uStack00000024;
extern unsigned int uStack0000002c;
extern unsigned int uStack_a0;


undefined8
fn_8304D8A0(ulonglong param_1,ulonglong param_2,undefined4 param_3,ulonglong param_4,int param_5,
             undefined4 *param_6,undefined4 *param_7,undefined4 *param_8)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  int *piVar15;
  undefined4 uStack00000024;
  uint uStack0000002c;
  undefined4 *puStack0000004c;
  int *in_stack_00000054;
  int *in_stack_0000005c;
  undefined8 uStack_a0;
  
  uStack0000002c = (uint)param_4;
  bVar1 = false;
  bVar3 = false;
  bVar2 = false;
  if (((param_1 & 0xffffffff) == 0) || ((param_2 & 0xffffffff) == 0)) {
    uVar4 = 0x1f;
  }
  else {
    if (param_6 != (undefined4 *)0x0) {
      *param_6 = 0;
    }
    if (param_7 != (undefined4 *)0x0) {
      *param_7 = 0;
    }
    uVar12 = (uint)param_1;
    param_1 = param_1 + param_2;
    uStack00000024 = param_3;
    puStack0000004c = param_8;
    uStack_a0 = ((((U64)(uStack_a0)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)(uVar12)) & ((U64)0xFFFFFFFF)) << 0));
    uVar4 = fn_8304D840(&uStack_a0,param_1);
    if ((int)uVar4 == 1) {
      uVar9 = (ulonglong)(((U64)(uStack_a0) >> 0) & 0xFFFFFFFF);
      uVar7 = param_1 - uVar9;
      if (7 < (uVar7 & 0xffffffff)) {
        do {
          puVar10 = (ulonglong *)uVar9;
          uVar5 = *puVar10;
          lVar14 = uVar9 + 8;
          uStack_a0 = ((((U64)(uStack_a0)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((undefined4)uVar5)) & ((U64)0xFFFFFFFF)) << 32));
          uVar13 = uVar5 & 0xffffffff;
          uStack_a0 = ((((U64)(uStack_a0)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((uint)(uVar5 >> 0x20))) & ((U64)0xFFFFFFFF)) << 0));
          if (((uVar7 - 8 & 0xffffffff) < uVar13) && ((((U64)(uStack_a0) >> 0) & 0xFFFFFFFF) != 0x64617461)) break;
          piVar15 = (int *)lVar14;
          uStack_a0 = uVar5;
          if ((((U64)(uStack_a0) >> 0) & 0xFFFFFFFF) < 0x666d7421) {
            if ((((U64)(uStack_a0) >> 0) & 0xFFFFFFFF) == 0x666d7420) {
              if (!bVar2) {
                if (uVar13 <= (param_4 & 0xffffffff)) {
                  param_4 = uVar13;
                }
                fn_82A1DDC0(uStack00000024,lVar14,param_4);
                bVar2 = true;
              }
            }
            else if ((((U64)(uStack_a0) >> 0) & 0xFFFFFFFF) < 0x63756521) {
              if ((((U64)(uStack_a0) >> 0) & 0xFFFFFFFF) == 0x63756520) {
                if (!bVar2) break;
                if ((!bVar3) && (param_5 != 0)) {
                  if (*piVar15 != 0) {
                    uVar4 = fn_8304E960(param_5);
                    if ((int)uVar4 != 1) {
                      return uVar4;
                    }
                    uVar6 = 0;
                    if (*(int *)(param_5 + 4) != 0) {
                      iVar11 = 0;
                      lVar8 = uVar9 - 8;
                      do {
                        uVar6 = uVar6 + 1;
                        *(undefined4 *)(iVar11 + *(int *)(param_5 + 8)) =
                             *(undefined4 *)((int)lVar8 + 0x14);
                        lVar8 = lVar8 + 0x18;
                        *(undefined4 *)(iVar11 + *(int *)(param_5 + 8) + 4) = *(undefined4 *)lVar8;
                        *(undefined4 *)(iVar11 + *(int *)(param_5 + 8) + 8) = 0;
                        iVar11 = iVar11 + 0xc;
                      } while (uVar6 < *(uint *)(param_5 + 4));
                    }
                  }
                  bVar3 = true;
                }
              }
              else if ((((U64)(uStack_a0) >> 0) & 0xFFFFFFFF) == 0x4c495354) {
                uVar13 = 4;
              }
              else if ((((U64)(uStack_a0) >> 0) & 0xFFFFFFFF) == 0x584d4163) {
                memcpy(in_stack_0000005c + 1,lVar14,0xc);
              }
            }
            else if ((((U64)(uStack_a0) >> 0) & 0xFFFFFFFF) == 0x64617461) {
              if (bVar2) {
                *puStack0000004c = (((U64)(uStack_a0) >> 32) & 0xFFFFFFFF);
                *in_stack_00000054 = (int)piVar15 - uVar12;
                return 1;
              }
              break;
            }
          }
          else if ((((U64)(uStack_a0) >> 0) & 0xFFFFFFFF) < 0x736d706d) {
            if ((((U64)(uStack_a0) >> 0) & 0xFFFFFFFF) == 0x736d706c) {
              if (((param_6 != (undefined4 *)0x0) && (param_7 != (undefined4 *)0x0)) &&
                 (*(int *)((int)puVar10 + 0x24) != 0)) {
                iVar11 = *(int *)(puVar10 + 5);
                *param_6 = *(undefined4 *)((int)piVar15 + iVar11 + 0x2c);
                *param_7 = *(undefined4 *)((int)piVar15 + iVar11 + 0x30);
              }
            }
            else if ((((U64)(uStack_a0) >> 0) & 0xFFFFFFFF) == 0x6c61626c) {
              if ((bVar3) && (param_5 != 0)) {
                uVar7 = 0;
                if ((ulonglong)*(uint *)(param_5 + 4) != 0) {
                  iVar11 = 0;
                  do {
                    if (*(int *)(iVar11 + *(int *)(param_5 + 8)) == *piVar15) {
                      fn_8304EA78(param_5,uVar7,uVar9 + 0xc,uVar13 - 4);
                      break;
                    }
                    uVar7 = uVar7 + 1;
                    iVar11 = iVar11 + 0xc;
                  } while ((uVar7 & 0xffffffff) < (ulonglong)*(uint *)(param_5 + 4));
                }
              }
            }
            else if ((((U64)(uStack_a0) >> 0) & 0xFFFFFFFF) == 0x7365656b) {
              *in_stack_0000005c = (int)piVar15 - uVar12;
            }
          }
          else if (((((U64)(uStack_a0) >> 0) & 0xFFFFFFFF) == 0x766f7262) && (!bVar1)) {
            memcpy(in_stack_0000005c,lVar14,0x34);
            bVar1 = true;
          }
          uVar9 = uVar13 + lVar14;
          if (((((uVar13 & 1) != 0) && (*(char *)uVar9 == '\0')) &&
              (uVar9 = uVar9 + 1, (param_1 & 0xffffffff) < (uVar9 & 0xffffffff))) ||
             (uVar7 = param_1 - uVar9, (uVar7 & 0xffffffff) < 8)) break;
          param_4 = (ulonglong)uStack0000002c;
        } while( true );
      }
      uVar4 = 7;
    }
  }
  return uVar4;
}

