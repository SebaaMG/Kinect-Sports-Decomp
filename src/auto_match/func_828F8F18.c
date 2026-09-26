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
extern unsigned int *auStack_b0;
extern int fn_828F5848();
extern int fn_828F8968();
extern int fn_828F9D68();
extern int fn_828F9D90();
extern int fn_828FA8D8();
extern int fn_828FBB60();
extern int fn_829301D0();
extern int fn_82930318();
extern int fn_829304E0();
extern int fn_82930940();
extern int fn_82BA02A8();
extern unsigned int stack0x00000000;


/* WARNING: Removing unreachable block (ram,0x828f9648) */
/* WARNING: Removing unreachable block (ram,0x828f9650) */
/* WARNING: Removing unreachable block (ram,0x828f9664) */
/* WARNING: Removing unreachable block (ram,0x828f965c) */
/* WARNING: Removing unreachable block (ram,0x828f9668) */
/* WARNING: Removing unreachable block (ram,0x828f9678) */
/* WARNING: Removing unreachable block (ram,0x828f9670) */
/* WARNING: Removing unreachable block (ram,0x828f967c) */
/* WARNING: Removing unreachable block (ram,0x828f9688) */
/* WARNING: Removing unreachable block (ram,0x828f968c) */
/* WARNING: Removing unreachable block (ram,0x828f9698) */
/* WARNING: Removing unreachable block (ram,0x828f969c) */
/* WARNING: Removing unreachable block (ram,0x828f96a8) */
/* WARNING: Removing unreachable block (ram,0x828f96ac) */
/* WARNING: Removing unreachable block (ram,0x828f96b4) */
/* WARNING: Removing unreachable block (ram,0x828f96bc) */
/* WARNING: Removing unreachable block (ram,0x828f96c4) */
/* WARNING: Removing unreachable block (ram,0x828f96d0) */
/* WARNING: Removing unreachable block (ram,0x828f96d8) */
/* WARNING: Removing unreachable block (ram,0x828f96ec) */
/* WARNING: Removing unreachable block (ram,0x828f96fc) */
/* WARNING: Removing unreachable block (ram,0x828f9840) */
/* WARNING: Removing unreachable block (ram,0x828f9704) */
/* WARNING: Removing unreachable block (ram,0x828f9728) */
/* WARNING: Removing unreachable block (ram,0x828f977c) */
/* WARNING: Removing unreachable block (ram,0x828f9784) */
/* WARNING: Removing unreachable block (ram,0x828f979c) */
/* WARNING: Removing unreachable block (ram,0x828f9820) */
/* WARNING: Removing unreachable block (ram,0x828f9830) */
/* WARNING: Removing unreachable block (ram,0x828f9828) */
/* WARNING: Removing unreachable block (ram,0x828f9834) */
/* WARNING: Removing unreachable block (ram,0x828f9844) */
/* WARNING: Removing unreachable block (ram,0x828f97a8) */
/* WARNING: Removing unreachable block (ram,0x828f97e0) */
/* WARNING: Removing unreachable block (ram,0x828f97fc) */
/* WARNING: Removing unreachable block (ram,0x828f97f0) */
/* WARNING: Removing unreachable block (ram,0x828f9800) */
/* WARNING: Removing unreachable block (ram,0x828f97b0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 fn_828F8F18(int param_1,int *param_2,int param_3,int param_4)

{
  char cVar1;
  undefined4 *puVar2;
  bool bVar3;
  bool bVar4;
  ulonglong uVar5;
  int iVar7;
  int iVar8;
  char *pcVar9;
  undefined8 uVar6;
  char *pcVar10;
  int iVar11;
  int *piVar12;
  char cVar13;
  int *piVar14;
  int *piVar15;
  int iVar16;
  int *piVar17;
  int aiStack_e0 [4];
  int aiStack_d0 [2];
  char cStack_c8;
  char cStack_c7;
  undefined1 auStack_b0 [176];
  
  aiStack_e0[1] = 0;
  if (param_3 == 0) {
    piVar12 = (int *)(&stack0x00000000 + -0xe0);
    for (; param_4 != 0; param_4 = *(int *)(param_4 + 0xc)) {
      uVar5 = fn_82930318(0x30);
      if ((uVar5 & 0xffffffff) == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = fn_82930940(uVar5,param_4 + 0x10);
      }
      *piVar12 = iVar7;
      if (iVar7 == 0) {
        return 0;
      }
      piVar12 = (int *)(iVar7 + 0xc);
    }
    *piVar12 = *(int *)(param_1 + 0x70);
LAB_828f9858:
    uVar6 = 1;
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  else {
    iVar7 = *(int *)(param_1 + 0x70);
    if (iVar7 == 0) {
      puVar2 = *(undefined4 **)(param_1 + 0x278);
      pcVar9 = (char *)*puVar2;
      if (pcVar9 < (char *)puVar2[1]) {
        do {
          cVar13 = *pcVar9;
          if ((cVar13 != ' ') && ((cVar13 < '\t' || ('\r' < cVar13)))) break;
          pcVar9 = pcVar9 + 1;
        } while (pcVar9 < *(char **)(*(int *)(param_1 + 0x278) + 4));
        if ((pcVar9 < (char *)puVar2[1]) && (*pcVar9 != '(')) goto LAB_828f9868;
      }
      iVar7 = fn_828FBB60(puVar2,*(undefined4 *)(param_1 + 0x2a0),(int *)(param_1 + 0x280));
      if ((-1 < iVar7) && (*(int *)(param_1 + 0x280) == 1)) {
        pcVar10 = (char *)(param_1 + 0x288);
        pcVar9 = "(";
        do {
          cVar13 = *pcVar10;
          cVar1 = *pcVar9;
          if (cVar13 == '\0') break;
          pcVar10 = pcVar10 + 1;
          pcVar9 = pcVar9 + 1;
        } while (cVar13 == cVar1);
        if (cVar13 == cVar1) goto LAB_828f90d8;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x280) = *(undefined8 *)(iVar7 + 0x10);
      *(undefined8 *)(param_1 + 0x288) = *(undefined8 *)(iVar7 + 0x18);
      *(undefined8 *)(param_1 + 0x290) = *(undefined8 *)(iVar7 + 0x20);
      *(undefined8 *)(param_1 + 0x298) = *(undefined8 *)(iVar7 + 0x28);
      if (*(int *)(param_1 + 0x280) == 1) {
        pcVar10 = (char *)(param_1 + 0x288);
        pcVar9 = "(";
        do {
          cVar13 = *pcVar10;
          cVar1 = *pcVar9;
          if (cVar13 == '\0') break;
          pcVar10 = pcVar10 + 1;
          pcVar9 = pcVar9 + 1;
        } while (cVar13 == cVar1);
        if (cVar13 == cVar1) {
          *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(iVar7 + 0xc);
          *(undefined4 *)(iVar7 + 0xc) = 0;
LAB_828f90d8:
          iVar7 = 1;
          piVar12 = (int *)(&stack0x00000000 + -0xdc);
          piVar14 = (int *)0x0;
          do {
            fn_828F8968(param_1,&stack0x00000000 + -0xd0);
            if (*(int *)(param_1 + 0x54) != 0) {
              return 0;
            }
            if (aiStack_d0[0] == 0xd) {
              fn_828FA8D8(param_1 + 0x18,param_2,0x5eb,0xffffffff820296ec);
              return 0;
            }
            if (*piVar12 == 0) {
              uVar5 = fn_82930318(0x14);
              if ((uVar5 & 0xffffffff) == 0) {
                iVar8 = 0;
              }
              else {
                iVar8 = fn_829304E0(uVar5,0,0,0xffffffff82029718);
              }
              *piVar12 = iVar8;
              if (iVar8 == 0) {
                return 0;
              }
              piVar14 = (int *)(iVar8 + 8);
            }
            if ((((iVar7 == 1) && (aiStack_d0[0] == 1)) &&
                ((cStack_c8 == ',' || (cStack_c8 == ')')))) && (cStack_c7 == '\0')) {
              piVar12 = (int *)(*piVar12 + 0xc);
LAB_828f91d4:
              if (cStack_c7 == '\0') {
                if (cStack_c8 == '(') {
LAB_828f9220:
                  iVar7 = iVar7 + 1;
                }
                else {
                  if (cStack_c8 != ')') {
                    if (cStack_c8 == '[') goto LAB_828f9220;
                    if (cStack_c8 != ']') {
                      if (cStack_c8 == '{') goto LAB_828f9220;
                      if (cStack_c8 != '}') goto LAB_828f9224;
                    }
                  }
                  iVar7 = iVar7 + -1;
                }
              }
            }
            else {
              uVar5 = fn_82930318(0x30);
              if ((uVar5 & 0xffffffff) == 0) {
                iVar8 = 0;
              }
              else {
                iVar8 = fn_82930940(uVar5,&stack0x00000000 + -0xd0);
              }
              *piVar14 = iVar8;
              if (iVar8 == 0) {
                return 0;
              }
              piVar14 = (int *)(iVar8 + 0xc);
              if (aiStack_d0[0] == 1) goto LAB_828f91d4;
            }
LAB_828f9224:
            iVar11 = aiStack_e0[1];
            iVar8 = param_3;
          } while (iVar7 != 0);
          do {
            if ((iVar11 == 0) || (*(int *)(iVar11 + 8) == 0)) break;
            iVar8 = *(int *)(iVar8 + 0xc);
            iVar11 = *(int *)(iVar11 + 0xc);
          } while (iVar8 != 0);
          if (iVar8 != 0) {
            if (*param_2 == 9) {
              uVar5 = (ulonglong)(uint)param_2[2];
            }
            else {
              uVar5 = 0xffffffff821cbf88;
            }
            uVar6 = 0xffffffff820296c0;
LAB_828f92a4:
            fn_828FA8D8(param_1 + 0x18,param_2,0x5ec,uVar6,uVar5);
            return 0;
          }
          if (iVar11 != 0) {
            if (*param_2 == 9) {
              uVar5 = (ulonglong)(uint)param_2[2];
            }
            else {
              uVar5 = 0xffffffff821cbf88;
            }
            uVar6 = 0xffffffff8202969c;
            goto LAB_828f92a4;
          }
          bVar3 = false;
          bVar4 = false;
          piVar12 = (int *)0x0;
          piVar14 = (int *)(&stack0x00000000 + -0xe0);
          if (param_4 != 0) {
            do {
              piVar17 = (int *)(param_4 + 0x10);
              piVar15 = piVar14;
              if (((bVar3) || (bVar4)) || (*piVar17 != 1)) {
LAB_828f93c0:
                if (*piVar17 == 9) {
                  iVar8 = aiStack_e0[1];
                  iVar7 = param_3;
                  do {
                    pcVar9 = *(char **)(iVar7 + 0x18);
                    pcVar10 = *(char **)(param_4 + 0x18);
                    do {
                      cVar13 = *pcVar9;
                      cVar1 = *pcVar10;
                      if (cVar13 == '\0') break;
                      pcVar9 = pcVar9 + 1;
                      pcVar10 = pcVar10 + 1;
                    } while (cVar13 == cVar1);
                    if (cVar13 == cVar1) break;
                    iVar7 = *(int *)(iVar7 + 0xc);
                    iVar8 = *(int *)(iVar8 + 0xc);
                  } while (iVar7 != 0);
                  if (iVar7 == 0) goto LAB_828f946c;
                  for (iVar7 = *(int *)(iVar8 + 8); iVar7 != 0; iVar7 = *(int *)(iVar7 + 0xc)) {
                    uVar5 = fn_82930318(0x30);
                    if ((uVar5 & 0xffffffff) == 0) {
                      iVar8 = 0;
                    }
                    else {
                      iVar8 = fn_82930940(uVar5,iVar7 + 0x10);
                    }
                    *piVar15 = iVar8;
                    if (iVar8 == 0) {
                      return 0;
                    }
                    piVar15 = (int *)(iVar8 + 0xc);
                  }
                }
                else {
LAB_828f946c:
                  uVar5 = fn_82930318(0x30);
                  if ((uVar5 & 0xffffffff) == 0) {
                    iVar7 = 0;
                  }
                  else {
                    iVar7 = fn_82930940(uVar5,piVar17);
                  }
                  *piVar14 = iVar7;
                  if (iVar7 == 0) {
                    return 0;
                  }
                  piVar15 = (int *)(iVar7 + 0xc);
                }
                if ((bVar3) || (bVar4)) {
                  iVar8 = 0;
                  iVar11 = 1;
                  for (iVar7 = *piVar14; iVar7 != 0; iVar7 = *(int *)(iVar7 + 0xc)) {
                    if ((iVar8 != 0) && (iVar8 != *(int *)(iVar7 + 0x28))) {
                      iVar11 = iVar11 + 1;
                    }
                    iVar8 = fn_828F5848(param_1,*(undefined4 *)(iVar7 + 0x28),
                                          *(undefined4 *)(iVar7 + 0x2c),0,0);
                    iVar11 = iVar8 + iVar11;
                    iVar8 = *(int *)(iVar7 + 0x2c) + *(int *)(iVar7 + 0x28);
                  }
                  pcVar9 = (char *)fn_829301D0(param_1,iVar11 + 1,1);
                  if (pcVar9 == (char *)0x0) {
                    return 0;
                  }
                  iVar8 = 0;
                  iVar16 = 1;
                  cVar13 = (-bVar3 & 0xfbU) + 0x27;
                  *pcVar9 = cVar13;
                  for (iVar7 = *piVar14; iVar7 != 0; iVar7 = *(int *)(iVar7 + 0xc)) {
                    if ((iVar8 != 0) && (iVar8 != *(int *)(iVar7 + 0x28))) {
                      pcVar9[iVar16] = ' ';
                      iVar16 = iVar16 + 1;
                    }
                    iVar8 = fn_828F5848(param_1,*(undefined4 *)(iVar7 + 0x28),
                                          *(undefined4 *)(iVar7 + 0x2c),pcVar9 + iVar16,
                                          (iVar11 + 1) - iVar16);
                    iVar16 = iVar8 + iVar16;
                    iVar8 = *(int *)(iVar7 + 0x2c) + *(int *)(iVar7 + 0x28);
                  }
                  pcVar9[iVar16] = cVar13;
                  fn_828F9D68(&stack0x00000000 + -0xb0);
                  iVar7 = fn_828F9D90(&stack0x00000000 + -0xb0,pcVar9,iVar16 + 1,piVar12[4],
                                       piVar12[5],param_1,param_1 + 0x18);
                  if ((iVar7 < 0) ||
                     (iVar7 = fn_828FBB60(&stack0x00000000 + -0xb0,
                                                *(undefined4 *)(param_1 + 0x2a0),
                                                &stack0x00000000 + -0xd0), iVar7 < 0)) {
LAB_828f9814:
                    fn_82BA02A8(&stack0x00000000 + -0xb0);
                    return 0;
                  }
                  uVar5 = fn_82930318(0x30);
                  if ((uVar5 & 0xffffffff) == 0) {
                    iVar7 = 0;
                  }
                  else {
                    iVar7 = fn_82930940(uVar5,&stack0x00000000 + -0xd0);
                  }
                  *piVar14 = iVar7;
                  if (iVar7 == 0) goto LAB_828f9814;
                  bVar4 = false;
                  bVar3 = false;
                  fn_82BA02A8(&stack0x00000000 + -0xb0);
                  piVar15 = (int *)(iVar7 + 0xc);
                }
              }
              else {
                pcVar10 = (char *)(param_4 + 0x18);
                pcVar9 = "#";
                do {
                  cVar13 = *pcVar10;
                  cVar1 = *pcVar9;
                  if (cVar13 == '\0') break;
                  pcVar10 = pcVar10 + 1;
                  pcVar9 = pcVar9 + 1;
                } while (cVar13 == cVar1);
                if (cVar13 == cVar1) {
                  bVar3 = true;
                  piVar12 = piVar17;
                }
                else {
                  pcVar10 = (char *)(param_4 + 0x18);
                  pcVar9 = "#@";
                  do {
                    cVar13 = *pcVar10;
                    cVar1 = *pcVar9;
                    if (cVar13 == '\0') break;
                    pcVar10 = pcVar10 + 1;
                    pcVar9 = pcVar9 + 1;
                  } while (cVar13 == cVar1);
                  if (cVar13 != cVar1) goto LAB_828f93c0;
                  bVar4 = true;
                  piVar12 = piVar17;
                }
              }
              piVar14 = piVar15;
              param_4 = *(int *)(param_4 + 0xc);
            } while (param_4 != 0);
          }
          goto LAB_828f9858;
        }
      }
    }
LAB_828f9868:
    uVar6 = 2;
  }
  return uVar6;
}

