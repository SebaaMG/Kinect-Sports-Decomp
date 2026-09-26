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
extern int fn_8268AFB0();
extern int fn_8268AFD8();
extern int fn_8268B120();
extern int fn_8268B190();
extern int fn_8278D038();
extern unsigned int iStack_4c;
extern unsigned int lbl_831E7E64;
extern unsigned int uStack_50;


void fn_827A5970(undefined8 param_1,int *param_2,int *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uStack_50;
  int iStack_4c;
  
  uVar5 = param_3[1];
  fn_8268AFB0(&uStack_50,lbl_831E7E64);
  uVar6 = 0;
  if (uVar5 != 0) {
    do {
      if (iStack_4c != 0) {
        fn_8268B120(&uStack_50,0x2c);
      }
      uVar7 = uVar6;
      if (*(int *)(uVar6 * 0xc + *param_3) == 2) {
        uVar7 = uVar6 + 1;
        if (uVar5 < uVar6 + 2) goto LAB_827a5aa4;
      }
      iVar4 = uVar7 * 0xc;
      piVar3 = (int *)(*param_3 + iVar4);
      iVar8 = *piVar3;
      if ((iVar8 != 0) && ((iVar8 != 1 || ((uint)piVar3[2] < 3)))) goto LAB_827a5aa4;
      uVar1 = (ulonglong)(uint)piVar3[1];
      uVar2 = (ulonglong)(uint)piVar3[2];
      if (iVar8 == 1) {
        uVar1 = uVar1 + 2;
        uVar2 = uVar2 - 2;
      }
      fn_8268B190(&uStack_50,uVar1,uVar2);
      do {
        if (uVar5 <= uVar7) goto LAB_827a5a54;
        uVar7 = uVar7 + 1;
        piVar3 = (int *)(iVar4 + *param_3);
        iVar4 = iVar4 + 0xc;
      } while (*piVar3 != 5);
      uVar6 = uVar7;
    } while (uVar7 < uVar5);
  }
LAB_827a5a54:
  uVar5 = 0;
  if (param_2[1] != 0) {
    iVar8 = 0;
    do {
      uVar1 = (ulonglong)uStack_50;
      if ((ulonglong)uStack_50 == 0) {
        uVar1 = 0xffffffff82196582;
      }
      fn_8278D038(*(undefined4 *)(iVar8 + *param_2),uVar1,0xffffffffffffffff);
      uVar5 = uVar5 + 1;
      iVar8 = iVar8 + 4;
    } while (uVar5 < (uint)param_2[1]);
  }
LAB_827a5aa4:
  fn_8268AFD8(&uStack_50);
  return;
}

