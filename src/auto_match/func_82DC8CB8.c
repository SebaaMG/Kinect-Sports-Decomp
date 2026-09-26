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
#define TBLr 0
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82D95B08();
extern int fn_82DC8328();
extern int fn_82DC8578();
extern int fn_82DC87D8();
extern int fn_82DC8A98();
extern int fn_82DC8EC8();
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;


void fn_82DC8CB8(int param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar8;
  ulonglong uVar7;
  int *piVar9;
  int *piVar10;
  int iVar11;
  
  iVar3 = KeTlsGetValue(lbl_8323B4A0);
  puVar8 = *(undefined4 **)(iVar3 + 4);
  if (puVar8 < *(undefined4 **)(iVar3 + 0xc)) {
    *puVar8 = "TtEndOfStepCbs";
    uVar1 = TBLr;
    puVar8[1] = (int)uVar1;
    *(undefined4 **)(iVar3 + 4) = puVar8 + 3;
  }
  piVar9 = (int *)(param_1 + 0x18);
  fn_82DC8578(param_1 + 0x24,piVar9);
  piVar10 = (int *)(param_1 + 0xc);
  fn_82DC87D8(param_1 + 0x24,piVar10);
  if (*(char *)(param_1 + 8) == '\0') {
    iVar3 = *(int *)(param_1 + 0x1c);
    iVar4 = fn_82CE5410();
    iVar5 = *(int *)(param_1 + 0x10);
    iVar11 = iVar5 + iVar3;
    if ((int)(*(uint *)(param_1 + 0x14) & 0x3fffffff) < iVar11) {
      iVar2 = (*(uint *)(param_1 + 0x14) & 0x3fffffff) << 1;
      if (iVar11 < iVar2) {
        iVar11 = iVar2;
      }
      fn_82CE6310(*(undefined4 *)(iVar4 + 0x10),piVar10,iVar11,0xc);
    }
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + iVar3;
    iVar3 = 0;
    puVar8 = (undefined4 *)(iVar5 * 0xc + *piVar10);
    if (0 < *(int *)(param_1 + 0x1c)) {
      iVar5 = 0;
      do {
        iVar3 = iVar3 + 1;
        puVar6 = (undefined4 *)(iVar5 + *piVar9);
        iVar5 = iVar5 + 0x10;
        *puVar8 = *puVar6;
        puVar8[1] = puVar6[1];
        puVar8[2] = puVar6[2];
        puVar8 = puVar8 + 3;
      } while (iVar3 < *(int *)(param_1 + 0x1c));
    }
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  else {
    if (1 < (int)*(uint *)(param_1 + 0x1c)) {
      fn_82DC8EC8(*piVar9,0,(ulonglong)*(uint *)(param_1 + 0x1c) - 1,0);
    }
    fn_82DC8A98(piVar9,piVar10);
  }
  uVar7 = (ulonglong)*(uint *)(param_1 + 0x10);
  if (0 < (int)*(uint *)(param_1 + 0x10)) {
    iVar3 = 0;
    do {
      iVar11 = iVar3 + *piVar10;
      piVar9 = *(int **)(iVar3 + *piVar10);
      (**(code **)(*piVar9 + 0x40))(piVar9);
      iVar5 = fn_82D95B08();
      if ((*(byte *)(iVar5 + 0x26) & 0x30) != 0) {
        fn_82DC8328(piVar9,*(undefined4 *)(iVar11 + 4),*(undefined4 *)(iVar11 + 8));
      }
      uVar7 = uVar7 - 1;
      iVar3 = iVar3 + 0xc;
    } while (uVar7 != 0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  iVar3 = KeTlsGetValue(lbl_8323B4A0);
  puVar8 = *(undefined4 **)(iVar3 + 4);
  if (puVar8 < *(undefined4 **)(iVar3 + 0xc)) {
    *puVar8 = &lbl_82132BC4;
    uVar1 = TBLr;
    puVar8[1] = (int)uVar1;
    *(undefined4 **)(iVar3 + 4) = puVar8 + 3;
  }
  return;
}

