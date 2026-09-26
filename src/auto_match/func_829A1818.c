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


undefined8 fn_829A1818(int *param_1,int param_2,uint param_3,uint param_4,int *param_5)

{
  uint *puVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  ulonglong uVar12;
  
  if (param_5 != (int *)0x0) {
    *param_5 = 0;
  }
  if (param_4 != 0) {
    if ((param_5 == (int *)0x0) && (param_3 < param_4)) {
      iVar5 = param_4 - param_3;
      piVar6 = (int *)(param_3 * 4 + param_2);
      do {
        if (*piVar6 != 0) {
          *(undefined4 *)(*piVar6 + 0x24) = 0;
        }
        piVar6 = piVar6 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    while (param_3 < param_4 - 1) {
      piVar6 = (int *)(param_3 * 4 + param_2);
      puVar1 = (uint *)*piVar6;
      uVar9 = param_3;
      if (puVar1 != (uint *)0x0) {
        puVar11 = (uint *)0x0;
        if (param_5 != (int *)0x0) {
          *param_5 = *param_5 + 1;
        }
        do {
          if (param_4 - 1 <= param_3) break;
          piVar6 = piVar6 + 1;
          puVar11 = (uint *)*piVar6;
          param_3 = param_3 + 1;
        } while (puVar11 == (uint *)0x0);
        uVar9 = param_3 - 1;
        bVar3 = false;
        if (puVar11 != (uint *)0x0) {
          bVar4 = false;
          if (param_5 == (int *)0x0) {
            puVar1[9] = 0;
            puVar11[9] = 0;
          }
          if (((*puVar1 & 0xfffff) == 1) && ((*puVar11 & 0xfffff) < 4)) {
            bVar4 = true;
            puVar10 = puVar11;
            puVar11 = puVar1;
          }
          else if (((*puVar1 & 0xfffff) == 4) || (puVar10 = puVar1, (*puVar11 & 0xfffff) != 1))
          goto LAB_829a1b58;
          if ((*(short *)((int)param_1 + 0xca) == 0x104) ||
             (iVar5 = (**(code **)(*param_1 + 0x178))(param_1,puVar10,puVar11), iVar5 == 0)) {
            uVar7 = *puVar10 & 0xfff00000;
            if ((((uVar7 != 0x72100000) &&
                 (((uVar7 != 0x72000000 && (uVar7 != 0x72e00000)) && (uVar7 != 0x60700000)))) &&
                (((uVar7 != 0x60500000 && (uVar7 != 0x60a00000)) && (uVar7 != 0x60000000)))) &&
               (((uVar7 != 0x60f00000 && (uVar7 != 0x11000000)) && ((*puVar10 & 0xfff00000) != 0))))
            {
              bVar2 = false;
              if (puVar10[3] != 0) {
                uVar12 = (ulonglong)puVar10[3];
                piVar6 = (int *)puVar10[4];
                bVar3 = false;
                do {
                  iVar5 = *piVar6;
                  if (*(int *)(*(int *)(iVar5 * 4 + param_1[5]) + 0x10) == 3) {
                    bVar3 = true;
                  }
                  uVar7 = 0;
                  if (puVar11[1] != 0) {
                    iVar8 = 0;
                    do {
                      if ((*(int *)(*(int *)(*(int *)(iVar8 + puVar11[2]) * 4 + param_1[5]) + 0x38)
                           == iVar5) || (*(int *)(iVar8 + puVar11[2]) == iVar5)) {
                        bVar2 = true;
                      }
                      uVar7 = uVar7 + 1;
                      iVar8 = iVar8 + 4;
                    } while (uVar7 < puVar11[1]);
                  }
                  piVar6 = piVar6 + 1;
                  uVar12 = uVar12 - 1;
                } while (uVar12 != 0);
              }
              if (puVar11[3] != 0) {
                uVar12 = (ulonglong)puVar11[3];
                iVar5 = 0;
                do {
                  uVar7 = 0;
                  if (puVar10[1] != 0) {
                    iVar8 = 0;
                    do {
                      if ((*(int *)(*(int *)(*(int *)(iVar8 + puVar10[2]) * 4 + param_1[5]) + 0x38)
                           == *(int *)(puVar11[4] + iVar5)) ||
                         (*(int *)(iVar8 + puVar10[2]) == *(int *)(puVar11[4] + iVar5))) {
                        bVar2 = true;
                      }
                      uVar7 = uVar7 + 1;
                      iVar8 = iVar8 + 4;
                    } while (uVar7 < puVar10[1]);
                  }
                  iVar5 = iVar5 + 4;
                  uVar12 = uVar12 - 1;
                } while (uVar12 != 0);
              }
              if ((((!bVar2) && (!bVar3)) &&
                  (*(int *)(*(int *)(*(int *)puVar11[4] * 4 + param_1[5]) + 0x10) == 3)) &&
                 (uVar9 = param_3, param_5 == (int *)0x0)) {
                if (bVar4) {
                  puVar10[9] = 1;
                }
                else {
                  puVar11[9] = 1;
                }
              }
            }
          }
        }
      }
LAB_829a1b58:
      param_3 = uVar9 + 1;
    }
    if ((param_3 != param_4) && (param_5 != (int *)0x0)) {
      *param_5 = *param_5 + 1;
    }
  }
  return 0;
}

