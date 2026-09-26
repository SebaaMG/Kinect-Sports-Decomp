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
extern unsigned int *auStack_70;
extern int fn_822315A0();
extern int fn_823AA970();
extern int fn_8265C9E0();
extern int fn_82886518();
extern int fn_8289EEE0();
extern int fn_828A17A0();
extern int fn_828BE208();
extern int fn_828CF9E8();
extern int fn_828D0BE0();
extern int fn_828D33C0();
extern unsigned int iStack_6c;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_83213FC8;
extern unsigned int stack0x00000000;


byte fn_828D34E0(int param_1,char param_2)

{
  int iVar1;
  bool bVar2;
  int iVar5;
  undefined8 uVar3;
  undefined8 uVar4;
  int *piVar6;
  ulonglong uVar7;
  int iVar8;
  byte bVar9;
  int *piVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_70 [4];
  int iStack_6c;
  int aiStack_68 [26];
  
  piVar10 = *(int **)(param_1 + 0x14);
  bVar9 = 1;
  if (piVar10 != *(int **)(param_1 + 0x18)) {
    dVar12 = (double)lbl_821AAD20;
    do {
      if (piVar10[3] == 0) {
        uVar7 = (ulonglong)lbl_83213FC8;
        if (uVar7 == 0) {
          uVar7 = fn_828A17A0();
        }
        piVar6 = (int *)fn_828D0BE0(&stack0x00000000 + -0x70,uVar7,1,piVar10 + 5,piVar10 + 0xe,
                                      piVar10 + 0x10);
        iVar8 = 0;
        iVar5 = 0;
        if ((int *)(&stack0x00000000 + -0x68) != piVar6) {
          iVar5 = piVar6[1];
          piVar6[1] = 0;
          iVar8 = *piVar6;
          *piVar6 = 0;
        }
        iVar1 = piVar10[1];
        piVar10[1] = iVar5;
        *piVar10 = iVar8;
        if (iVar1 != 0) {
          fn_822315A0();
        }
        if (iStack_6c != 0) {
          fn_822315A0();
        }
        piVar10[3] = 1;
      }
      else if (piVar10[3] == 1) {
        iVar5 = *(int *)(*piVar10 + 0x7c);
        if ((((iVar5 - 1U < 5) && (iVar5 != 1)) && (iVar5 != 2)) && (iVar5 != 3)) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if (bVar2) {
          if (*(int *)(*piVar10 + 0x80) == 1) {
            dVar11 = (double)fn_828CF9E8();
            piVar10[4] = (int)(float)dVar11;
            piVar10[3] = 2;
          }
          else {
            piVar10[4] = (int)(float)dVar12;
            piVar10[3] = 3;
          }
        }
        if ((param_2 != '\0') && (piVar10[3] != 1)) {
          iVar5 = fn_8265C9E0(200);
          if (iVar5 == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = fn_828D33C0((double)(float)piVar10[4]);
          }
          fn_82886518(uVar3,500,0xffffffffffffffff);
          fn_8289EEE0(*(undefined4 *)(param_1 + 0x24));
          uVar4 = fn_823AA970();
          fn_828BE208(*(undefined4 *)(param_1 + 0x24),uVar3,uVar4,0);
        }
      }
      piVar6 = piVar10 + 3;
      piVar10 = piVar10 + 0x14;
      bVar9 = -(*piVar6 != 1) & bVar9;
    } while (piVar10 != *(int **)(param_1 + 0x18));
  }
  return bVar9;
}

