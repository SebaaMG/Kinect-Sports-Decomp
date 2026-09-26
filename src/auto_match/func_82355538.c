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
extern int fn_8225C590();
extern int fn_8225F160();
extern int fn_822AB000();
extern int fn_822AE9D8();
extern int fn_82351510();
extern int fn_823546D0();
extern int fn_82356E38();
extern int fn_823577F0();
extern int fn_824601C0();
extern int fn_82490FC8();
extern int fn_8249ABC0();
extern int fn_8252DC18();
extern int fn_82534820();
extern int fn_82535298();
extern int fn_82536288();
extern int fn_82547C80();
extern int fn_82555A88();
extern int fn_825604A0();
extern int fn_82566E58();
extern int fn_8256A938();
extern int fn_8256BF18();
extern int fn_8256CF38();
extern int fn_8266C6D8();
extern int fn_8266C708();
extern int fn_8266EC60();
extern unsigned int lbl_821CC160;
extern unsigned int lbl_832765BC;


void fn_82355538(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  uint *puVar6;
  undefined4 uVar7;
  int iVar8;
  char cVar9;
  char *pcVar11;
  ulonglong uVar10;
  undefined4 uVar12;
  int *piVar13;
  undefined4 auStack_40 [16];
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  fn_8252DC18(1);
  fn_8256A938();
  uVar4 = fn_8256BF18();
  fn_8256CF38(uVar4,param_1 + 0x310);
  fn_8256CF38(uVar4,param_1 + 0x30c);
  iVar5 = fn_8225F160();
  if (*(int *)(iVar5 + 8) == 2) {
    fn_822AB000(*(undefined4 *)**(undefined4 **)(param_1 + 0x1c),
                    *(undefined4 *)(param_1 + 0x34c));
  }
  fn_82356E38(param_1);
  *(undefined4 *)(param_1 + 0x370) = lbl_821CC160;
  fn_823577F0(param_1 + 0x3cc,param_1 + 0x3d4);
  fn_823577F0(param_1 + 0x27c,param_1 + 0x284);
  fn_823577F0(param_1 + 0x288,param_1 + 0x290);
  fn_82351510(param_1,0);
  pcVar11 = (char *)(param_1 + 0x2cc);
  do {
    cVar9 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar9 != '\0');
  if ((((int)pcVar11 - (param_1 + 0x2cc) != 1) &&
      (iVar5 = *(int *)(*(int *)(param_1 + 0x14) + 0x3e4), iVar5 != 0)) &&
     (uVar10 = (ulonglong)*(uint *)(iVar5 + 0x8c0), uVar10 != 0)) {
    puVar6 = (uint *)fn_82555A88(uVar10 + 0x98);
    if (puVar6 != (uint *)0x0) {
      fn_82547C80((ulonglong)*puVar6 + 0xd0,0,0);
    }
  }
  if (*(int *)(param_1 + 0x294) != 0) {
    fn_82566E58(*(int *)(param_1 + 0x294),*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x844));
    *(undefined4 *)(param_1 + 0x294) = 0;
  }
  if (*(int *)(param_1 + 0xa0) != 0) {
    fn_825604A0(param_1 + 0xb0);
    *(undefined4 *)(param_1 + 0xa0) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x3ac) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x3ac))();
    fn_82536288((undefined4 *)(param_1 + 0x3ac));
    *(undefined4 *)(param_1 + 0x3ac) = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    fn_822AE9D8();
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    iVar5 = fn_8225F160();
    if (*(int *)(iVar5 + 8) == 2) {
      iVar5 = *(int *)(param_1 + 0x18);
      uVar1 = *(uint *)(param_1 + 0x34c);
      puVar2 = (undefined4 *)**(undefined4 **)(iVar5 + 0x20);
      for (piVar13 = (int *)*puVar2; piVar13 != (int *)puVar2[1]; piVar13 = piVar13 + 1) {
        iVar8 = fn_8225C590();
        if (uVar1 < (uint)(*(int *)(iVar8 + 0x14) - *(int *)(iVar8 + 0x10) >> 2)) {
          uVar12 = *(undefined4 *)(uVar1 * 4 + *(int *)(iVar8 + 0x10));
        }
        else {
          uVar12 = 0;
        }
        *(undefined4 *)(*piVar13 + 0x34) = uVar12;
        puVar2 = (undefined4 *)**(undefined4 **)(iVar5 + 0x20);
      }
    }
    piVar13 = *(int **)(param_1 + 0x18);
    iVar5 = *(int *)(param_1 + 0x34c);
    uVar12 = *(undefined4 *)(param_1 + 0x344);
    (**(code **)(*piVar13 + 0xc))(piVar13,uVar12,iVar5);
    uVar7 = (**(code **)(*piVar13 + 200))(piVar13);
    iVar8 = fn_8225F160();
    *(undefined4 *)(iVar8 + 0x40) = uVar7;
    iVar8 = fn_8249ABC0();
    iVar8 = *(int *)(iVar8 + 0x1c);
    uVar7 = *(undefined4 *)(iVar8 + 0xd4);
    uVar3 = *(undefined4 *)(iVar8 + 0xd8);
    *(undefined4 *)(iVar8 + 0x20) = 1;
    *(undefined4 *)(iVar8 + 0xd4) = uVar12;
    *(int *)(iVar8 + 0xd8) = iVar5;
    *(undefined4 *)(iVar8 + 0xdc) = uVar7;
    *(undefined4 *)(iVar8 + 0xe0) = uVar3;
    *(undefined4 *)(iVar8 + 0xd0) = 0xffffffff;
    if (iVar5 != piVar13[0x45]) {
      piVar13[0x3a] = 0;
      piVar13[0x3b] = 0;
    }
    piVar13[0x45] = iVar5;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    fn_82490FC8();
  }
  fn_823546D0(param_1);
  fn_82356E38(param_1);
  if (lbl_832765BC != 0) {
    auStack_40[0] = 0;
    fn_824601C0(lbl_832765BC,auStack_40);
    uVar12 = auStack_40[0];
    cVar9 = fn_82534820(auStack_40[0]);
    if (cVar9 != '\0') {
      auStack_40[0] = uVar12;
      auStack_40[0] =
           fn_82535298(auStack_40,*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x84c),
                             0xffffffff83296bc0,0xffffffff83296bd0);
      fn_82536288(auStack_40);
    }
  }
  *(undefined4 *)(param_1 + 0x37c) = 0;
  uVar4 = fn_8266EC60();
  fn_8266C6D8(uVar4,0x40,1);
  uVar4 = fn_8266EC60();
  fn_8266C708(uVar4,0x40,1);
  return;
}

