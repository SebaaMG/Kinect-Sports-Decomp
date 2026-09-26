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
extern int fn_82B7C438();
extern int fn_82BA02A8();
extern int fn_82BA0450();
extern int fn_82BABD38();
extern int fn_82BD3440();
extern int fn_82BD34A0();


void fn_82BB6580(int *param_1)

{
  uint uVar1;
  int iVar5;
  int iVar6;
  undefined8 uVar2;
  char cVar8;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar7;
  int *piVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  int *piVar14;
  longlong lVar13;
  ulonglong uVar15;
  
  iVar5 = *param_1;
  if ((*(uint *)(iVar5 + 0x858) >> 10 & 1) == 0) {
    for (iVar5 = *(int *)(param_1[1] + 0x88); *(int *)(iVar5 + 8) != 0; iVar5 = *(int *)(iVar5 + 8))
    {
      for (iVar10 = *(int *)(iVar5 + 0x1c); *(int *)(iVar10 + 8) != 0; iVar10 = *(int *)(iVar10 + 8)
          ) {
        if ((*(uint *)(iVar10 + 0xe4) & 1) != 0) {
          *(uint *)(iVar10 + 0xe4) = *(uint *)(iVar10 + 0xe4) | 0x20;
        }
      }
    }
  }
  else {
    uVar15 = (ulonglong)*(uint *)(iVar5 + 0x560) + 1;
    iVar5 = fn_82B7C438(iVar5,(uVar15 & 0x3fffffff) << 2);
    iVar10 = 0;
    if (0 < (int)uVar15) {
      piVar9 = (int *)(iVar5 + -4);
      do {
        piVar9 = piVar9 + 1;
        *piVar9 = iVar10;
        iVar10 = iVar10 + 1;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
    for (iVar10 = *(int *)(param_1[1] + 0x88); *(int *)(iVar10 + 8) != 0;
        iVar10 = *(int *)(iVar10 + 8)) {
      for (piVar9 = *(int **)(iVar10 + 0x1c); piVar9[2] != 0; piVar9 = (int *)piVar9[2]) {
        if ((piVar9[0x39] & 1U) != 0) {
          iVar6 = (**(code **)(*piVar9 + 0x2c))(piVar9);
          if (iVar6 == 0) {
            if (piVar9[6] == 0x32) {
              uVar2 = fn_82BD3440((ulonglong)(uint)piVar9[0x38] + 1,iVar5);
              fn_82BD34A0(0,uVar2,iVar5);
            }
            else {
              iVar6 = 1;
              if (0 < piVar9[5]) {
                piVar14 = piVar9 + 0x3b;
                do {
                  if (*(int *)(*piVar14 + 0x3b4) != piVar9[0xed]) {
                    uVar2 = fn_82BD3440((ulonglong)*(uint *)(*piVar14 + 0xe0) + 1,iVar5);
                    fn_82BD34A0(0,uVar2,iVar5);
                  }
                  iVar6 = iVar6 + 1;
                  piVar14 = piVar14 + 1;
                } while (iVar6 <= piVar9[5]);
              }
            }
          }
          else {
            uVar2 = fn_82BD3440((ulonglong)(uint)piVar9[0x38] + 1,iVar5);
            fn_82BD34A0(0,uVar2,iVar5);
            iVar6 = 1;
            piVar9[0x39] = piVar9[0x39] | 0x20;
            if (0 < piVar9[5]) {
              piVar14 = piVar9 + 0x3a;
              do {
                piVar14 = piVar14 + 1;
                uVar2 = fn_82BD3440((ulonglong)*(uint *)(*piVar14 + 0xe0) + 1,iVar5);
                fn_82BD34A0(0,uVar2,iVar5);
                iVar6 = iVar6 + 1;
              } while (iVar6 <= piVar9[5]);
            }
          }
          if (((uint)piVar9[0x39] >> 9 & 1) == 0) {
            cVar8 = fn_82BABD38(piVar9);
            if (cVar8 == '\0') goto LAB_82bb67dc;
            uVar11 = piVar9[0x38];
            uVar1 = *(uint *)(piVar9[0x3b] + 0xe0);
          }
          else {
            uVar11 = piVar9[0x38];
            iVar6 = fn_82BA0450();
            uVar1 = *(uint *)(iVar6 + 0xe0);
          }
          uVar3 = fn_82BD3440((ulonglong)uVar11 + 1,iVar5);
          uVar4 = fn_82BD3440((ulonglong)uVar1 + 1,iVar5);
          uVar2 = uVar3;
          if ((int)uVar4 <= (int)uVar3) {
            uVar2 = uVar4;
            uVar4 = uVar3;
          }
          fn_82BD34A0(uVar2,uVar4,iVar5);
        }
LAB_82bb67dc:;}
    }
    lVar12 = 0;
    lVar13 = 0;
    for (iVar10 = *(int *)(param_1[1] + 0x88); *(int *)(iVar10 + 8) != 0;
        iVar10 = *(int *)(iVar10 + 8)) {
      for (iVar6 = *(int *)(iVar10 + 0x1c); *(int *)(iVar6 + 8) != 0; iVar6 = *(int *)(iVar6 + 8)) {
        if ((*(uint *)(iVar6 + 0xe4) & 1) != 0) {
          iVar7 = fn_82BD3440((ulonglong)*(uint *)(iVar6 + 0xe0) + 1,iVar5);
          if (iVar7 == 0) {
            lVar13 = lVar13 + 1;
            uVar11 = *(uint *)(iVar6 + 0xe4) | 0x20;
          }
          else {
            uVar11 = *(uint *)(iVar6 + 0xe4) & 0xffffffdf;
          }
          *(uint *)(iVar6 + 0xe4) = uVar11;
          lVar12 = lVar12 + 1;
        }
      }
    }
    fn_82BA02A8(*param_1,0xffffffff820e0458,lVar13,lVar12);
    (**(code **)(*param_1 + 0x59c))(*(undefined4 *)(*param_1 + 0x5a4),iVar5);
  }
  return;
}

