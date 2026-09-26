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
extern unsigned int *auStack_60;
extern int fn_8267B890();
extern int fn_8267C498();
extern int fn_82696958();
extern int fn_8269A6A0();
extern int fn_8269AD40();
extern int fn_8269F500();
extern int fn_826BD928();
extern int fn_826C51B0();
extern int fn_826CC448();
extern int fn_826CDDC0();
extern int fn_826D4148();
extern int fn_826DCF88();
extern int fn_826F6FA8();
extern int fn_82703090();
extern int fn_82703C40();
extern int fn_827043C0();
extern int fn_82705900();
extern unsigned int uStack_54;


undefined8 fn_82705BD8(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  bool bVar3;
  int iVar6;
  int *piVar7;
  int *piVar8;
  undefined8 uVar4;
  int *piVar9;
  ulonglong uVar5;
  int *piVar10;
  undefined8 uVar11;
  undefined4 auStack_60 [2];
  int *piStack_58;
  undefined4 uStack_54;
  
  sync(1);
  bVar3 = *(int *)(*(int *)(param_1 + 0x14) + 0x28) != 1;
  if ((*(char *)(*(int *)(param_1 + 0x10) + 0x78) == '\0') || (bVar3)) {
    if (bVar3) {
      return 0;
    }
    if ((*(int *)(param_1 + 0x20) == 0) &&
       (iVar6 = *(int *)(*(int *)(param_1 + 0x10) + 0x14), iVar6 != 0)) {
      iVar6 = fn_8269A6A0(iVar6,*(undefined4 *)(param_1 + 0xc));
      if (iVar6 != 0) {
        *(int *)(iVar6 + 4) = *(int *)(iVar6 + 4) + 1;
      }
      if (*(int *)(param_1 + 0x20) != 0) {
        fn_8267C498();
      }
      *(int *)(param_1 + 0x20) = iVar6;
      if (iVar6 == 0) {
        return 1;
      }
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(iVar6 + 0x10);
    }
    piVar7 = (int *)fn_826F6FA8(*(undefined4 *)(param_1 + 0xc),0);
    if (piVar7 != (int *)0x0) {
      iVar6 = (**(code **)(*piVar7 + 0x5c))();
      piVar8 = (int *)fn_82696958((ulonglong)*(uint *)(param_1 + 0x10) + 0x20,iVar6);
      piVar7 = *(int **)(*(int *)(param_1 + 0x14) + 0x24);
      bVar3 = *(char *)(*(int *)(iVar6 + 0x78) + 0x2a4) != '\x01';
      if (piVar7 == (int *)0x0) {
        if (*(int *)(*(int *)(param_1 + 0x10) + 0x14) == 0) {
          if (*(int *)(*(int *)(param_1 + 0x10) + 0x10) != -1) {
            iVar6 = fn_826F6FA8(*(undefined4 *)(param_1 + 0xc));
            if (iVar6 != 0) {
              *(int *)(iVar6 + 4) = *(int *)(iVar6 + 4) + 1;
            }
            if (*(int *)(param_1 + 0x20) != 0) {
              fn_8267C498();
            }
            *(int *)(param_1 + 0x20) = iVar6;
          }
        }
        else {
          piVar7 = *(int **)(*(int *)(param_1 + 0x20) + 0x20);
          if (piVar7 == (int *)0x0) {
            return 1;
          }
          auStack_60[0] = 0x10001;
          uVar4 = (**(code **)(*piVar7 + 0x48))(piVar7);
          fn_826DCF88(&piStack_58,uVar4,auStack_60);
          auStack_60[0] = *(undefined4 *)(param_1 + 0x24);
          piVar9 = (int *)(**(code **)(*piStack_58 + 0x24))(piStack_58,piVar7,auStack_60,uStack_54);
          piVar9[6] = *(int *)(*(int *)(param_1 + 0x20) + 0x18);
          piVar9[5] = *(int *)(*(int *)(param_1 + 0x20) + 0x14);
          piVar10 = *(int **)(param_1 + 0x20);
          if (((uint)piVar10[0x23] >> 0xe & 1) == 0) {
            uVar5 = (ulonglong)(uint)piVar10[0x20];
            if (piVar10[0x20] == 0) {
              uVar5 = fn_8269F500(piVar10);
            }
            if ((uVar5 & 0xffffffff) == 0) {
              iVar6 = (**(code **)(*piVar10 + 0x58))(piVar10);
              uVar5 = (ulonglong)*(uint *)(iVar6 + 0x78);
            }
            (**(code **)(*piVar9 + 0x20))(piVar9,uVar5 + 8);
          }
          fn_8269AD40(piVar9,*(undefined4 *)(param_1 + 0xc));
          (**(code **)(*piVar7 + 0x110))(piVar7,*(undefined4 *)(param_1 + 0x20),piVar9);
          piVar9[1] = piVar9[1] + 1;
          if (*(int *)(param_1 + 0x20) != 0) {
            fn_8267C498();
          }
          *(int **)(param_1 + 0x20) = piVar9;
          fn_8267C498(piVar9);
        }
        if ((*(int **)(param_1 + 0x20) != (int *)0x0) && (piVar8 != (int *)0x0)) {
          uVar4 = (**(code **)(**(int **)(param_1 + 0x20) + 0x5c))();
          (**(code **)(*piVar8 + 0x30))
                    (piVar8,uVar4,*(undefined4 *)(param_1 + 0x20),0xffffffff8200de4c,0);
        }
        if (*(int *)(*(int *)(param_1 + 0x10) + 0x10) != -1) {
          fn_827043C0(*(undefined4 *)(param_1 + 0xc));
        }
      }
      else {
        iVar6 = *(int *)(param_1 + 0x20);
        if ((iVar6 == 0) ||
           (((*(byte *)(iVar6 + 0x66) & 0x10) == 0 && (-2 < *(int *)(iVar6 + 0x14))))) {
          if (*(char *)(param_1 + 0x28) == '\0') {
            piVar10 = (int *)0x0;
            if (*(int *)(*(int *)(param_1 + 0x10) + 0x10) == -1) {
              if ((*(int *)(*(int *)(param_1 + 0x10) + 0x14) != 0) &&
                 (piVar10 = *(int **)(iVar6 + 0x20), piVar10 == (int *)0x0)) {
                return 1;
              }
            }
            else {
              fn_827043C0(*(undefined4 *)(param_1 + 0xc));
              *(undefined4 *)(param_1 + 0x24) = 0x40000;
            }
            uVar5 = fn_8267B890(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x14),0x1d8,0);
            if ((uVar5 & 0xffffffff) == 0) {
              piVar9 = (int *)0x0;
            }
            else {
              auStack_60[0] = *(undefined4 *)(param_1 + 0x24);
              piVar9 = (int *)fn_826D4148(uVar5,*(undefined4 *)(piVar7[7] + 0xc),piVar7,
                                                *(undefined4 *)(param_1 + 0xc),piVar10,auStack_60,1)
              ;
            }
            if (bVar3) {
              piVar9[0x23] = piVar9[0x23] | 4;
            }
            if (*(int *)(*(int *)(param_1 + 0x10) + 0x14) == 0) {
              fn_826CDDC0(piVar9,*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x10));
              fn_82703090(*(undefined4 *)(param_1 + 0xc),
                            *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x10),piVar9);
              *(uint *)(*(int *)(param_1 + 0xc) + 0xb00) =
                   *(uint *)(*(int *)(param_1 + 0xc) + 0xb00) & 0xfffffeff;
            }
            else {
              fn_8269AD40(piVar9,*(undefined4 *)(param_1 + 0xc));
              piVar9[6] = *(int *)(*(int *)(param_1 + 0x20) + 0x18);
              piVar9[5] = *(int *)(*(int *)(param_1 + 0x20) + 0x14);
              piVar1 = *(int **)(param_1 + 0x20);
              if (((uint)piVar1[0x23] >> 0xe & 1) == 0) {
                uVar5 = (ulonglong)(uint)piVar1[0x20];
                if (piVar1[0x20] == 0) {
                  uVar5 = fn_8269F500(piVar1);
                }
                if ((uVar5 & 0xffffffff) == 0) {
                  iVar6 = (**(code **)(*piVar1 + 0x58))(piVar1);
                  uVar5 = (ulonglong)*(uint *)(iVar6 + 0x78);
                }
                (**(code **)(*piVar9 + 0x20))(piVar9,uVar5 + 8);
              }
              (**(code **)(*piVar10 + 0x114))(piVar10,*(undefined4 *)(param_1 + 0x20),piVar9);
            }
            (**(code **)(*piVar9 + 0x124))(piVar9,1);
            piVar9[1] = piVar9[1] + 1;
            if (*(int *)(param_1 + 0x20) != 0) {
              fn_8267C498();
            }
            *(int **)(param_1 + 0x20) = piVar9;
            if (piVar8 != (int *)0x0) {
              uVar4 = (**(code **)(*piVar9 + 0x5c))();
              (**(code **)(*piVar8 + 0x24))(piVar8,uVar4,*(undefined4 *)(param_1 + 0x20));
              uVar2 = *(undefined4 *)(piVar7[7] + 0x88);
              *(undefined4 *)(param_1 + 0x2c) = uVar2;
              (**(code **)(*piVar8 + 0x34))
                        (piVar8,uVar4,*(undefined4 *)(param_1 + 0x20),uVar2,
                         *(undefined4 *)(*(int *)(*(int *)(piVar7[7] + 0xc) + 0x20) + 0x28));
            }
            *(undefined1 *)(param_1 + 0x28) = 1;
            fn_8267C498(piVar9);
          }
          if ((*(int *)(param_1 + 0x2c) != *(int *)(piVar7[7] + 0x88)) && (piVar8 != (int *)0x0)) {
            uVar4 = (**(code **)(**(int **)(param_1 + 0x20) + 0x5c))();
            uVar2 = *(undefined4 *)(piVar7[7] + 0x88);
            *(undefined4 *)(param_1 + 0x2c) = uVar2;
            (**(code **)(*piVar8 + 0x34))
                      (piVar8,uVar4,*(undefined4 *)(param_1 + 0x20),uVar2,
                       *(undefined4 *)(*(int *)(*(int *)(piVar7[7] + 0xc) + 0x20) + 0x28));
          }
          if (((!bVar3) && (*(char *)(param_1 + 0x30) == '\0')) &&
             ((*(uint *)(piVar7[7] + 0x7c) & 0x100) != 0)) {
            if (*(int *)(*(int *)(param_1 + 0x10) + 0x10) == -1) {
              piVar10 = (int *)fn_826BD928((ulonglong)*(uint *)(param_1 + 0x20) + 0x68);
            }
            else {
              piVar10 = (int *)fn_826F6FA8(*(undefined4 *)(param_1 + 0xc));
            }
            if (piVar10 != (int *)0x0) {
              piVar10[1] = piVar10[1] + 1;
              (**(code **)(*piVar10 + 0x124))(piVar10,0);
              uVar2 = *(undefined4 *)(piVar7[7] + 0x88);
              uVar4 = (**(code **)(*piVar7 + 0x14))(piVar7);
              fn_826C51B0(piVar10,uVar2,uVar4);
              fn_826CC448(piVar10);
              fn_82703C40(*(undefined4 *)(param_1 + 0xc));
              if (piVar8 != (int *)0x0) {
                uVar4 = (**(code **)(*piVar10 + 0x5c))(piVar10);
                (**(code **)(*piVar8 + 0x2c))(piVar8,uVar4,piVar10);
              }
            }
            *(undefined1 *)(param_1 + 0x30) = 1;
            if (piVar10 != (int *)0x0) {
              fn_8267C498(piVar10);
            }
          }
          if ((*(uint *)(piVar7[7] + 0x7c) & 3) < 2) {
            return 0;
          }
          if ((*(uint *)(piVar7[7] + 0x7c) & 2) == 0) {
            if (piVar8 != (int *)0x0) {
              uVar4 = (**(code **)(**(int **)(param_1 + 0x20) + 0x5c))();
              if (*(int *)(*(int *)(*(int *)(piVar7[7] + 0xc) + 0x20) + 0x74) == 4) {
                uVar11 = 0xffffffff8200de44;
              }
              else {
                uVar11 = 0xffffffff8200de38;
              }
              (**(code **)(*piVar8 + 0x30))(piVar8,uVar4,*(undefined4 *)(param_1 + 0x20),uVar11,0);
            }
          }
          else {
            if (*(int *)(*(int *)(param_1 + 0x10) + 0x10) == -1) {
              piVar10 = (int *)fn_826BD928((ulonglong)*(uint *)(param_1 + 0x20) + 0x68);
              if (piVar10 != (int *)0x0) {
                piVar10[1] = piVar10[1] + 1;
              }
              fn_82705900(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x20));
            }
            else {
              piVar10 = (int *)fn_826F6FA8(*(undefined4 *)(param_1 + 0xc));
              if (piVar10 != (int *)0x0) {
                piVar10[1] = piVar10[1] + 1;
              }
            }
            if (piVar10 != (int *)0x0) {
              if (bVar3) {
                piVar10[0x23] = piVar10[0x23] & 0xfffffffb;
              }
              if (piVar8 != (int *)0x0) {
                uVar4 = (**(code **)(*piVar10 + 0x5c))(piVar10);
                (**(code **)(*piVar8 + 0x28))(piVar8,uVar4,piVar10,0);
              }
              if (*(char *)(param_1 + 0x30) == '\0') {
                (**(code **)(*piVar10 + 0x124))(piVar10,0);
                uVar2 = *(undefined4 *)(piVar7[7] + 0x88);
                uVar4 = (**(code **)(*piVar7 + 0x14))(piVar7);
                fn_826C51B0(piVar10,uVar2,uVar4);
                fn_826CC448(piVar10);
                fn_82703C40(*(undefined4 *)(param_1 + 0xc));
                if (piVar8 != (int *)0x0) {
                  uVar4 = (**(code **)(*piVar10 + 0x5c))(piVar10);
                  (**(code **)(*piVar8 + 0x2c))(piVar8,uVar4,piVar10);
                }
              }
              *(undefined1 *)(param_1 + 0x30) = 1;
              fn_8267C498(piVar10);
            }
          }
        }
      }
    }
  }
  return 1;
}

