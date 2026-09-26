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
extern int fn_8252D9D0();
extern int fn_8252DA48();
extern int fn_82554260();
extern int fn_825A2108();
extern int fn_827F04B0();
extern int fn_827F0858();
extern int fn_827F2DD0();
extern unsigned int lbl_821CC160;


undefined4 fn_8252D108(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar5;
  ulonglong uVar3;
  undefined8 uVar4;
  int iVar6;
  uint uVar7;
  
  if (*(int *)(param_1 + 0x18c) == 0) {
    if (*(int **)(param_1 + 0x8c0) == (int *)0x0) {
      return 0;
    }
    uVar5 = (**(code **)(**(int **)(param_1 + 0x8c0) + 0x4c))();
    *(undefined4 *)(param_1 + 0x18c) = uVar5;
  }
  if ((*(int *)(param_1 + 400) == 0) && (*(int *)(param_1 + 0x1a4) != 0)) {
    uVar3 = fn_827F04B0(0x1a0);
    if ((uVar3 & 0xffffffff) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = fn_82554260(uVar3,*(undefined4 *)(param_1 + 0x18c),
                                *(undefined4 *)(param_1 + 0x1a4));
    }
    *(undefined4 *)(param_1 + 400) = uVar5;
    fn_827F2DD0((double)lbl_821CC160,*(undefined4 *)(param_1 + 0x18c));
    if (*(int *)(param_1 + 0x7b0) != 0) {
      uVar4 = fn_827F0858(*(undefined4 *)(param_1 + 400));
      fn_825A2108(param_1,*(undefined4 *)(param_1 + 400),uVar4);
    }
    iVar1 = *(int *)(param_1 + 400);
    uVar7 = 0;
    if (*(int *)(iVar1 + 0x18c) != 0) {
      iVar6 = 0;
      do {
        uVar7 = uVar7 + 1;
        iVar2 = *(int *)(*(int *)(iVar1 + 400) + iVar6);
        iVar6 = iVar6 + 4;
        *(code **)(iVar2 + 0x170) = fn_8252D9D0;
        *(code **)(iVar2 + 0x174) = fn_8252DA48;
        *(int *)(iVar2 + 0x178) = param_1;
      } while (uVar7 < *(uint *)(iVar1 + 0x18c));
    }
  }
  return *(undefined4 *)(param_1 + 400);
}

