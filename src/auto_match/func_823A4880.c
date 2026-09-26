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
extern unsigned int *auStack_38;
extern int fn_822315A0();
extern int fn_822EFBF0();
extern int fn_823831D8();
extern int fn_82398F48();
extern int fn_82399038();
extern int fn_82399C38();
extern int fn_823A5108();
extern int fn_824BD858();
extern int fn_8288B760();
extern unsigned int iStack_34;
extern unsigned int iStack_3c;
extern unsigned int uStack_40;
extern V16 vectorConditionalSelect();


void fn_823A4880(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  bool bVar9;
  undefined1 in_vs32 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  undefined4 in_register_00010430;
  undefined4 in_register_00010434;
  undefined4 in_register_00010438;
  undefined4 in_vr67;
  undefined4 uStack_40;
  int iStack_3c;
  undefined1 auStack_38 [4];
  int iStack_34;
  
  bVar9 = false;
  uStack_40 = 0;
  iVar1 = *(int *)(*(int *)(param_1 + 8) + 8);
  iVar2 = *(int *)(iVar1 + 0x1e4);
  iVar3 = *(int *)(iVar1 + 0x84);
  iVar1 = *(int *)(iVar1 + 0x1f8);
  if ((*(int **)(param_1 + 0xc) == (int *)0x0) || (**(int **)(param_1 + 0xc) == 0)) {
    if (((*(int *)(param_1 + 0x10) == 0) && (iVar2 != 0)) &&
       ((*(int *)(iVar2 + 0x114) != 0 || (*(int *)(iVar2 + 0x124) != 0)))) {
      *(undefined4 *)(param_1 + 0x10) = 1;
      vectorConditionalSelect(in_vs32,in_vs45,in_vs44);
      puVar7 = (undefined4 *)(iVar2 + 0x20U & 0xfffffff0);
      *puVar7 = in_register_00010430;
      puVar7[1] = in_register_00010434;
      puVar7[2] = in_register_00010438;
      puVar7[3] = in_vr67;
      if (iVar3 != 0) {
        puVar7 = (undefined4 *)fn_822EFBF0(&uStack_40,iVar3);
        fn_823831D8((ulonglong)*(uint *)*puVar7 + 400);
        if (iStack_3c != 0) {
          fn_822315A0();
        }
      }
    }
  }
  else {
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x24) != 0)) {
      if (*(int *)(iVar1 + 0x168) == 0) {
        uVar5 = *(uint *)(iVar1 + 0x16c);
      }
      else {
        uVar5 = fn_8288B760();
        uVar5 = uVar5 & 0xff;
      }
      if (uVar5 != 0) {
        fn_82398F48(iVar2,iVar1);
        iVar2 = *(int *)(*(int *)(param_1 + 8) + 8);
        iVar6 = fn_82399C38(iVar2);
        iVar2 = ((iVar6 == 0 ^ 1) + 2) * 0x10 + iVar2;
        fn_824BD858((double)*(float *)(iVar2 + 0x324),(double)*(float *)(iVar2 + 0x328));
      }
    }
    iVar2 = *(int *)(*(int *)(param_1 + 8) + 8);
    *(uint *)(iVar2 + 0x260) = *(uint *)(iVar2 + 0x260) | 0x40;
    iVar2 = *(int *)(*(int *)(param_1 + 8) + 8);
    *(uint *)(iVar2 + 0x260) = *(uint *)(iVar2 + 0x260) | 2;
    fn_823A5108(*(undefined4 *)(param_1 + 8),3);
  }
  if (*(int *)(param_1 + 0x10) == 0) {
LAB_823a4a44:
    bVar4 = false;
  }
  else {
    if (iVar3 != 0) {
      bVar9 = true;
      piVar8 = (int *)fn_822EFBF0(auStack_38,iVar3);
      if (*(int *)(*piVar8 + 0x3c) == 0) goto LAB_823a4a44;
    }
    bVar4 = true;
  }
  if ((bVar9) && (iStack_34 != 0)) {
    fn_822315A0();
  }
  if (bVar4) {
    if (iVar1 != 0) {
      fn_82399038(iVar1);
    }
    iVar1 = *(int *)(*(int *)(param_1 + 8) + 8);
    *(uint *)(iVar1 + 0x260) = *(uint *)(iVar1 + 0x260) | 2;
    fn_823A5108(*(undefined4 *)(param_1 + 8),4);
  }
  return;
}

