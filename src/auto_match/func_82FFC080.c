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
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b8;
extern int fn_82FA5100();
extern int fn_82FA5190();
extern int fn_82FF86F0();
extern int fn_82FF8988();
extern int fn_82FF9F20();
extern int fn_82FFE528();
extern int fn_82FFF2F0();
extern int fn_82FFF348();
extern unsigned int iStack_b0;
extern unsigned int lbl_832645A4;
extern unsigned int uStack_ac;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;


undefined8 fn_82FFC080(int param_1,int param_2,ulonglong param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar5;
  longlong lVar4;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uStack_c0;
  uint uStack_bc;
  uint auStack_b8 [2];
  int iStack_b0;
  uint uStack_ac;
  int *piStack_a8;
  int *piStack_a4;
  undefined1 auStack_a0 [160];
  
  uVar7 = 1;
  if ((param_3 & 0xffffffff) == 0) {
    uVar7 = 1;
  }
  else {
    iVar6 = 0;
    lVar11 = 0;
    uVar10 = 0;
    if (*(uint *)(param_2 + 0x20) < *(uint *)(param_2 + 0x24)) {
      iVar8 = param_1 + 0x50;
      iVar9 = 0;
      do {
        iVar5 = iVar9 + *(int *)(param_2 + 0x28);
        uVar12 = *(uint *)(iVar5 + 8);
        lVar4 = (ulonglong)*(uint *)(iVar5 + 4) - lVar11;
        uVar10 = lVar4 + uVar10;
        lVar11 = lVar4 + lVar11;
        uStack_c0 = uVar12;
        RtlEnterCriticalSection(iVar8);
        uVar1 = *(uint *)(iVar9 + *(int *)(param_2 + 0x28));
        for (puVar2 = *(undefined4 **)((uVar1 % 0xc1 + 0x25) * 4 + param_1);
            puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2) {
          if (puVar2[1] == uVar1) {
            piVar3 = puVar2 + 2;
            goto LAB_82ffc158;
          }
        }
        piVar3 = (int *)0x0;
LAB_82ffc158:
        if (piVar3 == (int *)0x0) {
          for (puVar2 = *(undefined4 **)((uVar1 % 0xc1 + 1) * 4 + param_1 + 0x90);
              puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2) {
            if (puVar2[1] == uVar1) {
              piVar3 = puVar2 + 2;
              if (piVar3 != (int *)0x0) goto LAB_82ffc1dc;
              break;
            }
          }
          piVar3 = (int *)fn_82FFE528(param_1 + 0x90,uVar1);
          if (piVar3 == (int *)0x0) {
            uVar7 = 2;
            RtlLeaveCriticalSection(iVar8);
            goto LAB_82ffc3b4;
          }
LAB_82ffc1dc:
          piVar3[6] = uVar1;
LAB_82ffc1e0:
          uStack_bc = 0;
          if ((piVar3[3] - piVar3[2]) / 0xc == 0) {
            uVar7 = 0x800;
            if ((uVar12 & 0x7ff) != 0) {
              uVar7 = 0x10;
            }
            uVar13 = fn_82FA5100(lbl_832645A4,uVar12,uVar7);
            if ((uVar13 & 0xffffffff) != 0) {
              RtlLeaveCriticalSection(iVar8);
              if ((uVar10 & 0xffffffff) != 0) {
                uStack_bc = 0;
                fn_82FF8988(param_1 + 4,uVar10,&uStack_bc);
                uVar10 = -(ulonglong)(uStack_bc != uVar10) & uVar10;
              }
              auStack_b8[0] = 0;
              uVar7 = fn_82FF86F0(param_1 + 4,uVar13,uVar12,auStack_b8);
              if (((int)uVar7 == 1) && ((ulonglong)uVar12 != (ulonglong)auStack_b8[0])) {
                uVar7 = 2;
              }
              else {
                lVar11 = (ulonglong)auStack_b8[0] + lVar11;
              }
              RtlEnterCriticalSection(iVar8);
              goto LAB_82ffc2c4;
            }
            uVar7 = 0x34;
          }
          else {
            uVar7 = fn_82FF9F20(piVar3,&uStack_bc,&uStack_c0,0);
            uVar13 = (ulonglong)uStack_bc;
            uVar12 = uStack_c0;
LAB_82ffc2c4:
            if ((int)uVar7 == 1) {
              piVar3[1] = uVar12;
              *piVar3 = (int)uVar13;
              goto LAB_82ffc2d4;
            }
            if ((uVar13 & 0xffffffff) != 0) {
              fn_82FA5190(lbl_832645A4,uVar13);
            }
          }
          uVar12 = piVar3[5];
          piVar3[5] = (int)((ulonglong)uVar12 - 1);
          if (((ulonglong)uVar12 - 1 == 0) && (*piVar3 != 0)) {
            fn_82FA5190(lbl_832645A4);
            *piVar3 = 0;
            piVar3[1] = 0;
          }
          if (piVar3[5] == 0) {
            fn_82FFF2F0(param_1 + 0x90,uVar1);
          }
          RtlLeaveCriticalSection(iVar8);
          if ((int)uVar7 != 1) goto LAB_82ffc3b4;
          break;
        }
        piVar3[5] = piVar3[5] + 1;
        if (*piVar3 == 0) goto LAB_82ffc1e0;
LAB_82ffc2d4:
        *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 1;
        RtlLeaveCriticalSection(iVar8);
        iVar6 = iVar6 + 1;
        iVar9 = iVar9 + 0xc;
      } while (*(uint *)(param_2 + 0x20) < *(uint *)(param_2 + 0x24));
    }
    param_3 = (uVar10 - lVar11) + param_3;
    if (param_3 != 0) {
      auStack_b8[0] = 0;
      fn_82FF8988(param_1 + 4,param_3,auStack_b8);
      if ((param_3 & 0xffffffff) != (ulonglong)auStack_b8[0]) {
        uVar7 = 2;
LAB_82ffc3b4:
        if (iVar6 < 1) {
          return uVar7;
        }
        iVar8 = iVar6 * 0xc;
        do {
          iVar8 = iVar8 + -0xc;
          iVar6 = iVar6 + -1;
          uVar12 = *(uint *)(iVar8 + *(int *)(param_2 + 0x28));
          RtlEnterCriticalSection(param_1 + 0x50);
          piStack_a4 = (int *)0x0;
          iStack_b0 = param_1 + 0x94;
          uStack_ac = uVar12 % 0xc1;
          piStack_a8 = *(int **)((uStack_ac + 1) * 4 + param_1 + 0x90);
          if (piStack_a8 != (int *)0x0) {
            do {
              piVar3 = piStack_a8;
              if (piVar3[1] == uVar12) {
                uVar12 = piVar3[7];
                piVar3[7] = (int)((ulonglong)uVar12 - 1);
                piStack_a8 = piVar3;
                if (((ulonglong)uVar12 - 1 == 0) && (piVar3[2] != 0)) {
                  fn_82FA5190(lbl_832645A4);
                  piVar3[2] = 0;
                  piVar3[3] = 0;
                }
                if (piVar3[7] == 0) {
                  fn_82FFF348(auStack_a0,param_1 + 0x90,&iStack_b0);
                }
                goto LAB_82ffc494;
              }
              piStack_a8 = (int *)*piVar3;
              piStack_a4 = piVar3;
            } while ((int *)*piVar3 != (int *)0x0);
            piStack_a8 = (int *)0x0;
          }
LAB_82ffc494:
          RtlLeaveCriticalSection(param_1 + 0x50);
          if (iVar6 < 1) {
            return uVar7;
          }
        } while( true );
      }
    }
    *(byte *)(param_2 + 0x48) = *(byte *)(param_2 + 0x48) | 0x20;
  }
  return uVar7;
}

