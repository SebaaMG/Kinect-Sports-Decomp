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
extern int fn_82D8A4F0();
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;


void fn_82DACAE8(int param_1)

{
  short sVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  iVar6 = *(int *)(param_1 + 0x214);
  if ((iVar6 != 0) && (uVar7 = (ulonglong)*(ushort *)(iVar6 + 0xc) - 1, -1 < (longlong)uVar7)) {
    lVar8 = (uVar7 & 0x3fffffff) << 2;
    do {
      if (*(int *)((int)lVar8 + *(int *)(iVar6 + 8)) != 0) {
        iVar5 = KeTlsGetValue(lbl_8323B4A0);
        puVar2 = *(undefined4 **)(iVar5 + 4);
        if (puVar2 < *(undefined4 **)(iVar5 + 0xc)) {
          *puVar2 = "TtentRemCb";
          uVar4 = TBLr;
          puVar2[1] = (int)uVar4;
          *(undefined4 **)(iVar5 + 4) = puVar2 + 3;
        }
        piVar3 = *(int **)((int)lVar8 + *(int *)(iVar6 + 8));
        (**(code **)(*piVar3 + 8))(piVar3,param_1);
        iVar5 = KeTlsGetValue(lbl_8323B4A0);
        puVar2 = *(undefined4 **)(iVar5 + 4);
        if (puVar2 < *(undefined4 **)(iVar5 + 0xc)) {
          *puVar2 = &lbl_82132BC4;
          uVar4 = TBLr;
          puVar2[1] = (int)uVar4;
          *(undefined4 **)(iVar5 + 4) = puVar2 + 3;
        }
      }
      uVar7 = uVar7 - 1;
      lVar8 = lVar8 + -4;
    } while (-1 < (longlong)uVar7);
  }
  sVar1 = *(short *)(param_1 + 0xb0);
  while (sVar1 != 0) {
    iVar6 = KeTlsGetValue(lbl_8323B4A0);
    puVar2 = *(undefined4 **)(iVar6 + 4);
    if (puVar2 < *(undefined4 **)(iVar6 + 0xc)) {
      *puVar2 = "TtentRemCb";
      uVar4 = TBLr;
      puVar2[1] = (int)uVar4;
      *(undefined4 **)(iVar6 + 4) = puVar2 + 3;
    }
    (**(code **)(*(int *)**(undefined4 **)(param_1 + 0xac) + 0x10))
              ((int *)**(undefined4 **)(param_1 + 0xac),param_1);
    iVar6 = KeTlsGetValue(lbl_8323B4A0);
    puVar2 = *(undefined4 **)(iVar6 + 4);
    if (puVar2 < *(undefined4 **)(iVar6 + 0xc)) {
      *puVar2 = &lbl_82132BC4;
      uVar4 = TBLr;
      puVar2[1] = (int)uVar4;
      *(undefined4 **)(iVar6 + 4) = puVar2 + 3;
    }
    sVar1 = *(short *)(param_1 + 0xb0);
  }
  fn_82D8A4F0(param_1);
  iVar6 = *(int *)(param_1 + 0xb8);
  while (iVar6 != 0) {
    iVar6 = KeTlsGetValue(lbl_8323B4A0);
    puVar2 = *(undefined4 **)(iVar6 + 4);
    if (puVar2 < *(undefined4 **)(iVar6 + 0xc)) {
      *puVar2 = "TtentRemCb";
      uVar4 = TBLr;
      puVar2[1] = (int)uVar4;
      *(undefined4 **)(iVar6 + 4) = puVar2 + 3;
    }
    (**(code **)(*(int *)**(undefined4 **)(param_1 + 0xb4) + 0x10))
              ((int *)**(undefined4 **)(param_1 + 0xb4),param_1);
    iVar6 = KeTlsGetValue(lbl_8323B4A0);
    puVar2 = *(undefined4 **)(iVar6 + 4);
    if (puVar2 < *(undefined4 **)(iVar6 + 0xc)) {
      *puVar2 = &lbl_82132BC4;
      uVar4 = TBLr;
      puVar2[1] = (int)uVar4;
      *(undefined4 **)(iVar6 + 4) = puVar2 + 3;
    }
    iVar6 = *(int *)(param_1 + 0xb8);
  }
  sVar1 = *(short *)(param_1 + 0x20c);
  while (sVar1 != 0) {
    iVar6 = KeTlsGetValue(lbl_8323B4A0);
    puVar2 = *(undefined4 **)(iVar6 + 4);
    if (puVar2 < *(undefined4 **)(iVar6 + 0xc)) {
      *puVar2 = "TtentRemCb";
      uVar4 = TBLr;
      puVar2[1] = (int)uVar4;
      *(undefined4 **)(iVar6 + 4) = puVar2 + 3;
    }
    (**(code **)(*(int *)**(undefined4 **)(param_1 + 0x208) + 0x18))
              ((int *)**(undefined4 **)(param_1 + 0x208),param_1);
    iVar6 = KeTlsGetValue(lbl_8323B4A0);
    puVar2 = *(undefined4 **)(iVar6 + 4);
    if (puVar2 < *(undefined4 **)(iVar6 + 0xc)) {
      *puVar2 = &lbl_82132BC4;
      uVar4 = TBLr;
      puVar2[1] = (int)uVar4;
      *(undefined4 **)(iVar6 + 4) = puVar2 + 3;
    }
    sVar1 = *(short *)(param_1 + 0x20c);
  }
  return;
}

