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
extern int fn_8229ACA0();
extern int fn_8229AD30();
extern int fn_8229AD90();
extern int fn_822ABA88();
extern int fn_822B67F8();
extern int fn_822B98A8();
extern int fn_82374DA8();


void fn_82370850(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  
  iVar1 = *(int *)(param_1 + 0x204);
  fn_8229ACA0(*(undefined4 *)(param_1 + 0xd4),*(undefined4 *)(param_1 + 0xd0));
  iVar7 = 0;
  piVar2 = *(int **)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x340) = 0;
  if (iVar1 == 0) {
    lVar8 = 0;
    if ((piVar2[1] - *piVar2 & 0xfffffffcU) != 0) {
      do {
        piVar2 = *(int **)(**(int **)(param_1 + 8) + iVar7);
        uVar6 = (ulonglong)*(uint *)(piVar2[4] * 4 + *piVar2);
        uVar4 = fn_822ABA88(uVar6,0);
        fn_822ABA88(uVar6,1);
        if ((*(int *)(param_1 + 0xa0) == 0) || (*(int *)(*(int *)(param_1 + 0xa0) + 0x40) != 1)) {
          uVar3 = *(undefined4 *)(param_1 + 0xd4);
          fn_822B67F8();
          uVar5 = fn_822B98A8();
          fn_822B67F8(uVar4);
          uVar4 = fn_822B98A8();
          fn_8229AD90(uVar3,lVar8,uVar4,uVar5);
        }
        else {
          uVar3 = *(undefined4 *)(param_1 + 0xd4);
          fn_822B67F8(uVar4);
          uVar4 = fn_822B98A8();
          fn_8229AD30(uVar3,lVar8,uVar4);
        }
        lVar8 = lVar8 + 1;
        iVar7 = iVar7 + 4;
      } while ((int)lVar8 < (*(int **)(param_1 + 8))[1] - **(int **)(param_1 + 8) >> 2);
    }
  }
  else {
    fn_822ABA88(*(undefined4 *)((*(int **)*piVar2)[4] * 4 + **(int **)*piVar2),0);
    uVar3 = *(undefined4 *)(param_1 + 0xd4);
    fn_822B67F8();
    uVar4 = fn_822B98A8();
    fn_8229AD30(uVar3,0,uVar4);
  }
  fn_82374DA8(param_1);
  return;
}

