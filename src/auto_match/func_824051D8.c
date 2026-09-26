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
extern unsigned int *auStack_90;
extern int fn_822315A0();
extern int fn_822BE9A0();
extern int fn_82321370();
extern int fn_82359C18();
extern int fn_823F2E20();
extern int fn_82405638();
extern int fn_82405E08();
extern unsigned int iStack_58;
extern unsigned int iStack_78;
extern unsigned int iStack_8c;
extern unsigned int lbl_821B7D9C;
extern unsigned int lbl_82406328;
extern unsigned int uStack_54;
extern unsigned int uStack_74;
extern unsigned int uStack_88;


/* WARNING: Removing unreachable block (ram,0x82405348) */
/* WARNING: Removing unreachable block (ram,0x82405350) */
/* WARNING: Removing unreachable block (ram,0x82405364) */
/* WARNING: Removing unreachable block (ram,0x8240537c) */
/* WARNING: Removing unreachable block (ram,0x82405390) */
/* WARNING: Removing unreachable block (ram,0x82405394) */

void fn_824051D8(int param_1)

{
  int *piVar1;
  int *piVar3;
  longlong lVar2;
  int *piVar4;
  int *piVar5;
  undefined1 auStack_90 [4];
  int iStack_8c;
  undefined4 uStack_88;
  undefined **ppuStack_80;
  undefined *puStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  undefined ***pppuStack_70;
  undefined **ppuStack_60;
  undefined *puStack_5c;
  int iStack_58;
  undefined4 uStack_54;
  undefined ***pppuStack_50;
  
  (**(code **)(**(int **)(param_1 + 0x14) + 4))();
  fn_822BE9A0();
  (**(code **)(**(int **)(param_1 + 0x14) + 8))();
  fn_822BE9A0();
  piVar3 = (int *)(**(code **)(**(int **)(*(int *)(param_1 + 8) + 0x3ec) + 0xc))();
  (**(code **)(*piVar3 + 8))();
  pppuStack_70 = &ppuStack_80;
  ppuStack_80 = &lbl_821B7D9C;
  puStack_7c = &lbl_82406328;
  uStack_74 = uStack_88;
  iStack_78 = param_1;
  lVar2 = (**(code **)(**(int **)(param_1 + 0x14) + 4))();
  fn_82321370(auStack_90,lVar2 + 0x508,&ppuStack_80);
  fn_823F2E20(param_1 + 0xa4,auStack_90);
  if (iStack_8c != 0) {
    fn_822315A0();
  }
  fn_82359C18(&ppuStack_80);
  ppuStack_60 = &lbl_821B7D9C;
  pppuStack_50 = &ppuStack_60;
  puStack_5c = &lbl_82406328;
  uStack_54 = uStack_88;
  iStack_58 = param_1;
  lVar2 = (**(code **)(**(int **)(param_1 + 0x14) + 8))();
  fn_82321370(auStack_90,lVar2 + 0x508,&ppuStack_60);
  fn_823F2E20(param_1 + 0xac,auStack_90);
  if (iStack_8c != 0) {
    fn_822315A0();
  }
  fn_82359C18(&ppuStack_60);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x40);
  piVar3 = *(int **)(param_1 + 0x1c);
  if (piVar3 != *(int **)(param_1 + 0x20)) {
    piVar1 = *(int **)(param_1 + 0x20);
    if (piVar3 != piVar1) {
      piVar5 = piVar3 + 1;
      do {
        if (*piVar5 != 0) {
          fn_822315A0();
        }
        piVar4 = piVar5 + 1;
        piVar5 = piVar5 + 2;
      } while (piVar4 != piVar1);
    }
    *(int **)(param_1 + 0x20) = piVar3;
  }
  fn_82405E08(param_1);
  fn_82405638(param_1,0);
  return;
}

