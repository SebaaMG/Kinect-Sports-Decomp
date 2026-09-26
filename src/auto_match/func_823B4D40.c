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
extern int fn_822315A0();
extern int fn_82359C18();
extern int fn_823B8DA0();
extern int fn_823B9060();
extern int fn_823B92F8();
extern int fn_823B9360();
extern int fn_823B93C0();
extern int fn_825AD4B8();
extern int fn_8265CA20();
extern int fn_8288B638();
extern unsigned int *lbl_8328A688;
extern U64 storeWordConditionalIndexed();


void fn_823B4D40(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  longlong lVar6;
  uint *puVar7;
  int *piVar8;
  int iVar9;
  char in_RESERVE;
  byte bVar10;
  
  if (lbl_8328A688 != (int *)0x0) {
    iVar9 = -(int)lbl_8328A688 + -0x7cd75988;
    (**(code **)(*lbl_8328A688 + 0xc))
              (lbl_8328A688,iVar9 - (-(int)lbl_8328A688 + -0x7cd75989 + (uint)(iVar9 == 0)));
  }
  lbl_8328A688 = (int *)0x0;
  if (*(uint *)(param_1 + 0xc) != 0) {
    fn_8288B638((ulonglong)*(uint *)(param_1 + 0xc) - 0x68);
    fn_823B93C0(param_1 + 4,0);
  }
  iVar9 = *(int *)(param_1 + 0xac);
  if (iVar9 != 0) {
    iVar3 = *(int *)(param_1 + 0xb0);
    if (iVar9 != iVar3) {
      piVar8 = (int *)(iVar9 + 0xc);
      do {
        if (*piVar8 != 0) {
          fn_822315A0();
        }
        iVar9 = iVar9 + 0x10;
        piVar8 = piVar8 + 4;
      } while (iVar9 != iVar3);
    }
    fn_8265CA20(*(undefined4 *)(param_1 + 0xac));
  }
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  fn_823B8DA0(param_1 + 0x94);
  fn_8265CA20(*(undefined4 *)(param_1 + 0x94));
  *(undefined4 *)(param_1 + 0x94) = 0;
  piVar8 = *(int **)(*(int *)(param_1 + 0x88) + 4);
  cVar1 = *(char *)((int)piVar8 + 0x19);
  while (cVar1 == '\0') {
    fn_823B9360(param_1 + 0x84,piVar8[2]);
    piVar4 = (int *)*piVar8;
    if (piVar8[5] != 0) {
      fn_822315A0();
    }
    fn_8265CA20(piVar8);
    piVar8 = piVar4;
    cVar1 = *(char *)((int)piVar4 + 0x19);
  }
  *(int *)(*(int *)(param_1 + 0x88) + 4) = *(int *)(param_1 + 0x88);
  *(undefined4 *)*(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_1 + 0x88);
  *(int *)(*(int *)(param_1 + 0x88) + 8) = *(int *)(param_1 + 0x88);
  *(undefined4 *)(param_1 + 0x8c) = 0;
  fn_8265CA20(*(undefined4 *)(param_1 + 0x88));
  fn_825AD4B8(param_1 + 0x6c);
  fn_8265CA20(*(undefined4 *)(param_1 + 0x6c));
  *(undefined4 *)(param_1 + 0x6c) = 0;
  piVar8 = *(int **)(*(int *)(param_1 + 0x60) + 4);
  cVar1 = *(char *)((int)piVar8 + 0x35);
  while (bVar10 = (cVar1 == '\0') << 1, cVar1 == '\0') {
    fn_823B92F8(param_1 + 0x5c,piVar8[2]);
    piVar4 = (int *)*piVar8;
    fn_823B9060(piVar8 + 6);
    fn_8265CA20(piVar8[6]);
    piVar8[6] = 0;
    fn_8265CA20(piVar8);
    piVar8 = piVar4;
    cVar1 = *(char *)((int)piVar4 + 0x35);
  }
  *(int *)(*(int *)(param_1 + 0x60) + 4) = *(int *)(param_1 + 0x60);
  *(undefined4 *)*(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(int *)(*(int *)(param_1 + 0x60) + 8) = *(int *)(param_1 + 0x60);
  *(undefined4 *)(param_1 + 100) = 0;
  fn_8265CA20(*(undefined4 *)(param_1 + 0x60));
  fn_82359C18(param_1 + 0x38);
  if ((ulonglong)*(uint *)(param_1 + 0xc) != 0) {
    lVar6 = (ulonglong)*(uint *)(param_1 + 0xc) + 0xc;
LAB_823b4f30:
    do {
      puVar7 = (uint *)lVar6;
      uVar2 = *puVar7;
      if (uVar2 == 0) {
        if (in_RESERVE != '\0') {
          uVar5 = storeWordConditionalIndexed(1,0,lVar6);
          *puVar7 = uVar5;
          bVar10 = 2;
        }
        if (!(bool)(bVar10 >> 1 & 1)) goto LAB_823b4f30;
      }
      else if (in_RESERVE != '\0') {
        uVar5 = storeWordConditionalIndexed((ulonglong)uVar2,0,lVar6);
        *puVar7 = uVar5;
        bVar10 = 2;
      }
    } while (uVar2 != 0);
    sync(1);
    *(undefined4 *)(*(int *)(param_1 + 4) + 4) = *(undefined4 *)(param_1 + 8);
    **(undefined4 **)(param_1 + 8) = *(undefined4 *)(param_1 + 4);
    sync(1);
    *puVar7 = 0;
  }
  return;
}

