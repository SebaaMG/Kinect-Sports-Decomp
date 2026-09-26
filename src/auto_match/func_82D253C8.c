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
extern int fn_82BA02A8();
extern int fn_82CE5410();
extern int fn_82CEA160();
extern int fn_82CEA280();
extern int fn_82CEA4B8();
extern int fn_82CEAAA0();
extern int fn_82CEAB00();
extern int fn_82D2D320();
extern int fn_82D2D400();
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;


void fn_82D253C8(int param_1,int param_2)

{
  uint uVar1;
  int iVar3;
  undefined8 uVar2;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  undefined4 *puVar8;
  longlong lVar9;
  int *piVar10;
  int *piVar11;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0xffffffff;
  iVar3 = fn_82CE5410();
  fn_82CEAB00(&uStack_70,*(undefined4 *)(iVar3 + 0x10),0);
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_78 = 0xffffffff;
  iVar3 = fn_82CE5410();
  fn_82CEAB00(&uStack_80,*(undefined4 *)(iVar3 + 0x10),0);
  piVar11 = *(int **)(param_2 + 0x14);
  if (piVar11 != (int *)0x0) {
    do {
      uVar2 = fn_82D2D320(param_1 + 8,piVar11);
      iVar3 = fn_82CE5410();
      fn_82CEA160(&uStack_70,*(undefined4 *)(iVar3 + 0x10),piVar11,uVar2);
      piVar11 = (int *)*piVar11;
    } while (piVar11 != (int *)0x0);
  }
  piVar11 = *(int **)(param_2 + 0x2c);
  if (piVar11 != (int *)0x0) {
    do {
      iVar3 = fn_82D2D400(param_1 + 0x20,piVar11);
      lVar9 = 3;
      puVar8 = (undefined4 *)(iVar3 + 4);
      do {
        uVar4 = fn_82CEA280(&uStack_70,puVar8[1],0);
        lVar9 = lVar9 + -1;
        puVar8 = puVar8 + 1;
        *puVar8 = uVar4;
      } while (lVar9 != 0);
      puVar7 = (uint *)(iVar3 + 0x14);
      lVar9 = 3;
      piVar10 = piVar11;
      do {
        uVar1 = *puVar7;
        if ((uVar1 & 0xfffffffc) != 0) {
          uVar5 = fn_82CEA280(&uStack_80,(uVar1 & 3) + (uVar1 & 0xfffffffc),0);
          uVar1 = uVar5 & 0xfffffffc;
          if (uVar1 == 0) {
            iVar6 = fn_82CE5410();
            fn_82CEA160(&uStack_80,*(undefined4 *)(iVar6 + 0x10),piVar10,
                              (iVar3 - (int)piVar11) + (int)piVar10);
          }
          else {
            fn_82CEAAA0(&uStack_80,piVar10);
            *puVar7 = (uVar5 & 3) + uVar1;
            *(int *)(((uVar5 & 3) + 5) * 4 + uVar1) = (iVar3 - (int)piVar11) + (int)piVar10;
          }
        }
        lVar9 = lVar9 + -1;
        puVar7 = puVar7 + 1;
        piVar10 = (int *)((int)piVar10 + 1);
      } while (lVar9 != 0);
      piVar11 = (int *)*piVar11;
    } while (piVar11 != (int *)0x0);
  }
  puVar8 = *(undefined4 **)(param_1 + 0x7b8);
  if (puVar8 != (undefined4 *)0x0) {
    (**(code **)*puVar8)(puVar8,1);
  }
  *(undefined4 *)(param_1 + 0x7b8) = 0;
  iVar3 = fn_82CE5410();
  fn_82CEA4B8(&uStack_80,*(undefined4 *)(iVar3 + 0x10));
  fn_82BA02A8(&uStack_80);
  iVar3 = fn_82CE5410();
  fn_82CEA4B8(&uStack_70,*(undefined4 *)(iVar3 + 0x10));
  fn_82BA02A8(&uStack_70);
  return;
}

