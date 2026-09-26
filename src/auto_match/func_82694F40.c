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
extern int fn_8267BE38();
extern int fn_8267C4F0();
extern int fn_8268AFB0();
extern int fn_8268AFD8();
extern int fn_8268B1F0();
extern int fn_82693F78();
extern int fn_82768F38();
extern unsigned int lbl_831E7E64;
extern U64 storeWordConditionalIndexed();


void fn_82694F40(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  uint *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  int *piVar9;
  char in_RESERVE;
  byte in_cr0;
  uint auStack_60 [24];
  
  fn_8268AFB0(auStack_60,lbl_831E7E64);
  uVar7 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    do {
      iVar1 = *(int *)(param_1 + 0xc);
      lVar8 = 0x32;
      piVar9 = (int *)(iVar1 + 8);
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(iVar1 + 4);
      do {
        if ((*piVar9 != 0) && (piVar9 != *(int **)(param_1 + 0x18))) {
          if ((uVar7 & 0xffffffff) < 0x10) {
            uVar5 = 0xffffffff820060cc;
            if ((uVar7 & 0xffffffff) == 0) {
              uVar5 = 0xffffffff820060d0;
            }
            fn_8268B1F0(auStack_60,uVar5,0xffffffffffffffff);
            fn_8268B1F0(auStack_60,*piVar9,0xffffffffffffffff);
            fn_8268B1F0(auStack_60,0xffffffff820060d0,0xffffffffffffffff);
          }
          uVar7 = uVar7 + 1;
          if ((piVar9[3] & 0x40000000U) == 0) {
            puVar2 = (undefined4 *)*piVar9;
            if ((uint)piVar9[4] < 0xc) {
              *puVar2 = *(undefined4 *)(param_1 + 0x10);
              *(undefined4 **)(param_1 + 0x10) = puVar2;
            }
            else {
              fn_8267BE38();
            }
          }
        }
        lVar8 = lVar8 + -1;
        in_cr0 = (lVar8 == 0) << 1;
        piVar9 = piVar9 + 5;
      } while (lVar8 != 0);
      fn_8267BE38(iVar1);
    } while (*(int *)(param_1 + 0xc) != 0);
  }
  while (*(int *)(param_1 + 0x14) != 0) {
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x7e4);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x7e0);
    fn_8267BE38(uVar3);
  }
  if (((uVar7 & 0xffffffff) != 0) && (*(uint *)(param_1 + 0x1c) != 0)) {
    fn_82693F78((ulonglong)*(uint *)(param_1 + 0x1c) + 0xc,0xffffffff82006088,
                  ((ulonglong)*(uint *)(param_1 + 0x20) & 0xfffffffc) + 8,uVar7);
    uVar7 = (ulonglong)auStack_60[0];
    if (uVar7 == 0) {
      uVar7 = 0xffffffff82196582;
    }
    fn_82693F78((ulonglong)*(uint *)(param_1 + 0x1c) + 0xc,0xffffffff8200606c,uVar7);
  }
  fn_8268AFD8(auStack_60);
  lVar8 = ((ulonglong)*(uint *)(param_1 + 0x20) & 0xfffffffc) + 4;
  do {
    puVar6 = (uint *)lVar8;
    uVar7 = (ulonglong)*puVar6;
    if (in_RESERVE != '\0') {
      uVar4 = storeWordConditionalIndexed(uVar7 - 1,0,lVar8);
      *puVar6 = uVar4;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  if (uVar7 == 1) {
    fn_8267BE38();
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    fn_8267C4F0();
  }
  fn_82768F38(param_1);
  return;
}

