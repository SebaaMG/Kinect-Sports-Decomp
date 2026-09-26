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
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern int fn_825A4450();
extern int fn_82BA02A8();
extern int fn_82CE5410();
extern int fn_82CEA160();
extern int fn_82CEA280();
extern int fn_82CEA4B8();
extern int fn_82D3D9C0();
extern int fn_82D4D1C0();
extern int fn_82D4D370();
extern int fn_82D4D580();
extern unsigned int iStack_90;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;


void fn_82DEB238(int param_1,int param_2,longlong param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined4 *puVar8;
  longlong lVar9;
  undefined4 *puVar10;
  int iStack_90;
  uint uStack_8c;
  uint uStack_88;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [112];
  
  iVar3 = *(int *)(param_1 + 0x10);
  iVar1 = *(int *)(param_1 + 0x54);
  uVar5 = (uint)param_3;
  iVar7 = iVar3;
  if (*(int *)(iVar3 + 0xc) != 9) {
    if (*(int *)(iVar3 + 0xc) != 10) {
      return;
    }
    iVar7 = *(int *)(iVar3 + 0x34);
    uStack_88 = uVar5 | 0x80000000;
    iVar4 = iVar7 + 0x10;
    if (iVar7 == 0) {
      iVar4 = 0;
    }
    iStack_90 = param_2;
    uStack_8c = uVar5;
    fn_82D4D370(auStack_70,*(undefined4 *)(iVar3 + 0x14),iVar4,&iStack_90);
    fn_82D4D1C0(auStack_70,*(undefined4 *)(iVar3 + 0x14));
    if (*(int *)(iVar7 + 0xc) != 9) {
      fn_82D4D580(auStack_70);
      iVar3 = fn_82CE5410();
      uStack_8c = 0;
      if ((uStack_88 & 0x80000000) == 0) {
        (**(code **)(**(int **)(iVar3 + 0x10) + 0x10))
                  (*(int **)(iVar3 + 0x10),iStack_90,uStack_88 & 0x3fffffff,4);
      }
      iStack_90 = 0;
      uStack_88 = 0x80000000;
      goto LAB_82deb330;
    }
    fn_82D4D580(auStack_70);
    iVar3 = fn_82CE5410();
    uStack_8c = 0;
    if ((uStack_88 & 0x80000000) == 0) {
      (**(code **)(**(int **)(iVar3 + 0x10) + 0x10))
                (*(int **)(iVar3 + 0x10),iStack_90,uStack_88 & 0x3fffffff,4);
    }
    iStack_90 = 0;
    uStack_88 = 0x80000000;
  }
  if (0 < (int)uVar5) {
    puVar8 = (undefined4 *)(param_2 + -4);
    lVar9 = param_3;
    do {
      puVar8 = puVar8 + 1;
      fn_82D3D9C0(iVar7,*puVar8);
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
LAB_82deb330:
  if (iVar1 != 0) {
    fn_825A4450(auStack_80);
    if (0 < (int)uVar5) {
      puVar8 = (undefined4 *)(param_2 + -4);
      do {
        puVar8 = puVar8 + 1;
        uVar2 = *puVar8;
        iVar3 = fn_82CE5410();
        fn_82CEA160(auStack_80,*(undefined4 *)(iVar3 + 0x10),uVar2,1);
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
    uVar6 = (ulonglong)*(ushort *)(param_1 + 0x50);
    puVar8 = *(undefined4 **)(param_1 + 0x58);
    if (*(ushort *)(param_1 + 0x50) != 0) {
      puVar10 = (undefined4 *)(iVar1 + 0x18);
      do {
        iVar3 = fn_82CEA280(auStack_80,*puVar8,0);
        if (iVar3 != 0) {
          puVar10[-5] = 0x7fff0000;
          puVar10[-4] = 0x7fff0000;
          puVar10[-3] = 0;
          puVar10[-1] = 0;
          *puVar10 = 0;
        }
        uVar6 = uVar6 - 1;
        puVar8 = puVar8 + 1;
        puVar10 = puVar10 + 8;
      } while (uVar6 != 0);
    }
    iVar3 = fn_82CE5410();
    fn_82CEA4B8(auStack_80,*(undefined4 *)(iVar3 + 0x10));
    fn_82BA02A8(auStack_80);
  }
  return;
}

