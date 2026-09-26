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
extern int fn_82936448();
extern int fn_82936530();
extern int fn_82937A60();
extern int fn_8293B218();
extern unsigned int iStack_ac;
extern unsigned int uStack_b0;


longlong fn_8293BF58(int param_1,int param_2)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  char *pcVar4;
  int *piVar5;
  bool bVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  char *pcVar10;
  char *pcVar11;
  int iVar12;
  char *pcVar13;
  uint uVar14;
  int *piVar15;
  longlong lVar16;
  undefined4 *puVar17;
  uint uVar18;
  uint uStack_b0;
  int iStack_ac;
  char *pcStack_a8;
  char *pcStack_a4;
  
  lVar16 = -0x7fffbffb;
  lVar7 = 0;
  if (*(int *)(param_2 + 0x50) != 0) {
    fn_82937A60(param_1,0xffffffff820330c4);
    lVar7 = lVar16;
  }
  iStack_ac = *(int *)(param_2 + 0x70);
  if (iStack_ac != 0) {
    pcStack_a4 = "vertex";
    pcStack_a8 = "pixel";
    do {
      piVar5 = (int *)(iStack_ac + 8);
      iStack_ac = *(int *)(iStack_ac + 0xc);
      iVar12 = *(int *)(*piVar5 + 0xc);
      piVar15 = (int *)(iVar12 + 0x10);
      pcVar4 = *(char **)(*(int *)(*piVar5 + 8) + 0x18);
      if (iVar12 == 0) {
        piVar15 = (int *)0x0;
      }
      bVar6 = false;
      uVar14 = 0;
      puVar17 = (undefined4 *)0x8315ab90;
      do {
        if (bVar6) break;
        pcVar11 = pcVar4;
        pcVar10 = (char *)puVar17[-4];
        do {
          cVar1 = *pcVar11;
          cVar2 = *pcVar10;
          if (cVar1 == '\0') break;
          pcVar11 = pcVar11 + 1;
          pcVar10 = pcVar10 + 1;
        } while (cVar1 == cVar2);
        if (cVar1 != cVar2) goto LAB_8293c3c0;
        bVar6 = true;
        if (*(int *)(param_1 + 0x44) == 0) {
          iVar12 = puVar17[-2];
        }
        else {
          iVar12 = puVar17[-3];
        }
        if (iVar12 == 0) {
          pcVar11 = pcStack_a8;
          if (*(int *)(param_1 + 0x44) == 0) {
            pcVar11 = pcStack_a4;
          }
          fn_82937A60(param_1,0xffffffff82032f74,(char *)puVar17[-4],pcVar11);
          lVar7 = lVar16;
        }
        uVar18 = 1 << (*(byte *)(puVar17 + -1) & 0x3f);
        if ((*(uint *)(param_1 + 0x128) & uVar18) != 0) {
          fn_82937A60(param_1,0xffffffff82032f9c,puVar17[-4]);
          lVar7 = lVar16;
        }
        *(uint *)(param_1 + 0x128) = *(uint *)(param_1 + 0x128) | uVar18;
        if (*(int *)(param_1 + 300) == 0) {
          fn_82937A60(param_1,0xffffffff82032fbc);
          lVar7 = lVar16;
        }
        uVar18 = 0;
        uStack_b0 = 0;
        if ((int)lVar7 < 0) goto LAB_8293c3c0;
        bVar3 = *(byte *)((int)puVar17 + -3);
        if (bVar3 == 0) {
          if ((piVar15 == (int *)0x0) || (*piVar15 != 9)) {
            fn_82937A60(param_1,0xffffffff82032ff8,puVar17[-4]);
            lVar7 = -0x7fffbffb;
            goto LAB_8293c230;
          }
          puVar9 = (undefined4 *)*puVar17;
          pcVar11 = (char *)*puVar9;
          uVar8 = 0xffffffff82033020;
          pcVar13 = (char *)piVar15[2];
          pcVar10 = pcVar11;
          if (pcVar11 != (char *)0x0) {
LAB_8293c1cc:
            do {
              cVar1 = *pcVar13;
              cVar2 = *pcVar11;
              if (cVar1 != '\0') {
                pcVar11 = pcVar11 + 1;
                pcVar13 = pcVar13 + 1;
                if (cVar1 == cVar2) goto LAB_8293c1cc;
              }
              pcVar11 = pcVar10;
              if (cVar1 == cVar2) break;
              puVar9 = puVar9 + 2;
              pcVar11 = (char *)*puVar9;
              pcVar13 = (char *)piVar15[2];
              pcVar10 = pcVar11;
            } while (pcVar11 != (char *)0x0);
            if (pcVar11 != (char *)0x0) {
              uVar18 = (uint)*(byte *)(puVar9 + 1);
              goto LAB_8293c230;
            }
          }
LAB_8293c15c:
          fn_82937A60(param_1,uVar8,puVar17[-4]);
          lVar7 = lVar16;
          goto LAB_8293c3c0;
        }
        if (bVar3 == 1) {
          lVar7 = fn_82936530(piVar15,&uStack_b0);
          uVar18 = uStack_b0;
          if (lVar7 < 0) {
            fn_82937A60(param_1,0xffffffff82033040,puVar17[-4]);
            uVar18 = uStack_b0;
            goto LAB_8293c230;
          }
        }
        else if (bVar3 < 3) {
          lVar7 = fn_82936448(piVar15,&uStack_b0,0,*puVar17);
          uVar8 = 0xffffffff82033068;
          uVar18 = uStack_b0;
          if (lVar7 < 0) goto LAB_8293c15c;
        }
        else {
LAB_8293c230:
          if ((int)lVar7 < 0) goto LAB_8293c3c0;
        }
        switch(*(undefined1 *)(puVar17 + -1)) {
        case 0:
          *(uint *)(param_1 + 0x120) = *(uint *)(param_1 + 0x120) & 0xffffffc0 | uVar18 & 0x3f;
          goto LAB_8293c3c0;
        case 1:
          uVar18 = (uVar18 & 0x3f) << 8 | *(uint *)(param_1 + 0x120) & 0xffffc0ff;
          break;
        case 2:
          uVar18 = (uVar18 & 1) << 0x10 | *(uint *)(param_1 + 0x120) & 0xfffeffff;
          break;
        case 3:
          uVar18 = (uVar18 & 1) << 0x11 | *(uint *)(param_1 + 0x120) & 0xfffdffff;
          break;
        case 4:
          uVar18 = (uVar18 & 1) << 0x12 | *(uint *)(param_1 + 0x120) & 0xfffbffff;
          break;
        case 5:
          uVar18 = (uVar18 & 1) << 0x13 | *(uint *)(param_1 + 0x120) & 0xfff7ffff;
          break;
        case 6:
          uVar18 = (uVar18 & 0xf) << 0x14 | *(uint *)(param_1 + 0x120) & 0xff0fffff;
          break;
        case 7:
          uVar18 = (uVar18 & 7) << 0x18 | *(uint *)(param_1 + 0x120) & 0xf8ffffff;
          break;
        case 8:
          uVar18 = (uVar18 & 1) << 0x1b | *(uint *)(param_1 + 0x120) & 0xf7ffffff;
          break;
        case 9:
          uVar18 = (uVar18 & 7) << 0x1c | *(uint *)(param_1 + 0x120) & 0x8fffffff;
          break;
        case 10:
          uVar18 = uVar18 << 0x1f | *(uint *)(param_1 + 0x120) & 0x7fffffff;
          break;
        case 0xb:
          uVar18 = uVar18 & 1 | *(uint *)(param_1 + 0x124) & 0xfffffffe;
          goto code_r0x8293c308;
        case 0xc:
          uVar18 = (uVar18 & 1) << 1 | *(uint *)(param_1 + 0x124) & 0xfffffffd;
          goto code_r0x8293c308;
        case 0xd:
          *(char *)(param_1 + 0x126) = (char)uVar18;
          goto LAB_8293c3c0;
        case 0xe:
          uVar18 = (uVar18 & 1) << 0x10 | *(uint *)(param_1 + 0x124) & 0xfffeffff;
          goto code_r0x8293c308;
        case 0xf:
          uVar18 = (uVar18 & 1) << 0x11 | *(uint *)(param_1 + 0x124) & 0xfffdffff;
          goto code_r0x8293c308;
        case 0x10:
          uVar18 = (uVar18 & 1) << 0x12 | *(uint *)(param_1 + 0x124) & 0xfffbffff;
code_r0x8293c308:
          *(uint *)(param_1 + 0x124) = uVar18;
          goto LAB_8293c3c0;
        case 0x11:
          if (uVar18 != 0) {
            uVar18 = *(uint *)(param_1 + 0x60) | 8;
code_r0x8293c3bc:
            *(uint *)(param_1 + 0x60) = uVar18;
          }
          goto LAB_8293c3c0;
        case 0x12:
          if (uVar18 == 0) {
            uVar18 = *(uint *)(param_1 + 0x60) | 0x20;
            goto code_r0x8293c3bc;
          }
          goto LAB_8293c3c0;
        case 0x13:
          if (uVar18 == 0) {
            uVar18 = *(uint *)(param_1 + 0x60) | 0x10;
            goto code_r0x8293c3bc;
          }
          goto LAB_8293c3c0;
        case 0x14:
          lVar7 = fn_8293B218(param_1,pcVar4);
          if ((-1 < lVar7) && (uVar18 != 0)) {
            uVar18 = *(uint *)(param_1 + 0x60) | 0x40;
            goto code_r0x8293c3bc;
          }
          goto LAB_8293c3c0;
        case 0x15:
          if (uVar18 == 0) {
            uVar18 = *(uint *)(param_1 + 0x60) | 0x80;
            goto code_r0x8293c3bc;
          }
        default:
          goto LAB_8293c3c0;
        }
        *(uint *)(param_1 + 0x120) = uVar18;
LAB_8293c3c0:
        uVar14 = uVar14 + 1;
        puVar17 = puVar17 + 5;
      } while (uVar14 < 0xe);
      if (!bVar6) {
        fn_82937A60(param_1,0xffffffff820330a0,pcVar4);
        lVar7 = lVar16;
      }
    } while (iStack_ac != 0);
  }
  return lVar7;
}

