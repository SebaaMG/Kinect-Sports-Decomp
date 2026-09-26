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
extern unsigned int *auStack_100;
extern unsigned int *auStack_110;
extern unsigned int *auStack_120;
extern unsigned int *auStack_130;
extern unsigned int *auStack_140;
extern unsigned int *auStack_ec;
extern int fn_8267BE38();
extern int fn_8267C498();
extern int fn_826824B0();
extern int fn_8268D660();
extern int fn_8268D758();
extern int fn_826944C8();
extern int fn_82695750();
extern int fn_82696330();
extern int fn_82696CB8();
extern int fn_82699520();
extern int fn_82699580();
extern int fn_82699C58();
extern int fn_8269A190();
extern int fn_8269A418();
extern int fn_8269A990();
extern int fn_8269AD40();
extern int fn_8269B718();
extern int fn_8269F500();
extern int fn_8269FD00();
extern int fn_826B0F10();
extern int fn_826BD928();
extern int fn_826C3768();
extern int fn_826C7200();
extern int fn_826C7758();
extern int fn_826C8D00();
extern int fn_826C9460();
extern int fn_826CD3B0();
extern int fn_826CD420();
extern int fn_826CD840();
extern int fn_826CEC00();
extern int fn_826D1050();
extern int fn_826D1700();
extern int fn_826D2290();
extern int fn_826DBC20();
extern int fn_826DCF88();
extern int fn_826F5D70();
extern int fn_82700248();
extern int fn_82701F78();
extern int fn_82704760();
extern int fn_82705900();
extern unsigned int iStack0000001c;
extern unsigned int iStack_12c;
extern unsigned int iStack_174;
extern unsigned int iStack_178;
extern unsigned int iStack_17c;
extern unsigned int iStack_180;
extern unsigned int iStack_f0;
extern unsigned int uStack00000044;
extern unsigned int uStack_143;
extern unsigned int uStack_144;
extern unsigned int uStack_145;
extern unsigned int uStack_146;
extern unsigned int uStack_148;
extern unsigned int uStack_14c;
extern unsigned int uStack_150;
extern unsigned int uStack_154;
extern unsigned int uStack_158;
extern unsigned int uStack_160;
extern unsigned int uStack_184;
extern unsigned int uStack_188;
extern unsigned int uStack_18c;
extern unsigned int uStack_190;
extern unsigned int uStack_1a0;
extern unsigned int uStack_1a4;
extern unsigned int uStack_1a8;
extern unsigned int uStack_a6;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

int * fn_826D2B68(int *param_1,int param_2,int *param_3,int *param_4,ulonglong param_5,int param_6
                   ,ulonglong param_7,undefined8 *param_8)

{
  bool bVar1;
  undefined2 uVar2;
  int *piVar3;
  bool bVar4;
  bool bVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar9;
  int *piVar10;
  char cVar16;
  int *piVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar8;
  uint uVar14;
  int iVar15;
  undefined8 uVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  int iStack0000001c;
  int *piStack00000024;
  uint uStack00000044;
  int in_stack_00000054;
  byte bStack_1b0;
  char acStack_1af [7];
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  uint uStack_184;
  int iStack_180;
  int iStack_17c;
  int iStack_178;
  int iStack_174;
  byte bStack_170;
  int aiStack_16c [3];
  undefined8 uStack_160;
  undefined4 uStack_158;
  uint uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined2 uStack_148;
  undefined1 uStack_146;
  undefined1 uStack_145;
  undefined1 uStack_144;
  undefined1 uStack_143;
  undefined4 auStack_140 [4];
  undefined1 auStack_130 [4];
  int iStack_12c;
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  int iStack_f0;
  undefined1 auStack_ec [70];
  undefined1 uStack_a6;
  byte bStack_a5;
  
  uVar6 = (((U64)(uStack_160) >> 0) & 0xFFFFFFFF);
  bStack_1b0 = (byte)param_7 & 1;
  uStack00000044 = (uint)param_7;
  uVar20 = (param_7 & 0xffffffff) >> 2 & 1;
  iStack0000001c = param_2;
  piStack00000024 = param_3;
  if (param_8 == (undefined8 *)0x0) {
    iStack_17c = *(int *)(param_2 + 0x44);
    param_8 = (undefined8 *)fn_826DCF88(&uStack_1a8,param_1[0x1f],&iStack_17c);
  }
  uVar17 = *param_8;
  uStack_160 = ((((U64)(uStack_160)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((int *)((ulonglong)uVar17 >> 0x20))) & ((U64)0xFFFFFFFF)) << 0));
  piVar7 = (((U64)(uStack_160) >> 0) & 0xFFFFFFFF);
  uStack_160 = uVar17;
  if ((((U64)(uStack_160) >> 0) & 0xFFFFFFFF) == (int *)0x0) {
    iVar9 = param_1[0x20];
    uVar2 = *(undefined2 *)(param_2 + 0x46);
    if (iVar9 == 0) {
      iVar9 = fn_8269F500(param_1);
    }
    fn_826C8D00(param_1 + 3,0xffffffff8200c194,**(undefined4 **)(iVar9 + 0xc),uVar2);
    return (int *)0x0;
  }
  acStack_1af[0] = '\0';
  piVar10 = (int *)fn_82699520(param_1 + 0x2a,*(undefined4 *)(param_2 + 0x40),acStack_1af);
  iStack_180 = (int)uVar20;
  if (uVar20 == 0) {
    bStack_1b0 = 1;
  }
  else {
    if (acStack_1af[0] == '\0') {
      if (piVar10 == (int *)0x0) goto LAB_826d2e1c;
      cVar16 = (**(code **)(*piVar10 + 0x10))();
      if (cVar16 == '\0') {
        return (int *)0x0;
      }
    }
    if (((piVar10 != (int *)0x0) && (-2 < piVar10[5])) && (piVar10[4] == *(int *)(param_2 + 0x44)))
    {
      if ((*(byte *)((int)piVar10 + 0x66) & 0x80) == 0) {
        piVar11 = (int *)(param_1[0x52] + 8);
      }
      else {
        piVar11 = (int *)fn_8269FD00(piVar10);
      }
      iVar9 = *piVar11;
      iVar12 = *(int *)(iVar9 + 8);
      *(int *)(iVar9 + 8) = iVar12 + 1;
      if ((*(byte *)((int)piVar10 + 0x66) & 0x80) == 0) {
LAB_826d2d18:
        iVar15 = param_6;
        if (param_6 == -1) {
          iVar15 = param_1[0x2f];
        }
        if (piVar10[6] == iVar15) {
          fn_826C7200(&iStack_f0,param_2);
          if (((*(byte *)(param_2 + 0x4b) & 0x80) == 0) &&
             (iVar12 = (**(code **)(*piVar10 + 0xc))(piVar10), iVar12 != 0)) {
            uStack_a6 = 0;
            bStack_a5 = bStack_a5 | 0x80;
          }
          if (((*(byte *)(param_2 + 0x4b) & 8) == 0) &&
             (cVar16 = fn_8268D660(piVar10 + 9), cVar16 == '\0')) {
            bStack_a5 = bStack_a5 | 8;
            fn_8268D758(auStack_ec);
          }
          fn_82699580(param_1 + 0x2a,&iStack_f0);
          *(uint *)(param_1[0x28] + 0xb00) = *(uint *)(param_1[0x28] + 0xb00) | 0x400;
          if (iStack_f0 != 0) {
            fn_8267C498();
          }
          lVar18 = (ulonglong)*(uint *)(iVar9 + 8) - 1;
          *(int *)(iVar9 + 8) = (int)lVar18;
          if (lVar18 == 0) {
            fn_826944C8(iVar9);
          }
          return (int *)0x0;
        }
        bStack_1b0 = 1;
      }
      else if (*(int *)(*param_3 + 0x10) == 0) {
        if ((*(int *)(iVar9 + 0x10) == 0) || (((uint)piVar10[0x23] >> 0xe & 1) != 0))
        goto LAB_826d2d18;
      }
      else if (iVar9 == *param_3) goto LAB_826d2d18;
      *(int *)(iVar9 + 8) = iVar12;
      if (iVar12 == 0) {
        fn_826944C8(iVar9);
      }
    }
  }
LAB_826d2e1c:
  *(uint *)(param_1[0x28] + 0xb00) = *(uint *)(param_1[0x28] + 0xb00) | 0x400;
  auStack_140[0] = *(undefined4 *)(param_2 + 0x44);
  piVar10 = (int *)(**(code **)(*piVar7 + 0x24))(piVar7,param_1,auStack_140,(((U64)(uStack_160) >> 32) & 0xFFFFFFFF));
  piVar11 = (int *)(-(uint)((*(byte *)((int)piVar10 + 0x66) & 0x80) != 0) & (uint)piVar10);
  if (piVar11 == (int *)0x0) {
    iVar9 = 0;
  }
  else {
    iVar9 = fn_826BD928(piVar11 + 0x1a);
  }
  bVar1 = false;
  piVar3 = (int *)piVar10[8];
  *(byte *)((int)piVar10 + 0x66) = *(byte *)((int)piVar10 + 0x66) & 0xfe;
  for (; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[8]) {
    iVar12 = (**(code **)(*piVar3 + 0x38))(piVar3);
    if (iVar12 != 0) {
      *(byte *)((int)piVar10 + 0x66) = *(byte *)((int)piVar10 + 0x66) | 1;
      (**(code **)(*piVar10 + 0x3c))(piVar10);
      break;
    }
  }
  if (piVar11 != (int *)0x0) {
    bVar1 = *(int *)(*param_3 + 0x10) != 0;
    if (bVar1) {
      (**(code **)(*piVar10 + 0x24))(piVar10,param_3);
    }
    if (in_stack_00000054 != 0) {
      (**(code **)(*piVar11 + 0xd8))(piVar11);
    }
    if ((param_7 & 4) == 0) {
      (**(code **)(*piVar11 + 0x14))(piVar11,0);
    }
  }
  if (param_6 == -1) {
    param_6 = param_1[0x2f];
  }
  piVar10[6] = param_6;
  bVar5 = true;
  iVar12 = (**(code **)(*param_1 + 0x40))(param_1);
  if (((piVar11 != (int *)0x0) && (param_4 != (int *)0x0)) &&
     (uVar19 = (ulonglong)(uint)param_4[1], uVar19 != 0)) {
    iVar15 = 0;
    do {
      fn_82701F78(*(undefined4 *)(*param_4 + iVar15),piVar11);
      if (((iVar9 != 0) && ((**(uint **)(*param_4 + iVar15) & 0x3fc00) != 0)) &&
         (iVar13 = fn_826D2290(iVar9), iVar13 != 0)) {
        *(undefined1 *)(iVar13 + 0x35) = 1;
      }
      if (((uVar20 != 0) && (**(int **)(*param_4 + iVar15) == 0x200)) &&
         (iVar13 = (*(int **)(*param_4 + iVar15))[4], iVar13 != 0)) {
        if ((*(int *)(iVar13 + 0xc) == 0) || (bVar4 = false, **(char **)(iVar13 + 8) == '\0')) {
          bVar4 = true;
        }
        if ((!bVar4) && (iVar13 = fn_82700248(iVar12 + 0xa2c,1), iVar13 != 0)) {
          *(undefined4 *)(iVar13 + 4) = 2;
          piVar11[1] = piVar11[1] + 1;
          uStack_160 = 0x20000000000;
          uStack_158 = 0xff;
          uStack_154 = uStack_154 & 0xffff;
          if (*(int *)(iVar13 + 8) != 0) {
            fn_8267C498();
          }
          *(int **)(iVar13 + 8) = piVar11;
          if (*(int *)(iVar13 + 0xc) != 0) {
            fn_8267C498();
          }
          *(undefined4 *)(iVar13 + 0xc) = 0;
          *(undefined4 *)(iVar13 + 0x10) = uVar6;
          *(undefined4 *)(iVar13 + 0x14) = (((U64)(uStack_160) >> 32) & 0xFFFFFFFF);
          *(undefined4 *)(iVar13 + 0x18) = uStack_158;
          *(uint *)(iVar13 + 0x1c) = uStack_154;
        }
      }
      uVar19 = uVar19 - 1;
      iVar15 = iVar15 + 4;
    } while (uVar19 != 0);
  }
  uVar17 = 0;
  if (piVar11 != (int *)0x0) {
    uVar8 = (**(code **)(*param_1 + 0xb0))(param_1);
    bStack_170 = 0;
    iStack_178 = 0;
    iStack_174 = 0;
    iStack_17c = piVar7[3];
    uVar17 = (**(code **)(*piVar10 + 0x48))(piVar10);
    uVar20 = fn_826DBC20(uVar17,&iStack_17c);
    iVar15 = iVar12 + 0xa2c;
    uVar17 = fn_826F5D70(iVar15,&uStack_160);
    bVar4 = false;
    if ((uVar20 & 0xffffffff) != 0) {
      iVar13 = (**(code **)(*param_1 + 0x5c))(param_1);
      fn_8269A190(aiStack_16c,(ulonglong)*(uint *)(iVar13 + 0x78) + 0x254,uVar20);
      lVar18 = (**(code **)(*param_1 + 0x5c))(param_1);
      cVar16 = fn_826B0F10(uVar8,lVar18 + 0x78,aiStack_16c,&iStack_178);
      if (cVar16 == '\0') {
        if (iStack_180 != 0) {
          uStack_1a8 = 0;
          auStack_130[0] = 5;
          uStack_1a4 = 0;
          uStack_1a0 = 0;
          iStack_12c = aiStack_16c[0];
          *(int *)(aiStack_16c[0] + 8) = *(int *)(aiStack_16c[0] + 8) + 1;
          fn_826CD420(&uStack_1a8,auStack_130);
          fn_82696330(auStack_130);
          iVar13 = fn_82700248(iVar15,3);
          if (iVar13 != 0) {
            *(undefined4 *)(iVar13 + 4) = 4;
            piVar11[1] = piVar11[1] + 1;
            if (*(int *)(iVar13 + 8) != 0) {
              fn_8267C498();
            }
            *(int **)(iVar13 + 8) = piVar11;
            if (*(int *)(iVar13 + 0xc) != 0) {
              fn_8267C498();
            }
            *(undefined4 *)(iVar13 + 0xc) = 0;
            *(code **)(iVar13 + 0x2c) = fn_826D1050;
            fn_826CD840(iVar13 + 0x30,&uStack_1a8);
          }
          goto LAB_826d34b8;
        }
      }
      else {
        uStack_1a8 = 0;
        uStack_1a4 = 0;
        uStack_1a0 = 0;
        iVar13 = fn_82700248(iVar15,1);
        fn_82695750(auStack_100,&iStack_178);
        fn_826CD420(&uStack_1a8,auStack_100);
        fn_82696330(auStack_100);
        if (iVar13 != 0) {
          *(undefined4 *)(iVar13 + 4) = 4;
          piVar11[1] = piVar11[1] + 1;
          if (*(int *)(iVar13 + 8) != 0) {
            fn_8267C498();
          }
          *(int **)(iVar13 + 8) = piVar11;
          if (*(int *)(iVar13 + 0xc) != 0) {
            fn_8267C498();
          }
          *(undefined4 *)(iVar13 + 0xc) = 0;
          *(code **)(iVar13 + 0x2c) = fn_826CEC00;
          fn_826CD840(iVar13 + 0x30,&uStack_1a8);
        }
        iVar13 = fn_82700248(iVar15,3);
        if (iVar13 != 0) {
          *(undefined4 *)(iVar13 + 4) = 2;
          uStack_18c = 0;
          uStack_188 = 0xff;
          uStack_184 = uStack_184 & 0xffff;
          piVar11[1] = piVar11[1] + 1;
          if (*(int *)(iVar13 + 8) != 0) {
            fn_8267C498();
          }
          *(int **)(iVar13 + 8) = piVar11;
          if (*(int *)(iVar13 + 0xc) != 0) {
            fn_8267C498();
          }
          *(undefined4 *)(iVar13 + 0xc) = 0;
          *(undefined4 *)(iVar13 + 0x10) = uStack_190;
          *(undefined4 *)(iVar13 + 0x14) = uStack_18c;
          *(undefined4 *)(iVar13 + 0x18) = uStack_188;
          *(uint *)(iVar13 + 0x1c) = uStack_184;
        }
        uVar14 = fn_8269A418(param_1);
        if ((5 < uVar14) && ((param_5 & 0xffffffff) != 0)) {
          fn_826CD3B0(&uStack_1a8,0);
          auStack_110[0] = 0;
          fn_82696CB8(auStack_110,param_5);
          fn_826CD420(&uStack_1a8,auStack_110);
          iVar13 = fn_82700248(iVar15,3);
          if (iVar13 != 0) {
            *(undefined4 *)(iVar13 + 4) = 4;
            piVar11[1] = piVar11[1] + 1;
            if (*(int *)(iVar13 + 8) != 0) {
              fn_8267C498();
            }
            *(int **)(iVar13 + 8) = piVar11;
            if (*(int *)(iVar13 + 0xc) != 0) {
              fn_8267C498();
            }
            *(undefined4 *)(iVar13 + 0xc) = 0;
            *(code **)(iVar13 + 0x2c) = fn_826C9460;
            fn_826CD840(iVar13 + 0x30,&uStack_1a8);
          }
          fn_82696330(auStack_110);
        }
        bVar4 = true;
        iVar13 = fn_82700248(iVar15,3);
        if (iVar13 != 0) {
          *(undefined4 *)(iVar13 + 4) = 3;
          piVar11[1] = piVar11[1] + 1;
          if (*(int *)(iVar13 + 8) != 0) {
            fn_8267C498();
          }
          *(int **)(iVar13 + 8) = piVar11;
          if (*(int *)(iVar13 + 0xc) != 0) {
            fn_8267C498();
          }
          *(undefined4 *)(iVar13 + 0xc) = 0;
          fn_826C3768(iVar13 + 0x20,&iStack_178);
        }
LAB_826d34b8:
        uVar6 = uStack_1a8;
        bVar5 = false;
        fn_8269A990(uStack_1a8,uStack_1a4);
        fn_8267BE38(uVar6);
      }
      lVar18 = (ulonglong)*(uint *)(aiStack_16c[0] + 8) - 1;
      *(int *)(aiStack_16c[0] + 8) = (int)lVar18;
      if (lVar18 == 0) {
        fn_826944C8(aiStack_16c[0]);
      }
    }
    if (iStack_180 == 0) {
      if (((!bVar4) && (uVar14 = fn_8269A418(param_1), 5 < uVar14)) &&
         ((param_5 & 0xffffffff) != 0)) {
        auStack_120[0] = 0;
        uStack_1a8 = 0;
        uStack_1a4 = 0;
        uStack_1a0 = 0;
        fn_82696CB8(auStack_120,param_5);
        fn_826CD420(&uStack_1a8,auStack_120);
        iVar15 = fn_82700248(iVar15,3);
        if (iVar15 != 0) {
          *(undefined4 *)(iVar15 + 4) = 4;
          piVar11[1] = piVar11[1] + 1;
          if (*(int *)(iVar15 + 8) != 0) {
            fn_8267C498();
          }
          *(int **)(iVar15 + 8) = piVar11;
          if (*(int *)(iVar15 + 0xc) != 0) {
            fn_8267C498();
          }
          *(undefined4 *)(iVar15 + 0xc) = 0;
          *(code **)(iVar15 + 0x2c) = fn_826C9460;
          fn_826CD840(iVar15 + 0x30,&uStack_1a8);
        }
        fn_82696330(auStack_120);
        uVar6 = uStack_1a8;
        fn_8269A990(uStack_1a8,uStack_1a4);
        fn_8267BE38(uVar6);
      }
    }
    else if ((bVar5) && (iVar15 = fn_82700248(iVar15,3), iVar15 != 0)) {
      *(undefined4 *)(iVar15 + 4) = 2;
      uStack_18c = 0;
      uStack_188 = 0xff;
      uStack_184 = uStack_184 & 0xffff;
      piVar11[1] = piVar11[1] + 1;
      if (*(int *)(iVar15 + 8) != 0) {
        fn_8267C498();
      }
      *(int **)(iVar15 + 8) = piVar11;
      if (*(int *)(iVar15 + 0xc) != 0) {
        fn_8267C498();
      }
      *(undefined4 *)(iVar15 + 0xc) = 0;
      *(undefined4 *)(iVar15 + 0x10) = uStack_190;
      *(undefined4 *)(iVar15 + 0x14) = uStack_18c;
      *(undefined4 *)(iVar15 + 0x18) = uStack_188;
      *(uint *)(iVar15 + 0x1c) = uStack_184;
    }
    *(int **)(iVar12 + 0xa7c) = (((U64)(uStack_160) >> 0) & 0xFFFFFFFF);
    if (((bStack_170 & 2) == 0) && (iStack_178 != 0)) {
      fn_826824B0();
    }
    iStack_178 = 0;
    if (((bStack_170 & 1) == 0) && (iStack_174 != 0)) {
      fn_826824B0();
    }
    iStack_174 = 0;
    param_2 = iStack0000001c;
  }
  uVar14 = uStack00000044 & 0xfffffffe;
  if (bStack_1b0 != 0) {
    uVar14 = uVar14 | 1;
  }
  if (piVar11 != (int *)0x0) {
    fn_8269AD40(piVar11,iVar12);
    fn_8269B718(piVar11,iVar12);
  }
  fn_82699C58(param_1 + 0x2a,param_2,piVar10,uVar14);
  if (bVar1) {
    fn_82705900(iVar12,piVar11);
  }
  if ((piVar11 == (int *)0x0) || (iStack_180 != 0)) {
    if (iVar9 == 0) goto LAB_826d3780;
  }
  else {
    fn_82704760(iVar12,uVar17);
    if (iVar9 == 0) goto LAB_826d3780;
    uStack_14c = 0;
    uStack_148 = 0;
    uStack_150 = 1;
    uStack_146 = 0;
    uStack_145 = 0xff;
    uStack_144 = 0;
    uStack_143 = 0;
    cVar16 = fn_826C7758(iVar9,&uStack_150);
    if (cVar16 == '\0') goto LAB_826d3780;
  }
  *(byte *)(iVar9 + 0x1cc) = *(byte *)(iVar9 + 0x1cc) | 0x80;
LAB_826d3780:
  if (((piVar11 != (int *)0x0) && (bVar1)) && (*piStack00000024 == *(int *)(param_1[0x52] + 0x204)))
  {
    fn_826D1700(param_1,piVar11);
  }
  fn_8267C498(piVar10);
  return piVar10;
}

