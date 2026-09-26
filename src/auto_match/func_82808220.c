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
extern unsigned int *auStack_280;
extern unsigned int *auStack_28e;
extern int fn_82807F68();
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_290;


void fn_82808220(int param_1,int param_2,int param_3)

{
  byte *pbVar1;
  code *pcVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;
  longlong lVar12;
  int iVar13;
  double dVar14;
  ushort uStack_290;
  ushort auStack_28e [7];
  undefined1 auStack_280 [640];
  
  uVar9 = 0;
  if (*(short *)(param_3 + 0x48) != 0) {
    iVar8 = 0;
    dVar14 = (double)lbl_821AAD20;
    do {
      auStack_28e[0] = 0;
      uStack_290 = 0;
      if ((*(int *)(param_3 + 0x58) == 0) ||
         (*(ushort *)(iVar8 + *(int *)(param_3 + 0x58)) == uVar9)) {
        iVar8 = iVar8 + 2;
        if ((*(int *)(param_3 + 0x50) == 0) ||
           (lVar12 = 1, *(char *)(*(int *)(param_3 + 0x50) + uVar9) != '\0')) {
          lVar12 = 0;
        }
        if ((*(ushort *)(param_3 + 0x4a) == 0xffff) ||
           (uVar11 = 0, (int)uVar9 < (int)(uint)*(ushort *)(param_3 + 0x4a))) {
          uVar11 = 1;
        }
        if (*(short *)(param_1 + 0x1e) != 0) {
          iVar10 = 0xc;
          iVar13 = 3;
          do {
            fn_82807F68(param_1,param_3,param_2,auStack_280,&uStack_290,auStack_28e,uVar11,lVar12)
            ;
            pbVar1 = *(byte **)(param_3 + 0x24);
            bVar3 = *pbVar1 & 3;
            if ((*pbVar1 & 3) == 0) {
              if ((lVar12 == 0) && (iVar13 < (int)(uint)*(ushort *)(param_1 + 0x1e))) {
                iVar6 = iVar13;
                iVar5 = iVar10;
                do {
                  uVar4 = auStack_28e[0];
                  if (iVar13 + 6 <= iVar6) break;
                  *(undefined4 *)((uint)uStack_290 * 4 + param_2) =
                       *(undefined4 *)(*(int *)(param_1 + 8) + iVar5);
                  if ((*(int *)(param_3 + 0x3c) == 0) ||
                     (pcVar2 = *(code **)((uint)auStack_28e[0] * 4 + *(int *)(param_3 + 0x3c)),
                     pcVar2 == (code *)0x0)) {
                    uStack_290 = uStack_290 + 1;
                  }
                  else {
                    (*pcVar2)(dVar14,0,0);
                  }
                  iVar6 = iVar6 + 1;
                  auStack_28e[0] = uVar4 + 1;
                  iVar5 = iVar5 + 4;
                } while (iVar6 < (int)(uint)*(ushort *)(param_1 + 0x1e));
              }
            }
            else if (bVar3 == 1) {
              if ((lVar12 == 0) && (iVar13 < (int)(uint)*(ushort *)(param_1 + 0x1e))) {
                iVar6 = iVar13;
                iVar5 = iVar10;
                do {
                  uVar4 = auStack_28e[0];
                  if (iVar13 + 3 <= iVar6) break;
                  *(undefined4 *)((uint)uStack_290 * 4 + param_2) =
                       *(undefined4 *)(*(int *)(param_1 + 8) + iVar5);
                  if ((*(int *)(param_3 + 0x3c) == 0) ||
                     (pcVar2 = *(code **)((uint)auStack_28e[0] * 4 + *(int *)(param_3 + 0x3c)),
                     pcVar2 == (code *)0x0)) {
                    uStack_290 = uStack_290 + 1;
                  }
                  else {
                    (*pcVar2)(dVar14,0,0);
                  }
                  iVar6 = iVar6 + 1;
                  auStack_28e[0] = uVar4 + 1;
                  iVar5 = iVar5 + 4;
                } while (iVar6 < (int)(uint)*(ushort *)(param_1 + 0x1e));
              }
LAB_82808350:
              *(int *)(param_3 + 0x24) = *(int *)(param_3 + 0x24) + 1;
              fn_82807F68(param_1,param_3,param_2,auStack_280,&uStack_290,auStack_28e,uVar11,
                            lVar12);
            }
            else if (bVar3 < 3) {
              *(byte **)(param_3 + 0x24) = pbVar1 + 1;
              fn_82807F68(param_1,param_3,param_2,auStack_280,&uStack_290,auStack_28e,uVar11,
                            lVar12);
              if ((lVar12 == 0) &&
                 (iVar6 = iVar13 + 3, iVar6 < (int)(uint)*(ushort *)(param_1 + 0x1e))) {
                iVar5 = iVar10 + 0xc;
                do {
                  if (iVar13 + 6 <= iVar6) break;
                  iVar6 = iVar6 + 1;
                  auStack_28e[0] = auStack_28e[0] + 1;
                  *(undefined4 *)((uint)uStack_290 * 4 + param_2) =
                       *(undefined4 *)(*(int *)(param_1 + 8) + iVar5);
                  uStack_290 = uStack_290 + 1;
                  iVar5 = iVar5 + 4;
                } while (iVar6 < (int)(uint)*(ushort *)(param_1 + 0x1e));
              }
            }
            else if (bVar3 == 3) {
              *(byte **)(param_3 + 0x24) = pbVar1 + 1;
              fn_82807F68(param_1,param_3,param_2,auStack_280,&uStack_290,auStack_28e,uVar11,
                            lVar12);
              goto LAB_82808350;
            }
            iVar10 = iVar10 + 0x24;
            iVar6 = iVar13 + 6;
            *(int *)(param_3 + 0x24) = *(int *)(param_3 + 0x24) + 1;
            iVar13 = iVar13 + 9;
          } while (iVar6 < (int)(uint)*(ushort *)(param_1 + 0x1e));
        }
        if (lVar12 == 0) {
          uVar7 = *(uint *)(param_3 + 0x60);
          if (uVar7 == 0) {
            uVar7 = (uint)uStack_290;
            goto LAB_82808618;
          }
        }
        else {
          iVar13 = 0;
          if (0 < *(int *)(param_3 + 0x5c)) {
            iVar10 = 0;
            do {
              iVar13 = iVar13 + 1;
              *(undefined4 *)(iVar10 + param_2) = *(undefined4 *)(iVar10 + *(int *)(param_3 + 0x54))
              ;
              iVar10 = iVar10 + 4;
            } while (iVar13 < *(int *)(param_3 + 0x5c));
          }
          uVar7 = *(uint *)(param_3 + 0x60);
          if (uVar7 == 0) {
            uVar7 = *(uint *)(param_3 + 0x5c);
          }
        }
        uVar7 = uVar7 & 0x3fffffff;
      }
      else {
        uVar7 = *(uint *)(param_3 + 0x60);
      }
LAB_82808618:
      param_2 = uVar7 * 4 + param_2;
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < (int)(uint)*(ushort *)(param_3 + 0x48));
  }
  return;
}

