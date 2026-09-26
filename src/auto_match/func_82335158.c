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
extern int fn_82293818();
extern int fn_8229AAF8();
extern int fn_822ABA88();
extern int fn_8241AFD0();
extern int fn_8241F6A8();
extern unsigned int lbl_821CC160;


void fn_82335158(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int *piVar7;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x230) + 0x238);
  iVar6 = *piVar1;
  if ((*(float *)(iVar6 + 0xad4) < *(float *)(param_1 + 0x22c)) ||
     (*(float *)(param_1 + 0x228) <= *(float *)(iVar6 + 0xad4))) {
    if ((*(float *)(iVar6 + 0xad8) < *(float *)(param_1 + 0x22c)) ||
       (*(float *)(param_1 + 0x228) <= *(float *)(iVar6 + 0xad8))) {
      if (*(float *)(iVar6 + 0xadc) < *(float *)(param_1 + 0x228)) {
        *(undefined4 *)(*(int *)(param_1 + 0x230) + 0x29c) = 8;
        *(undefined4 *)(param_1 + 0x224) = 1;
        uVar3 = lbl_821CC160;
        *(undefined4 *)(param_1 + 0x228) = lbl_821CC160;
        *(undefined4 *)(param_1 + 0x22c) = uVar3;
      }
    }
    else if (piVar1 == *(int **)(iVar6 + 0x2b20)) {
      fn_8229AAF8(*(undefined4 *)(iVar6 + 0xd4));
    }
  }
  else {
    fn_8241AFD0(piVar1,*(undefined4 *)(param_1 + 0x25c),*(undefined4 *)(param_1 + 0x264),0);
    piVar7 = (int *)(piVar1[6] * 0x1ac + piVar1[2]);
    if (piVar7[8] == 0) {
      uVar5 = 0;
      if (*(int *)(param_1 + 0x25c) == 9) {
        uVar5 = 2;
      }
      else if (*(int *)(param_1 + 0x25c) == 10) {
        uVar5 = 1;
      }
      iVar6 = *piVar1;
      piVar2 = *(int **)(**(int **)(iVar6 + 8) + *piVar7 * 4);
      if (piVar1 == *(int **)(iVar6 + 0x2b20)) {
        lVar4 = fn_822ABA88((double)*(float *)(iVar6 + 0x658),(double)*(float *)(iVar6 + 0x65c),
                             *(undefined4 *)(piVar2[4] * 4 + *piVar2),0,
                             *(undefined4 *)(param_1 + 0x260),piVar7[5],uVar5);
        fn_82293818(*(undefined4 *)(iVar6 + 0xd4),lVar4 + 0x30);
      }
    }
    else {
      fn_8241F6A8(piVar1,piVar7[0xc]);
    }
  }
  return;
}

