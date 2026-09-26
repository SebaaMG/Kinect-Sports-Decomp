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
extern int fn_82FAB9C0();
extern int fn_82FEF4C8();
extern int fn_82FEFC98();
extern int fn_82FEFCC8();
extern int fn_830007F8();
extern int fn_83032BE0();
extern int fn_83032D88();
extern unsigned int lbl_832642E0;


void fn_83039278(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  bool bVar6;
  
  fn_82FEFC98();
  piVar2 = (int *)0x0;
  if (*(int *)(param_1 + 0x1dc) != 0) {
    piVar2 = (int *)fn_82FAB9C0((ulonglong)lbl_832642E0 + 4);
  }
  if ((((*(byte *)(param_1 + 0x1e4) & 0x20) == 0) || (*(int *)(param_1 + 0x1dc) == 0)) ||
     (cVar3 = fn_830007F8(piVar2,*(undefined4 *)(param_2 + 0xc),0), cVar3 != '\0')) {
    iVar1 = *(int *)(param_1 + 0x188);
    *(undefined4 *)(param_1 + 0x1dc) = 0;
    *(byte *)(param_1 + 0x1e4) = *(byte *)(param_1 + 0x1e4) & 0xdf;
    if (iVar1 != 0) {
      if (*(int *)(iVar1 + 8) != *(int *)(iVar1 + 4)) {
        do {
          iVar1 = *(int *)(param_1 + 0x188);
          if (*(int *)(*(int *)(iVar1 + 8) + -8) == 0) {
            cVar3 = fn_830007F8(*(undefined4 *)(*(int *)(iVar1 + 8) + -0x14),
                                      *(undefined4 *)(param_2 + 0xc),0);
            if (cVar3 == '\0') break;
            iVar1 = *(int *)(param_1 + 0x18c);
            *(int *)(param_1 + 0x18c) = iVar1 + -1;
            while (iVar1 != 1) {
              uVar4 = *(int *)(param_1 + 0x18c) - 1;
              if (uVar4 < 0x20) {
                bVar6 = (*(uint *)(param_1 + 0x1d0) & 1 << (uVar4 & 0x3f)) != 0;
              }
              else {
                bVar6 = false;
              }
              if (bVar6) break;
              iVar1 = *(int *)(param_1 + 0x18c);
              *(int *)(param_1 + 0x18c) = iVar1 + -1;
            }
            iVar1 = *(int *)(param_1 + 0x188);
            fn_83032BE0((ulonglong)*(uint *)(iVar1 + 8) - 0x14);
            *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + -0x14;
          }
          else {
            uVar5 = (ulonglong)*(uint *)(iVar1 + 4);
            uVar4 = *(uint *)(iVar1 + 8);
            if (uVar5 != uVar4) {
              do {
                fn_83032BE0(uVar5);
                uVar5 = uVar5 + 0x14;
              } while ((uVar5 & 0xffffffff) != (ulonglong)uVar4);
            }
            *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(iVar1 + 4);
          }
        } while (*(int *)(*(int *)(param_1 + 0x188) + 8) != *(int *)(*(int *)(param_1 + 0x188) + 4))
        ;
      }
      iVar1 = *(int *)(param_1 + 0x188);
      if (((*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4)) / 0x14 == 0) &&
         (*(undefined4 *)(param_1 + 0x188) = 0, iVar1 != 0)) {
        fn_83032D88();
      }
    }
  }
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  fn_82FEF4C8(param_1,param_2);
  fn_82FEFCC8(param_1);
  return;
}

