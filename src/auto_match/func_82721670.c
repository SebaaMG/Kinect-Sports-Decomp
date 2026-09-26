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
extern int fn_8267B890();
extern int fn_826824B0();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82696BC8();
extern int fn_826972E0();
extern int fn_826A7398();
extern int fn_82743888();
extern int fn_82744378();
extern int fn_82F68918();
extern unsigned int lbl_82005720;
extern unsigned int lbl_82005730;


void fn_82721670(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int *piVar5;
  undefined8 uVar3;
  uint uVar6;
  ulonglong uVar4;
  uint uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dStack_50;
  double dStack_48;
  
  puVar1 = *(undefined1 **)(param_1 + 4);
  fn_826959C8(puVar1);
  *puVar1 = 0;
  piVar5 = (int *)fn_826A7398(*(undefined4 *)(param_1 + 0x18));
  uVar7 = 0;
  if (0 < *(int *)(param_1 + 0x1c)) {
    uVar2 = *(undefined4 *)(param_1 + 0x18);
    uVar3 = fn_826957D0(param_1,0);
    dVar8 = (double)fn_826972E0(uVar3,uVar2);
    uVar7 = (uint)dVar8;
  }
  uVar6 = (**(code **)(*piVar5 + 0xd0))(piVar5);
  if (uVar7 < uVar6) {
    if (uVar7 < 4) {
      piVar5 = piVar5 + uVar7 * 9 + 0x251;
    }
    else {
      piVar5 = (int *)0x0;
    }
    dVar9 = (double)(float)piVar5[5];
    dVar8 = (double)(float)piVar5[6];
    uVar4 = fn_8267B890(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x288),
                              0x30,0);
    if ((uVar4 & 0xffffffff) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = fn_82744378(uVar4,*(undefined4 *)(param_1 + 0x18));
    }
    dVar10 = lbl_82005730;
    dVar8 = (double)fn_82F68918(dVar8 + lbl_82005730);
    dStack_50 = (double)fn_82F68918(dVar9 + dVar10);
    dStack_50 = dStack_50 * lbl_82005720;
    dStack_48 = dVar8 * lbl_82005720;
    fn_82743888(uVar4,*(undefined4 *)(param_1 + 0x18),&dStack_50);
    fn_82696BC8(*(undefined4 *)(param_1 + 4),uVar4);
    if ((uVar4 & 0xffffffff) != 0) {
      fn_826824B0(uVar4);
    }
  }
  return;
}

