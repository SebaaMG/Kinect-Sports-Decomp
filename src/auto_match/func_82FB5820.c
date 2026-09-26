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
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int *auStack_110;
extern unsigned int *auStack_120;
extern unsigned int *auStack_130;
extern unsigned int *auStack_bc;
extern unsigned int *auStack_d0;
extern int fn_82F69148();
extern int fn_82FA5190();
extern int fn_82FA9410();
extern int fn_82FA9648();
extern int fn_82FABE28();
extern int fn_82FAE168();
extern int fn_82FB4580();
extern int fn_82FB4740();
extern int fn_82FB4A48();
extern int fn_82FB4BA8();
extern int fn_82FB4D78();
extern int fn_82FB4E60();
extern int fn_82FB56D8();
extern int fn_82FB6240();
extern unsigned int iStack_128;
extern unsigned int iStack_144;
extern unsigned int iStack_158;
extern unsigned int lbl_831BC768;
extern unsigned int uStack_100;
extern unsigned int uStack_104;
extern unsigned int uStack_124;
extern unsigned int uStack_12c;
extern unsigned int uStack_148;
extern unsigned int uStack_14c;
extern unsigned int uStack_154;
extern unsigned int uStack_15c;
extern unsigned int uStack_160;
extern unsigned int uStack_170;
extern unsigned int uStack_a4;
extern unsigned int uStack_c0;
extern unsigned int uStack_c4;
extern unsigned int uStack_c8;
extern unsigned int uStack_e0;
extern unsigned int uStack_e4;
extern unsigned int uStack_ec;
extern unsigned int uStack_f0;
extern unsigned int uStack_f4;
extern unsigned int uStack_f8;
extern unsigned int uStack_fc;


/* WARNING: Type propagation algorithm not settling */

void fn_82FB5820(int param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  char cVar7;
  char cVar8;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint *puVar9;
  uint *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  code *pcVar18;
  uint uStack_170;
  int *piStack_16c;
  uint uStack_160;
  uint uStack_15c;
  int iStack_158;
  undefined1 uStack_154;
  int *piStack_150;
  uint uStack_14c;
  undefined4 uStack_148;
  int iStack_144;
  int aiStack_140 [4];
  undefined1 auStack_130 [4];
  undefined4 uStack_12c;
  int iStack_128;
  undefined1 uStack_124;
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [12];
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  ushort uStack_e4;
  undefined4 uStack_e0;
  undefined1 auStack_d0 [8];
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  uint auStack_bc [6];
  ushort uStack_a4;
  
  fn_82FA9648(&uStack_170,*(undefined4 *)(param_1 + 0x38));
  if (piStack_16c == (int *)0x0) {
    (**(code **)(*(int *)(*param_4 + 4) + 4))(*param_4 + 4,0);
    *param_4 = 0;
    return;
  }
  uStack_154 = 0;
  uStack_15c = 0;
  piStack_150 = (int *)0x0;
  uStack_14c = 0;
  uVar11 = 0;
  uStack_148 = 0;
  cVar7 = fn_82FB4E60(param_1,&uStack_170,&uStack_15c,&piStack_150);
  uVar13 = uStack_14c;
  piVar3 = piStack_150;
  uVar12 = (ulonglong)uStack_14c;
  uVar14 = ZEXT48(piStack_150);
  if ((uVar12 == uVar14) || (cVar8 = fn_82FB4BA8(param_1,param_2), cVar8 != '\0')) {
    bVar1 = false;
    aiStack_140[1] = 0;
    uVar15 = uVar12 - 4;
    do {
      uVar13 = (uint)uVar12;
      if (*(short *)((int)piStack_16c + 0x32) < 0) {
LAB_82fb5c24:
        bVar1 = true;
        break;
      }
      iVar4 = fn_82FB4740(param_1,&uStack_170,param_4,param_3,aiStack_140 + 1);
      if ((*param_4 == 0) ||
         (iVar5 = fn_82FABE28(*param_4,iVar4 + 0x18,0,&iStack_158), iVar5 != 1))
      goto LAB_82fb5c24;
      if ((*(undefined4 **)(iVar4 + 0x30) == (undefined4 *)0x0) ||
         (piVar6 = (int *)fn_82FB4D78(param_1,**(undefined4 **)(iVar4 + 0x30),auStack_120),
         piVar6 == (int *)0x0)) {
        iVar5 = fn_82FB4580(param_1,iVar4,&uStack_170,*param_4,&uStack_160);
        if (iVar5 != 1) goto LAB_82fb5b4c;
        uVar11 = fn_82FB56D8(param_1,iVar4,&uStack_170,*param_4,&uStack_160);
        uVar12 = uVar11;
LAB_82fb5c20:
        if ((uVar12 & 0xffffffff) == 0) goto LAB_82fb5c24;
        break;
      }
      uStack_104 = *(undefined4 *)(iVar4 + 0xc);
      uStack_100 = *(undefined4 *)(iVar4 + 0x10);
      uStack_fc = *(undefined4 *)(iVar4 + 0x14);
      iVar5 = *(int *)(iVar4 + 0x30);
      uStack_e0 = 0;
      uStack_f8 = *(undefined4 *)(iVar5 + 4);
      uStack_f4 = *(undefined4 *)(iVar5 + 8);
      uStack_f0 = *(undefined4 *)(iVar5 + 0xc);
      uStack_ec = 0;
      uStack_e4 = (ushort)((uint)*(undefined4 *)(iVar5 + 0x1c) >> 0x1f) << 0xc | uStack_e4 & 0xfff;
      iVar5 = fn_82FABE28(piVar6,&uStack_f8,0,&iStack_144);
      if (iVar5 != 1) goto LAB_82fb5c24;
      (**(code **)(*piVar6 + 0x20))(piVar6);
      iVar5 = fn_82FAE168();
      iVar2 = iStack_158;
      iStack_158 = iStack_158 - iVar5;
      if (iStack_158 < iStack_144) {
        iStack_158 = iStack_144;
      }
      iVar5 = fn_82FB4580(param_1,auStack_110,&uStack_170,piVar6,&uStack_160);
      if (iVar5 == 1) {
        iVar5 = *(int *)(iVar4 + 0x30);
        puVar9 = auStack_bc;
        puVar10 = (uint *)(iVar4 + 0x14);
        uStack_c8 = *(undefined4 *)(iVar5 + 0x10);
        uStack_c4 = *(undefined4 *)(iVar5 + 0x14);
        lVar17 = 6;
        uStack_c0 = *(undefined4 *)(iVar5 + 0x18);
        auStack_bc[0] =
             *(uint *)(iVar5 + 0x1c) >> 4 & 0x4000000 | auStack_bc[0] & 0x3ffffff | 0x38000000;
        do {
          puVar10 = puVar10 + 1;
          puVar9 = puVar9 + 1;
          *puVar9 = *puVar10;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        if ((uStack_a4 & 0xe000) == 0x2000) {
          uStack_a4 = uStack_a4 & 0x1fff;
        }
        fn_82FA9648(&piStack_150,*(undefined4 *)(param_1 + 0x38),piVar6);
        iStack_128 = iVar2;
        uStack_124 = 1;
        uStack_12c = fn_82FA9410(piStack_16c,(ulonglong)uStack_160 + (ulonglong)uStack_15c);
        iVar5 = fn_82FB4580(param_1,auStack_d0,&piStack_150,*param_4,auStack_130);
        if (iVar5 == 1) {
          iStack_158 = iStack_144;
          uVar11 = fn_82FB56D8(param_1,auStack_110,&uStack_170,piVar6,&uStack_160);
          bVar1 = (uVar11 & 0xffffffff) == 0;
          if (!bVar1) {
            uVar12 = fn_82FB56D8(param_1,auStack_d0,&piStack_150,*param_4,auStack_130);
            goto LAB_82fb5c20;
          }
          break;
        }
      }
      (**(code **)(piVar6[1] + 4))(piVar6 + 1,0);
      if (iVar5 == 1) break;
LAB_82fb5b4c:
      if (cVar7 == '\0') {
        piStack_16c = (int *)(**(code **)(*piStack_16c + 0xc))
                                       (piStack_16c,param_1,&uStack_170,aiStack_140);
        if (piStack_16c == (int *)0x0) goto LAB_82fb5c24;
        uStack_15c = aiStack_140[0] + uStack_15c;
      }
      else {
        iVar4 = *piVar3;
        cVar7 = '\0';
        piVar6 = (int *)fn_82FB6240(param_1 + 0x54);
        if ((piVar6 == (int *)0x0) || (*piVar6 = iVar4, iVar4 == 0)) goto LAB_82fb5c24;
        if (uVar14 < (uVar15 & 0xffffffff)) {
          fn_82F69148(uVar14,uVar14 + 4,
                       ((((-1 - uVar14) + uVar15 & 0xffffffff) >> 2) + 1) * 4 & 0xfffffffc);
        }
        uVar12 = uVar12 - 4;
        uVar15 = uVar15 - 4;
        uStack_170 = (**(code **)(**(int **)(iVar4 + 0x1c) + 0x18))();
        if (uStack_170 == 0) {
          piStack_16c = (int *)0x0;
          uStack_15c = *(uint *)(iVar4 + 0x48);
        }
        else {
          piStack_16c = *(int **)(uStack_170 + 4);
          uStack_15c = *(uint *)(iVar4 + 0x48);
        }
      }
      uVar13 = (uint)uVar12;
    } while (iVar5 != 1);
    if ((!bVar1) || (iVar4 = *param_4, iVar4 == 0)) goto LAB_82fb5c5c;
    pcVar18 = *(code **)(*(int *)(iVar4 + 4) + 4);
  }
  else {
    iVar4 = *param_4;
    pcVar18 = *(code **)(*(int *)(iVar4 + 4) + 4);
  }
  (*pcVar18)(iVar4 + 4,0);
  *param_4 = 0;
LAB_82fb5c5c:
  uVar13 = (int)(uVar13 - (int)piVar3) >> 2;
  lVar17 = (longlong)(int)uVar13 + -1;
  if (0 < lVar17) {
    lVar16 = ((ulonglong)uVar13 & 0x3fffffff) * 4 + uVar14;
    do {
      lVar16 = lVar16 + -4;
      fn_82FB4A48(*(undefined4 *)lVar16,0,0);
      lVar17 = lVar17 + -1;
    } while (0 < lVar17);
  }
  if ((int)lVar17 == 0) {
    fn_82FB4A48(*piVar3,uVar11,1);
  }
  if (uVar14 != 0) {
    fn_82FA5190(lbl_831BC768,uVar14);
  }
  return;
}

