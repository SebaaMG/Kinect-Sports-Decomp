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
extern unsigned int *auStack_180;
extern unsigned int *auStack_188;
extern unsigned int *auStack_18c;
extern unsigned int *auStack_190;
extern unsigned int *auStack_1c0;
extern int fn_82518FF0();
extern int fn_8259BDA8();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_828223C8();
extern int fn_82822E38();
extern int fn_82822F60();
extern int fn_82826498();
extern int fn_828277D8();
extern int fn_828281C8();
extern int fn_82828AE8();
extern int fn_8282D640();
extern int fn_82833988();
extern int fn_82834D68();
extern int fn_82834EA0();
extern int fn_82835008();
extern int fn_828351A0();
extern int fn_82872E60();
extern int fn_82F6E7A8();
extern unsigned int iStack_194;
extern unsigned int iStack_198;
extern unsigned int iStack_19c;
extern unsigned int iStack_1a0;
extern unsigned int iStack_1a8;
extern unsigned int iStack_1b4;
extern unsigned int iStack_1bc;


void fn_82833CC8(int param_1,int param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 *puVar10;
  uint *puVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  byte in_xer_so;
  undefined1 auStack_1c0 [4];
  int iStack_1bc;
  undefined4 *puStack_1b8;
  int iStack_1b4;
  int aiStack_1b0 [2];
  int iStack_1a8;
  int *piStack_1a4;
  int iStack_1a0;
  int iStack_19c;
  int iStack_198;
  int iStack_194;
  undefined1 auStack_190 [4];
  undefined1 auStack_18c [4];
  undefined1 auStack_188 [8];
  undefined1 auStack_180 [384];
  
  lVar6 = fn_8265C9E0(0x10);
  if (lVar6 == 0) {
    lVar6 = 0;
  }
  else {
    fn_82828AE8(lVar6,auStack_1c0,auStack_1c0);
  }
  *(int *)(param_2 + 0x340) = (int)lVar6;
  lVar6 = fn_8265C9E0(0x10);
  if (lVar6 == 0) {
    lVar6 = 0;
  }
  else {
    fn_82828AE8(lVar6,auStack_1c0,auStack_1c0);
  }
  *(int *)(param_2 + 0x368) = (int)lVar6;
  piStack_1a4 = (int *)fn_8265C9E0(0x10);
  if (piStack_1a4 == (int *)0x0) {
    piStack_1a4 = (int *)0x0;
  }
  else {
    *piStack_1a4 = 0;
    piStack_1a4[1] = 0;
    piStack_1a4[2] = 0;
  }
  fn_828223C8(param_2 + 0x2f4,&iStack_1bc);
  iVar4 = iStack_1bc;
  do {
    if (iVar4 == 0) {
      if (*(int *)(param_2 + 0x340) != 0) {
        fn_828351A0(*(int *)(param_2 + 0x340),1);
      }
      if (*(int *)(param_2 + 0x368) != 0) {
        fn_828351A0(*(int *)(param_2 + 0x368),1);
      }
      piVar1 = piStack_1a4;
      if (piStack_1a4 != (int *)0x0) {
        fn_82872E60();
        fn_8265CA20(piVar1);
      }
      return;
    }
    iStack_1bc = iVar4;
    if (*(int *)(*(int *)(iVar4 + 0x28) + 8) != 0) {
      *(undefined4 *)(param_2 + 0x2c8) = *(undefined4 *)(*(int *)(iVar4 + 0x24) + 0xc);
      fn_8282D640(param_2,param_2 + 0x318,0xffffffff82833b38,0);
      fn_8282D640(param_2,param_2 + 0x344,0xffffffff82833b80,0);
      iStack_1a8 = iVar4 + 0x24;
      fn_828223C8(param_3,&iStack_1b4);
      while (iStack_1b4 != 0) {
        puVar10 = (undefined4 *)(iStack_1b4 + 0x48);
        iVar12 = ((*(int **)(iStack_1b4 + 0x48))[1] - **(int **)(iStack_1b4 + 0x48)) / 0x14;
        lVar6 = (longlong)iVar12;
        if (iVar12 != 0) {
          iVar12 = 0;
          do {
            iStack_1a0 = *(int *)*puVar10 + iVar12;
            fn_82826498(param_1,((ulonglong)*(uint *)(iStack_1a0 + 4) & 0x7ffffff) * 0x20 +
                                    (ulonglong)**(uint **)(param_1 + 0x388),
                            *(undefined4 *)(iStack_1a0 + 8),0xffffffff82833bc8,&iStack_1a8);
            lVar6 = lVar6 + -1;
            iVar12 = iVar12 + 0x14;
          } while (lVar6 != 0);
        }
        fn_828223C8(iStack_1b4,&iStack_1b4);
        fn_82835008(*piStack_1a4,piStack_1a4[1],(piStack_1a4[1] - *piStack_1a4) / 0xc,
                          auStack_1c0[0]);
      }
      fn_828281C8(param_1,*(undefined4 *)(iVar4 + 8),&iStack_198);
      piVar9 = (int *)(iStack_198 + 0x24);
      piVar1 = *(int **)(*(int *)(iVar4 + 0x28) + 4);
      iStack_19c = *piVar1;
      piVar14 = piStack_1a4;
      if ((int *)iStack_19c != piVar1) {
        do {
          iVar12 = iStack_19c;
          puVar11 = (uint *)(iStack_19c + 0xc);
          fn_82833988(piVar9,aiStack_1b0,*(undefined2 *)(iStack_19c + 0x1e),&iStack_194,
                        *(undefined4 *)(iStack_19c + 0xc),*(undefined4 *)(iStack_19c + 0x14),
                        1 << (*(byte *)(iStack_19c + 0x1c) & 0x3f),
                        1 << (*(byte *)(iStack_19c + 0x1d) & 0x3f));
          iVar5 = iStack_194;
          puVar10 = *(undefined4 **)(*(int *)(param_2 + 0x340) + 4);
          uVar7 = *(uint *)(iVar12 + 0x10);
          puVar8 = (undefined4 *)puVar10[1];
          while (*(char *)((int)puVar8 + 0x11) == '\0') {
            if (*(uint *)(puVar8[3] + 0x14) < uVar7) {
              puVar8 = (undefined4 *)puVar8[2];
            }
            else {
              puVar10 = puVar8;
              puVar8 = (undefined4 *)*puVar8;
            }
          }
          puStack_1b8 = puVar10;
          if (puVar10 != *(undefined4 **)(*(int *)(param_2 + 0x340) + 4)) {
            do {
              iVar2 = puStack_1b8[3];
              if ((uint)(*(int *)(iVar12 + 0x14) + *(int *)(iVar12 + 0x10)) <=
                  *(uint *)(iVar2 + 0x14)) break;
              iVar13 = *(uint *)(iVar2 + 0x14) - *(int *)(iVar12 + 0x10);
              fn_82822E38(iVar2);
              *(int *)(param_2 + 0x30) = *(int *)(param_2 + 0x30) + -1;
              *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(*piVar9 + 0xc);
              *(int *)(iVar2 + 0x14) = iVar13 + iVar5;
              *(int *)(iVar2 + 0x18) = iVar13 + aiStack_1b0[0];
              fn_82822F60(param_1 + 0x318,iVar2,0xffffffff8282b948,iVar2);
              *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
              fn_8259BDA8(&puStack_1b8);
            } while (puStack_1b8 != *(undefined4 **)(*(int *)(param_2 + 0x340) + 4));
          }
          fn_82834D68(auStack_188,*(undefined4 *)(param_2 + 0x340),puVar10);
          puVar10 = *(undefined4 **)(*(int *)(param_2 + 0x368) + 4);
          puVar8 = (undefined4 *)puVar10[1];
          while (*(char *)((int)puVar8 + 0x11) == '\0') {
            if (*(uint *)(puVar8[3] + 0x20) < uVar7) {
              puVar8 = (undefined4 *)puVar8[2];
            }
            else {
              puVar10 = puVar8;
              puVar8 = (undefined4 *)*puVar8;
            }
          }
          puStack_1b8 = puVar10;
          if (puVar10 != *(undefined4 **)(*(int *)(param_2 + 0x368) + 4)) {
            do {
              iVar2 = puStack_1b8[3];
              if ((uint)(*(int *)(iVar12 + 0x14) + *(int *)(iVar12 + 0x10)) <=
                  *(uint *)(iVar2 + 0x20)) break;
              iVar13 = *(uint *)(iVar2 + 0x20) - *(int *)(iVar12 + 0x10);
              fn_82822E38(iVar2);
              *(int *)(param_2 + 0x38) = *(int *)(param_2 + 0x38) + -1;
              *(undefined4 *)(iVar2 + 0x18) = *(undefined4 *)(*piVar9 + 0xc);
              *(undefined4 *)(iVar2 + 0x14) =
                   *(undefined4 *)(*(int *)(param_1 + 0x3d4) + *(int *)(iVar2 + 0x14) * 4 + -4);
              **(int **)(iVar2 + 0x10) = iVar13 + aiStack_1b0[0];
              *(int *)(iVar2 + 0x20) = iVar13 + iVar5;
              fn_82822F60(param_1 + 0x344,iVar2,0xffffffff8282af50,iVar2);
              *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
              fn_8259BDA8(&puStack_1b8);
            } while (puStack_1b8 != *(undefined4 **)(*(int *)(param_2 + 0x368) + 4));
          }
          fn_82834D68(auStack_18c,*(undefined4 *)(param_2 + 0x368),puVar10);
          piVar14 = piStack_1a4;
          puVar10 = (undefined4 *)*piStack_1a4;
          uVar7 = (piStack_1a4[1] - (int)puVar10) / 0xc;
          while (uVar3 = uVar7, 0 < (int)uVar3) {
            uVar7 = ((int)uVar3 >> 1) + (uint)((int)uVar3 < 0 && (uVar3 & 1) != 0);
            if ((bool)((byte)(((uint)puVar10[uVar7 * 3 + 1] < *puVar11) << 3 | in_xer_so) >> 3)) {
              puVar10 = puVar10 + uVar7 * 3 + 3;
              uVar7 = (uVar3 - uVar7) - 1;
            }
          }
          if (puVar10 != (undefined4 *)piStack_1a4[1]) {
            do {
              puVar11 = puVar10 + 2;
              if (!(bool)((byte)((*puVar11 <
                                 (uint)(*(int *)(iVar12 + 0x14) + *(int *)(iVar12 + 0x10))) << 3 |
                                in_xer_so) >> 3)) break;
              piVar1 = (int *)*puVar10;
              puVar10 = puVar10 + 3;
              *piVar1 = (*puVar11 - *(int *)(iVar12 + 0x10)) + aiStack_1b0[0];
            } while (puVar10 != (undefined4 *)piStack_1a4[1]);
          }
          fn_82518FF0(&iStack_19c);
        } while (iStack_19c != *(int *)(*(int *)(iVar4 + 0x28) + 4));
      }
      fn_82834EA0(auStack_190,piVar14,*piVar14,piVar14[1]);
      if (*(int *)(*(int *)(param_2 + 0x368) + 8) != 0) {
        fn_828277D8(param_2,auStack_180,0x100);
        fn_82F6E7A8(0xffffffff8201f25c,auStack_180);
      }
      if (*(int *)(*(int *)(param_2 + 0x340) + 8) != 0) {
        fn_828277D8(param_2,auStack_180,0x100);
        fn_82F6E7A8(0xffffffff8201f28c,auStack_180);
      }
    }
    fn_828223C8(iStack_1bc,&iStack_1bc);
    iVar4 = iStack_1bc;
  } while( true );
}

