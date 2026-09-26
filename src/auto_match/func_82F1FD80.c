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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int *auStack_1a0;
extern unsigned int *auStack_220;
extern unsigned int *auStack_260;
extern unsigned int *auStack_2a0;
extern int fn_82ED9160();
extern int fn_82F008A0();
extern int fn_82F06BE8();
extern int fn_82F07488();
extern int fn_82F1EF70();
extern int fn_82F26110();
extern int fn_82F261D8();
extern int fn_82F26D38();
extern int fn_82F26EF8();
extern int fn_82F26F98();
extern int fn_82F27CF0();
extern int fn_82F691F0();
extern unsigned int iStack_2c4;
extern unsigned int iStack_2c8;
extern unsigned int iStack_2d8;
extern unsigned int iStack_2ec;
extern unsigned int iStack_2f4;
extern unsigned int iStack_2f8;
extern unsigned int iStack_2fc;
extern unsigned int iStack_300;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005730;
extern unsigned int lbl_82162A70;
extern unsigned int lbl_82162A78;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack0000004c;
extern unsigned int uStack_2b0;
extern unsigned int uStack_2b8;
extern unsigned int uStack_2d0;
extern unsigned int uStack_2e0;
extern unsigned int uStack_2e4;
extern unsigned int uStack_2e8;
extern unsigned int uStack_2f0;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82F1FD80(int param_1,ulonglong param_2,uint param_3,int param_4)

{
  float fVar1;
  longlong lVar2;
  int iVar3;
  undefined4 in_r10;
  undefined4 uVar4;
  uint *puVar5;
  undefined4 uVar8;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar17;
  longlong lVar16;
  ulonglong uVar18;
  uint *puVar19;
  ulonglong uVar20;
  uint uStack0000001c;
  uint uStack00000024;
  undefined4 uStack0000004c;
  undefined4 in_stack_00000054;
  undefined4 in_stack_0000005c;
  uint in_stack_00000064;
  uint in_stack_0000006c;
  int in_stack_00000074;
  int in_stack_0000008c;
  uint in_stack_000000a4;
  undefined4 in_stack_000000ac;
  undefined4 in_stack_000000b4;
  undefined4 in_stack_000000bc;
  undefined4 in_stack_000000c4;
  undefined4 in_stack_000000cc;
  int in_stack_000000fc;
  int in_stack_00000104;
  int in_stack_0000010c;
  int in_stack_00000114;
  int *in_stack_0000013c;
  undefined4 *in_stack_00000144;
  int iStack_300;
  int iStack_2fc;
  int iStack_2f8;
  int iStack_2f4;
  uint uStack_2f0;
  int iStack_2ec;
  undefined4 uStack_2e8;
  uint uStack_2e4;
  ulonglong uStack_2e0;
  int iStack_2d8;
  ulonglong uStack_2d0;
  int iStack_2c8;
  int iStack_2c4;
  longlong lStack_2c0;
  uint uStack_2b8;
  ulonglong uStack_2b0;
  undefined1 auStack_2a0 [64];
  undefined1 auStack_260 [64];
  undefined1 auStack_220 [128];
  undefined1 auStack_1a0 [416];
  
  uStack0000001c = (uint)param_2;
  *in_stack_00000144 = 0;
  *in_stack_0000013c = 0;
  puVar19 = (uint *)(*(int *)(param_1 + 0x1e54) + in_stack_0000008c * 0x114);
  if (*(int *)(param_1 + 0x89c) == 3) {
    uStack_2e8 = 0;
  }
  else {
    uStack_2e8 = *(undefined4 *)(param_1 + 0x904);
  }
  if ((*(int *)(param_1 + 0x854) * *(int *)(param_1 + 0x850) & 0xffffff80U) == 0) {
    uVar8 = 4;
    uVar4 = 3;
  }
  else {
    uVar8 = 3;
    uVar4 = 4;
  }
  *(undefined4 *)(param_1 + 0x85c) = uVar8;
  *(undefined4 *)(param_1 + 0x860) = uVar4;
  if (*(int *)(param_1 + 0x7614) != 0) {
    fVar1 = lbl_82002AE0;
    if (*(int *)(param_1 + 0x628) != 0) {
      fVar1 = lbl_82162A78;
    }
    lStack_2c0 = (longlong)*(int *)(param_1 + 0x588);
    *(int *)(param_1 + 0x1ae4) =
         (int)((SQRT((double)lStack_2c0) * (double)(longlong)(0x87 - *(int *)(param_1 + 0x58c)) *
                (double)fVar1 * lbl_82162A70) / (double)(longlong)*(int *)(param_1 + 0x58c) +
              lbl_82005730);
  }
  iVar3 = uStack0000001c * *(int *)(param_1 + 0x2d0);
  if ((param_2 & 0xffffffff) < (ulonglong)param_3) {
    uVar11 = (ulonglong)in_stack_000000a4;
    uVar18 = param_2;
    uStack00000024 = param_3;
    uStack0000004c = in_r10;
    iStack_2c8 = iVar3;
    do {
      uVar20 = 0;
      lVar12 = 0;
      lStack_2c0 = CONCAT44((uint)LZCOUNT((int)param_2 - (int)uVar18) >> 5,(((U64)(lStack_2c0) >> 32) & 0xFFFFFFFF));
      if (*(int *)(param_1 + 0x2d0) != 0) {
        uStack_2b8 = in_stack_00000074 - in_stack_0000006c;
        iStack_2c4 = (param_4 >> 1) + 0x10;
        iVar10 = iVar3 << 1;
        uStack_2e4 = in_stack_0000006c;
        iStack_2d8 = param_4;
        do {
          uVar4 = uStack0000004c;
          iVar3 = (int)uVar20;
          uStack_2f0 = *(int *)(param_1 + 0x31c) * (int)uVar18 + iVar3;
          iStack_2ec = iStack_2c4;
          lVar6 = (longlong)(iStack_2d8 + 0x20) * (longlong)*(int *)(param_1 + 0x564);
          lVar2 = ((ulonglong)(uint)((*(int *)(param_1 + 0x31c) + 1 >> 1) * (int)uVar18 + iVar3) &
                  0x1fffffff) * 8;
          uVar17 = (uint)LZCOUNT((*(int *)(param_1 + 0x2d0) + -1) - iVar3);
          uStack_2e0 = CONCAT44(uVar17,(((U64)(uStack_2e0) >> 32) & 0xFFFFFFFF));
          lVar7 = (longlong)iStack_2c4 * (longlong)*(int *)(param_1 + 0x568) +
                  (longlong)((int)lVar12 >> 1) + 0x10;
          lVar16 = lVar6 + lVar12 + (ulonglong)*(uint *)(param_1 + 0x14) + 0x20;
          lVar15 = lVar6 + (ulonglong)*(uint *)(param_1 + 0x1e7c) + lVar12 + 0x20;
          lVar6 = (ulonglong)*(uint *)(param_1 + 0x18) + lVar7;
          lVar13 = (ulonglong)*(uint *)(param_1 + 0x1c) + lVar7;
          lVar14 = (ulonglong)*(uint *)(param_1 + 0x1e80) + lVar7;
          lVar7 = (ulonglong)*(uint *)(param_1 + 0x1e84) + lVar7;
          uStack_2d0 = uVar11;
          fn_82ED9160(param_1,uStack0000004c,in_stack_00000054,in_stack_0000005c,
                        ((ulonglong)uStack_2f0 & 0xfffffff) * 0x10 +
                        (ulonglong)*(uint *)(param_1 + 0x1abc),
                        lVar2 + (ulonglong)*(uint *)(param_1 + 0x1ac0),
                        lVar2 + (ulonglong)*(uint *)(param_1 + 0x1ac4),uVar17 >> 5);
          uVar11 = uStack_2d0;
          puVar5 = puVar19 + 0x26;
          lVar2 = 6;
          do {
            puVar5 = puVar5 + 1;
            *puVar5 = 0;
            lVar2 = lVar2 + -1;
          } while (lVar2 != 0);
          puVar5 = puVar19 + 0x2c;
          lVar2 = 6;
          do {
            puVar5 = puVar5 + 1;
            *puVar5 = 0;
            lVar2 = lVar2 + -1;
          } while (lVar2 != 0);
          puVar5 = puVar19 + 0x32;
          lVar2 = 6;
          do {
            puVar5 = puVar5 + 1;
            *puVar5 = 0;
            lVar2 = lVar2 + -1;
          } while (lVar2 != 0);
          if ((*(int *)(param_1 + 0x1c20) != 0) && ((uVar18 & 0xffffffff) == 0)) {
            fn_82F06BE8(param_1,uVar4,in_stack_00000054,in_stack_0000005c);
          }
          lVar2 = (longlong)((int)puVar19[0x17] >> 0x1c);
          if ((lVar2 - 1U & 0xffffffff) < 5) {
            if (((int)(lVar2 - 1U) == 0) || (lVar2 == 2)) {
              iStack_2fc = (int)*(short *)(*(int *)(param_1 + 0x998) + iVar10);
              iStack_300 = (int)*(short *)(*(int *)(param_1 + 0x99c) + iVar10);
              if (*(int *)(param_1 + 4) == 8) {
                fn_82F261D8();
              }
              else {
                fn_82F26110(param_1,&iStack_2fc,&iStack_300,uVar20,uVar18);
              }
              uVar4 = uStack_2e8;
              fn_82F27CF0(param_1,lVar16,*(undefined4 *)(param_1 + 0x564),auStack_1a0,0x10,
                                iStack_2fc,iStack_300,uStack_2e8);
              iStack_2f4 = (int)*(short *)(*(int *)(param_1 + 0x9a0) + iVar10);
              iStack_2f8 = (int)*(short *)(*(int *)(param_1 + 0x9a4) + iVar10);
              if (*(int *)(param_1 + 4) == 8) {
                fn_82F261D8();
              }
              else {
                fn_82F26110(param_1,&iStack_2f4,&iStack_2f8,uVar20,uVar18);
              }
              fn_82F27CF0(param_1,lVar15,*(undefined4 *)(param_1 + 0x564),auStack_2a0,0x10,
                                iStack_2f4,iStack_2f8,uVar4);
              (**(code **)(param_1 + 0xb1c))
                        (auStack_1a0,0x10,auStack_2a0,0x10,auStack_1a0,0x10,0x10,0x10);
              if (*(int *)(param_1 + 8) != 0) {
                iStack_2fc = (int)*(short *)(*(int *)(param_1 + 0x998) + iVar10);
                iStack_300 = (int)*(short *)(*(int *)(param_1 + 0x99c) + iVar10);
              }
              fn_82F26EF8(param_1,&iStack_2fc,&iStack_300);
              fn_82F26EF8(param_1,&iStack_2f4,&iStack_2f8);
              if (*(int *)(param_1 + 8) != 0) {
                fn_82F26D38(param_1,uVar20,uVar18,&iStack_2fc,&iStack_300);
              }
              fn_82F26F98(param_1,lVar6,*(undefined4 *)(param_1 + 0x568),auStack_2a0,8,
                                iStack_2fc,iStack_300,0);
              fn_82F26F98(param_1,lVar14,*(undefined4 *)(param_1 + 0x568),auStack_260,8,
                                iStack_2f4,iStack_2f8,0);
              (**(code **)(param_1 + 0xb1c))(auStack_2a0,8,auStack_260,8,auStack_2a0,8,8,8);
              fn_82F26F98(param_1,lVar13,*(undefined4 *)(param_1 + 0x568),auStack_220,8,
                                iStack_2fc,iStack_300,0);
              fn_82F26F98(param_1,lVar7,*(undefined4 *)(param_1 + 0x568),auStack_260,8,
                                iStack_2f4,iStack_2f8,0);
              (**(code **)(param_1 + 0xb1c))(auStack_220,8,auStack_260,8,auStack_220,8,8,8);
              (**(code **)(param_1 + 0x200c))(1,1,in_stack_000000ac,auStack_2a0,8,8,1,1);
              (**(code **)(param_1 + 0x200c))(1,1,in_stack_000000b4,auStack_220,8,8,1,1);
              (**(code **)(param_1 + 0x200c))(1,1,uVar11,auStack_1a0,0x10,0x10,1,1);
            }
            else if (lVar2 == 3) {
              iStack_2f4 = (int)*(short *)(*(int *)(param_1 + 0x9a0) + iVar10);
              iStack_2f8 = (int)*(short *)(*(int *)(param_1 + 0x9a4) + iVar10);
              if (*(int *)(param_1 + 4) == 8) {
                fn_82F261D8();
              }
              else {
                fn_82F26110(param_1,&iStack_2f4,&iStack_2f8,uVar20,uVar18);
              }
              fn_82F27CF0(param_1,lVar15,*(undefined4 *)(param_1 + 0x564),uVar11,0x10,
                                iStack_2f4,iStack_2f8,uStack_2e8);
              fn_82F26EF8(param_1,&iStack_2f4,&iStack_2f8);
              fn_82F26F98(param_1,lVar14,*(undefined4 *)(param_1 + 0x568),in_stack_000000ac,8,
                                iStack_2f4,iStack_2f8,0);
              fn_82F26F98(param_1,lVar7,*(undefined4 *)(param_1 + 0x568),in_stack_000000b4,8,
                                iStack_2f4,iStack_2f8,0);
            }
            else {
              if (lVar2 != 4) {
                *in_stack_0000013c = *in_stack_0000013c + 1;
                    /* WARNING: Subroutine does not return */
                fn_82F691F0(uVar11,0x80,0x100);
              }
              iStack_2fc = (int)*(short *)(*(int *)(param_1 + 0x998) + iVar10);
              iStack_300 = (int)*(short *)(*(int *)(param_1 + 0x99c) + iVar10);
              if (*(int *)(param_1 + 4) == 8) {
                fn_82F261D8();
              }
              else {
                fn_82F26110(param_1,&iStack_2fc,&iStack_300,uVar20,uVar18);
              }
              fn_82F27CF0(param_1,lVar16,*(undefined4 *)(param_1 + 0x564),uVar11,0x10,
                                iStack_2fc,iStack_300,uStack_2e8);
              if (*(int *)(param_1 + 8) != 0) {
                iStack_2fc = (int)*(short *)(*(int *)(param_1 + 0x998) + iVar10);
                iStack_300 = (int)*(short *)(*(int *)(param_1 + 0x99c) + iVar10);
              }
              fn_82F26EF8(param_1,&iStack_2fc,&iStack_300);
              if (*(int *)(param_1 + 8) != 0) {
                fn_82F26D38(param_1,uVar20,uVar18,&iStack_2fc,&iStack_300);
              }
              fn_82F26F98(param_1,lVar6,*(undefined4 *)(param_1 + 0x568),in_stack_000000ac,8,
                                iStack_2fc,iStack_300,0);
              fn_82F26F98(param_1,lVar13,*(undefined4 *)(param_1 + 0x568),in_stack_000000b4,8,
                                iStack_2fc,iStack_300,0);
            }
          }
          *puVar19 = *puVar19 & 0x7fffffff;
          puVar19[0x15] = 0;
          (**(code **)(param_1 + 0x1fb0))
                    (param_1,uStack0000004c,in_stack_00000054,in_stack_0000005c,uVar11,
                     in_stack_000000ac,in_stack_000000b4,in_stack_000000bc);
          fn_82F008A0(param_1,uVar20,uVar18,in_stack_000000bc,0,0);
          lVar2 = (ulonglong)in_stack_00000064 + 8 + lVar12;
          (**(code **)(param_1 + 0x2004))
                    (param_1,lVar2 + -8,uVar11,*(undefined4 *)(param_1 + 0x564),0x10);
          (**(code **)(param_1 + 0x2004))
                    (param_1,lVar2,uVar11 + 8,*(undefined4 *)(param_1 + 0x564),0x10);
          lVar2 = lVar2 + (ulonglong)*(uint *)(param_1 + 0x4a90);
          (**(code **)(param_1 + 0x2004))
                    (param_1,lVar2,uVar11 + 0x80,*(undefined4 *)(param_1 + 0x564),0x10);
          (**(code **)(param_1 + 0x2004))
                    (param_1,lVar2 + 8,uVar11 + 0x88,*(undefined4 *)(param_1 + 0x564),0x10);
          uVar17 = uStack_2e4;
          uVar9 = (ulonglong)uStack_2e4;
          (**(code **)(param_1 + 0x2004))
                    (param_1,uVar9,in_stack_000000ac,*(undefined4 *)(param_1 + 0x568),8);
          (**(code **)(param_1 + 0x2004))
                    (param_1,uStack_2b8 + uVar9,in_stack_000000b4,*(undefined4 *)(param_1 + 0x568),8
                    );
          fn_82F07488(param_1,puVar19,uVar20,uVar18);
          uStack_2f0 = in_stack_00000114;
          iStack_2ec = in_stack_0000010c;
          uStack_2e4 = in_stack_00000104;
          uStack_2d0 = CONCAT44(in_stack_000000fc,(((U64)(uStack_2d0) >> 32) & 0xFFFFFFFF));
          uStack_2e0 = uVar18;
          uStack_2b0 = uVar20;
          fn_82F1EF70(param_1,puVar19,uVar20,uVar18,(((U64)(lStack_2c0) >> 0) & 0xFFFFFFFF),in_stack_000000bc,
                            in_stack_000000c4,in_stack_000000cc);
          iVar3 = iStack_2c8 + 1;
          puVar19 = puVar19 + 0x45;
          iVar10 = iVar10 + 2;
          if (*(int *)(param_1 + 0x648) != 0) {
            in_stack_00000104 = in_stack_00000104 + 0xc;
            in_stack_000000fc = in_stack_000000fc + 0x300;
            in_stack_0000010c = in_stack_0000010c + 0x300;
            in_stack_00000114 = in_stack_00000114 + 0xc;
          }
          uVar20 = uStack_2b0 + 1;
          uStack_2e4 = uVar17 + 8;
          lVar12 = lVar12 + 0x10;
          uVar18 = uStack_2e0;
          iStack_2c8 = iVar3;
        } while ((uVar20 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x2d0));
        param_2 = (ulonglong)uStack0000001c;
        param_3 = uStack00000024;
        param_4 = iStack_2d8;
      }
      uVar18 = uVar18 + 1;
      param_4 = param_4 + 0x10;
      in_stack_0000006c = *(int *)(param_1 + 0x580) + in_stack_0000006c;
      in_stack_00000074 = *(int *)(param_1 + 0x580) + in_stack_00000074;
      in_stack_00000064 = *(int *)(param_1 + 0x57c) + in_stack_00000064;
    } while ((uVar18 & 0xffffffff) < (ulonglong)param_3);
  }
  return;
}

