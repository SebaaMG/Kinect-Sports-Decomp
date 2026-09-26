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
extern int fn_82DFE6F8();
extern int fn_82DFF728();
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;
extern unsigned int uStack_7c;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;


void fn_82DFFAB0(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar7;
  uint *puVar8;
  int iVar9;
  ulonglong uVar6;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  uint uStack_7c;
  
  iVar7 = KeTlsGetValue(lbl_8323B4A0);
  puVar2 = *(undefined4 **)(iVar7 + 4);
  if (puVar2 < *(undefined4 **)(iVar7 + 0xc)) {
    *puVar2 = "TtDoVehicles";
    uVar5 = TBLr;
    puVar2[1] = (int)uVar5;
    *(undefined4 **)(iVar7 + 4) = puVar2 + 3;
  }
  uVar11 = *(uint *)(param_1 + 0xc);
  uVar13 = (ulonglong)uVar11;
  fn_82DFF728(param_1,param_4,param_3);
  uStack_90 = 0;
  uStack_8c = 0;
  uStack_88 = 0x80000000;
  uVar10 = (ulonglong)uStack_7c;
  puVar8 = (uint *)fn_82CE5410();
  uStack_90 = *puVar8;
  *puVar8 = uStack_90 + 0x600;
  uStack_88 = 0x80000010;
  uStack_84 = uStack_90;
  if (0 < (int)uVar11) {
    iVar7 = 0;
    do {
      iVar4 = *(int *)(*(int *)(param_1 + 8) + iVar7);
      bVar1 = *(byte *)(*(int *)(iVar4 + 0x1c) + 0x20);
      iVar9 = fn_82CE5410();
      if ((uStack_88 & 0x3fffffff) < (uint)bVar1) {
        uVar11 = (uStack_88 & 0x3fffffff) << 1;
        if (uVar11 <= bVar1) {
          uVar11 = (uint)bVar1;
        }
        fn_82CE6310(*(undefined4 *)(iVar9 + 0x10),&uStack_90,uVar11);
      }
      uVar11 = (uint)bVar1;
      uVar12 = 0;
      piVar3 = *(int **)(iVar4 + 0x3c);
      uStack_8c = uVar11;
      if (uVar11 != 0) {
        do {
          iVar9 = (**(code **)(*piVar3 + 0x3c))(piVar3,uVar12,uVar10);
          if (iVar9 == 0) {
            (**(code **)(*piVar3 + 0x48))(piVar3,iVar4,uVar12,uVar12 * 0x60 + (ulonglong)uStack_90);
          }
          else {
            (**(code **)(*piVar3 + 0x44))();
          }
          (**(code **)(*piVar3 + 0x2c))(piVar3,iVar4,uVar12,uVar12 * 0x60 + (ulonglong)uStack_90);
          uVar6 = (**(code **)(*piVar3 + 0x34))(piVar3,uVar12);
          uVar12 = uVar12 + 1 & 0xff;
          uVar10 = (uVar6 + (uVar6 & 0x3fffffff) * 4 & 0xfffffff) * 0x10 + uVar10;
        } while ((uint)uVar12 < uVar11);
      }
      fn_82DFE6F8(*(undefined4 *)(*(int *)(param_1 + 8) + iVar7),param_2,uStack_90);
      uVar13 = uVar13 - 1;
      iVar7 = iVar7 + 4;
    } while (uVar13 != 0);
  }
  iVar7 = KeTlsGetValue(lbl_8323B4A0);
  uVar11 = uStack_84;
  puVar2 = *(undefined4 **)(iVar7 + 4);
  if (puVar2 < *(undefined4 **)(iVar7 + 0xc)) {
    *puVar2 = &lbl_82132BC4;
    uVar5 = TBLr;
    puVar2[1] = (int)uVar5;
    *(undefined4 **)(iVar7 + 4) = puVar2 + 3;
  }
  uStack_8c = -(uint)(uStack_90 != uStack_84) & uStack_8c;
  puVar8 = (uint *)fn_82CE5410();
  *puVar8 = uVar11;
  iVar7 = fn_82CE5410();
  uStack_8c = 0;
  if ((uStack_88 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar7 + 0x10) + 0x10))
              (*(int **)(iVar7 + 0x10),uStack_90,uStack_88 & 0x3fffffff,0x60);
  }
  return;
}

