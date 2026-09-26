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
extern int fn_82935720();
extern int fn_82936448();
extern int fn_82936530();
extern unsigned int iStack_c0;
extern unsigned int iStack_c8;
extern unsigned int iStack_d4;
extern unsigned int lbl_8315B0DC;
extern unsigned int uStack_a8;
extern unsigned int uStack_bc;
extern unsigned int uStack_c4;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;
extern unsigned int uStack_d8;
extern unsigned int uStack_dc;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

char fn_82936610(int param_1,uint *param_2,uint *param_3,uint *param_4,undefined1 *param_5,
                  code *param_6,undefined8 param_7)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  char *pcVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  ulonglong uVar13;
  char *pcVar14;
  char *pcVar15;
  undefined4 *puVar16;
  uint uVar17;
  uint uVar19;
  ulonglong uVar18;
  ulonglong uVar20;
  uint *puStack0000001c;
  uint *puStack00000024;
  uint *puStack0000002c;
  undefined1 *puStack00000034;
  char cStack_e0;
  uint uStack_dc;
  uint uStack_d8;
  int iStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  int iStack_c8;
  uint uStack_c4;
  int iStack_c0;
  uint uStack_bc;
  char *pcStack_b8;
  uint uStack_a8;
  
  iStack_c8 = *(int *)(param_1 + 0x34);
  iStack_d4 = *(int *)(param_1 + 0x70);
  uStack_a8 = 0;
  cStack_e0 = '\0';
  uStack_d8 = 0;
  uStack_d0 = 0xffffffff;
  uStack_c4 = 0;
  uVar17 = 0x80000;
  uVar18 = (ulonglong)(iStack_c8 == 1) << 0x1e;
  uVar19 = (uint)uVar18;
  puStack0000001c = param_2;
  puStack00000024 = param_3;
  puStack0000002c = param_4;
  puStack00000034 = param_5;
  if (iStack_d4 != 0) {
    pcStack_b8 = "Expected a value for option \"%s\".";
    uVar17 = 0x80000;
    do {
      piVar12 = (int *)(iStack_d4 + 8);
      iStack_d4 = *(int *)(iStack_d4 + 0xc);
      iVar11 = *(int *)(*piVar12 + 8);
      if (*(int *)(iVar11 + 4) == 3) {
        pcVar5 = *(char **)(iVar11 + 0x18);
        iVar6 = *(int *)(*piVar12 + 0xc);
        if (((iStack_c8 == 0) && (uStack_d0 == 0xffffffff)) && (cStack_e0 == '\0')) {
          if (iVar6 == 0) {
            iVar11 = fn_82935720(iVar11 + 0x10,&iStack_c0,&uStack_bc);
            if (iVar11 != 0) {
              uStack_d0 = iStack_c0 << 4 | uStack_bc;
              goto LAB_82936848;
            }
            (*param_6)(param_7,0xffffffff82031874,pcVar5);
          }
          else {
            (*param_6)(param_7,0xffffffff82031830);
          }
          cStack_e0 = '\x01';
        }
        else {
          pcVar15 = pcStack_b8;
          if (iVar6 != 0) {
            if (*(int *)(iVar6 + 4) != 3) goto LAB_82936728;
            piVar12 = (int *)(iVar6 + 0x10);
            uVar13 = 0;
            puVar16 = (undefined4 *)0x8315aec8;
            do {
              pcVar15 = (char *)*puVar16;
              pcVar14 = pcVar5;
              do {
                cVar1 = *pcVar15;
                cVar2 = *pcVar14;
                if (cVar1 == '\0') break;
                pcVar15 = pcVar15 + 1;
                pcVar14 = pcVar14 + 1;
              } while (cVar1 == cVar2);
              if (cVar1 == cVar2) {
                if (iStack_c8 == 1) {
                  pcVar15 = "Option \"%s\" is not allowed for a vfetch_mini instruction.";
                  if (puVar16[2] == 0) break;
                }
                else if ((iStack_c8 == 0) && (puVar16[3] == 0)) {
                  pcVar15 = "Option \"%s\" is not allowed for a vfetch instruction.";
                  break;
                }
                bVar3 = *(byte *)(puVar16 + 1);
                uVar19 = 1 << (bVar3 & 0x3f);
                if ((uVar19 & uStack_d8) == 0) {
                  uVar13 = 0;
                  bVar4 = *(byte *)((int)puVar16 + 5);
                  uVar20 = 0;
                  uStack_d8 = uVar19 | uStack_d8;
                  uStack_dc = 0;
                  uStack_cc = 0;
                  if (bVar4 == 0) {
                    if (*piVar12 == 9) {
                      puVar16 = (undefined4 *)puVar16[4];
                      pcVar15 = (char *)*puVar16;
                      goto LAB_82936a2c;
                    }
                    pcVar15 = "Expected an id value for option \"%s\".";
                  }
                  else {
                    if (bVar4 != 1) {
                      if (bVar4 < 3) {
                        iVar11 = fn_82936448(piVar12,&uStack_dc,puVar16[5],puVar16[4]);
                        if (-1 < iVar11) goto LAB_82936988;
                      }
                      else {
                        if (bVar4 != 3) goto LAB_8293698c;
                        iVar11 = fn_82936448(piVar12,&uStack_cc,
                                               -1 - ((ulonglong)(uint)(1 << (puVar16[4] - 1 & 0x3f))
                                                    - 1));
                        if (-1 < iVar11) {
                          uVar20 = (ulonglong)uStack_cc;
                          goto LAB_8293698c;
                        }
                      }
                      (*param_6)(param_7,0xffffffff8203199c);
                      goto LAB_82936848;
                    }
                    iVar11 = fn_82936530(piVar12,&uStack_dc);
                    if (-1 < iVar11) {
LAB_82936988:
                      uVar13 = (ulonglong)uStack_dc;
                      goto LAB_8293698c;
                    }
                    pcVar15 = "Expected boolean value option \"%s\".";
                  }
                }
                else {
                  pcVar15 = "Option \"%s\" defined more than once.";
                }
                break;
              }
              uVar13 = uVar13 + 0x18;
              puVar16 = puVar16 + 6;
              pcVar15 = "Unknown option \"%s\".";
            } while ((uVar13 & 0xffffffff) < 0xd8);
          }
          (*param_6)(param_7,pcVar15,pcVar5);
        }
      }
      else {
LAB_82936728:
        *puStack00000034 = 1;
      }
LAB_82936848:
      uVar19 = (uint)uVar18;
    } while (iStack_d4 != 0);
  }
  uVar10 = uStack_c4;
  puVar9 = puStack0000002c;
  puVar8 = puStack00000024;
  puVar7 = puStack0000001c;
  if ((iStack_c8 == 0) || ((uStack_d8 & 0x10) != 0)) {
    if ((uStack_c4 != 0) && ((uVar17 & 0x38000000) != 0)) {
      (*param_6)(param_7,0xffffffff820317a8);
    }
  }
  else {
    (*param_6)(param_7,0xffffffff820317f8,(&lbl_8315B0DC)[iStack_c8]);
  }
  *puVar7 = uVar17;
  puVar7[1] = uVar19;
  puVar7[2] = uStack_a8;
  *puVar8 = uStack_d0;
  *puVar9 = uVar10;
  return cStack_e0;
LAB_82936a2c:
  pcVar14 = *(char **)(iVar6 + 0x18);
  if (pcVar15 == (char *)0x0) {
    (*param_6)(param_7,0xffffffff82031954,*(char **)(iVar6 + 0x18),pcVar5);
  }
  else {
    do {
      cVar1 = *pcVar15;
      cVar2 = *pcVar14;
      if (cVar1 == '\0') break;
      pcVar15 = pcVar15 + 1;
      pcVar14 = pcVar14 + 1;
    } while (cVar1 == cVar2);
    if (cVar1 != cVar2) goto code_r0x82936a28;
    uVar13 = (ulonglong)*(byte *)(puVar16 + 1);
LAB_8293698c:
    switch(bVar3) {
    case 0:
      uVar17 = (uint)((uVar13 - 1 & 0xffffffff) << 0x1b) & 0x38000000 | uVar17 & 0xc7ffffff;
      break;
    case 1:
      uVar18 = (uVar13 & 1) << 0xc | uVar18 & 0xffffffffffffefff;
      break;
    case 2:
      uVar18 = (uVar13 & 1) << 0xd | uVar18 & 0xffffffffffffdfff;
      break;
    case 3:
      uVar18 = (uVar13 & 1) << 0xf | uVar18 & 0xffffffffffff7fff;
      break;
    case 4:
      uVar18 = (uVar13 & 0x3f) << 0x10 | uVar18 & 0xffffffffffc0ffff;
      break;
    case 5:
      uVar18 = (uVar20 & 0x3f) << 0x18 | uVar18 & 0xffffffffc0ffffff;
      break;
    case 6:
      uVar18 = (uVar13 & 1) << 0x1e | uVar18 & 0xffffffffbfffffff;
      break;
    case 7:
      uStack_a8 = (uint)uVar13 & 0xff | uStack_a8 & 0xffffff00;
      break;
    case 8:
      uStack_a8 = (uint)(uVar20 << 8) & 0x7fffff00 | uStack_a8 & 0x800000ff;
      break;
    case 10:
      uStack_c4 = (uint)uVar13;
    }
  }
  goto LAB_82936848;
code_r0x82936a28:
  puVar16 = puVar16 + 2;
  pcVar15 = (char *)*puVar16;
  goto LAB_82936a2c;
}

