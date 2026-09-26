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
extern unsigned int *auStack_40;
extern int fn_822315A0();
extern int fn_82522588();
extern unsigned int iStack_3c;
extern unsigned int lbl_821CC160;


void fn_82456E10(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  ulonglong uVar7;
  double dVar8;
  undefined1 auStack_40 [4];
  int iStack_3c;
  
  uVar7 = (ulonglong)*(uint *)*param_1;
  if (uVar7 != ((uint *)*param_1)[1]) {
    dVar8 = (double)lbl_821CC160;
    do {
      piVar4 = (int *)fn_82522588(auStack_40,uVar7);
      iVar2 = *piVar4;
      if (*(int *)(iVar2 + 0x2d4) == 1) {
        iVar6 = *(int *)(iVar2 + 0x2ac);
        uVar5 = 0x831d3350;
        if (iVar6 == 1) {
          uVar5 = 0x831d3378;
        }
LAB_82456eb4:
        *(undefined4 *)(iVar2 + 0x2a8) = uVar5;
LAB_82456eb8:
        *(undefined4 *)(iVar2 + 0x2b0) = 1;
        *(int *)(iVar2 + 0x2ac) = 1 - iVar6;
      }
      else {
        if (*(int *)(iVar2 + 0x2d4) != 2) {
          iVar6 = *(int *)(iVar2 + 0x2ac);
          if (iVar6 == 1) {
            uVar5 = 0x831d3328;
            goto LAB_82456eb4;
          }
          *(undefined4 *)(iVar2 + 0x2a8) = 0x831d3300;
          goto LAB_82456eb8;
        }
        *(undefined4 *)(iVar2 + 0x2b0) = 2;
        *(undefined4 *)(iVar2 + 0x2a8) = 0x831d33a0;
      }
      iVar6 = *(int *)(iVar2 + 0x2a8);
      iVar3 = *(int *)(*(int *)(iVar2 + 0x240) + 0x94);
      uVar5 = *(undefined4 *)(iVar6 + 0x24);
      uVar1 = *(undefined4 *)(iVar6 + 0x20);
      if (iVar3 != 0) {
        iVar3 = *(int *)(iVar3 + 0x1c);
        *(undefined4 *)(iVar3 + 0x24) = *(undefined4 *)(iVar6 + 0x1c);
        *(undefined4 *)(iVar3 + 0x28) = uVar1;
        *(undefined4 *)(iVar3 + 0x2c) = uVar5;
      }
      *(float *)(iVar2 + 0x2d0) = (float)dVar8;
      *(undefined4 *)(iVar2 + 0x294) = 1;
      *(undefined4 *)(iVar2 + 0x2b4) = 0;
      if (iStack_3c != 0) {
        fn_822315A0();
      }
      uVar7 = uVar7 + 8;
    } while ((uVar7 & 0xffffffff) != (ulonglong)*(uint *)(*param_1 + 4));
  }
  return;
}

