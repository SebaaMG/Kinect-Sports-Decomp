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
extern int fn_82DA3118();
extern int fn_82DA32A8();
extern int fn_82DB7E98();
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_821424D8;
extern unsigned int lbl_8323B4A0;


undefined8 fn_82DB8258(int param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int iVar4;
  undefined8 uVar3;
  double dVar5;
  
  iVar4 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar4 + 4);
  if (puVar1 < *(undefined4 **)(iVar4 + 0xc)) {
    *puVar1 = "TtPhysics";
    uVar3 = TBLr;
    puVar1[1] = (int)uVar3;
    *(undefined4 **)(iVar4 + 4) = puVar1 + 3;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    iVar4 = KeTlsGetValue(lbl_8323B4A0);
    puVar1 = *(undefined4 **)(iVar4 + 4);
    if (puVar1 < *(undefined4 **)(iVar4 + 0xc)) {
      *puVar1 = "TtreCollideAfterStepFailure";
      uVar3 = TBLr;
      puVar1[1] = (int)uVar3;
      *(undefined4 **)(iVar4 + 4) = puVar1 + 3;
    }
    uVar3 = fn_82DA32A8(param_1);
    if ((int)uVar3 != 0) {
      iVar4 = KeTlsGetValue(lbl_8323B4A0);
      puVar1 = *(undefined4 **)(iVar4 + 4);
      if (puVar1 < *(undefined4 **)(iVar4 + 0xc)) {
        *puVar1 = &lbl_82132BC4;
        uVar2 = TBLr;
        puVar1[1] = (int)uVar2;
        *(undefined4 **)(iVar4 + 4) = puVar1 + 3;
      }
      iVar4 = KeTlsGetValue(lbl_8323B4A0);
      puVar1 = *(undefined4 **)(iVar4 + 4);
      if (*(undefined4 **)(iVar4 + 0xc) <= puVar1) {
        return uVar3;
      }
      *puVar1 = &lbl_82132BC4;
      uVar2 = TBLr;
      puVar1[1] = (int)uVar2;
      *(undefined4 **)(iVar4 + 4) = puVar1 + 3;
      return uVar3;
    }
    iVar4 = KeTlsGetValue(lbl_8323B4A0);
    puVar1 = *(undefined4 **)(iVar4 + 4);
    if (puVar1 < *(undefined4 **)(iVar4 + 0xc)) {
      *puVar1 = &lbl_82132BC4;
      uVar3 = TBLr;
      puVar1[1] = (int)uVar3;
      *(undefined4 **)(iVar4 + 4) = puVar1 + 3;
    }
  }
  dVar5 = (double)fn_82DA3118(param_1);
  if (*(int *)(param_1 + 0x34) != 0) {
    iVar4 = KeTlsGetValue(lbl_8323B4A0);
    puVar1 = *(undefined4 **)(iVar4 + 4);
    if (puVar1 < *(undefined4 **)(iVar4 + 0xc)) {
      *puVar1 = &lbl_821424D8;
      uVar3 = TBLr;
      puVar1[1] = (int)uVar3;
      *(undefined4 **)(iVar4 + 4) = puVar1 + 3;
    }
    uVar3 = fn_82DB7E98(dVar5,param_1);
    if ((int)uVar3 != 0) {
      *(int *)(param_1 + 0x28) = (int)uVar3;
      iVar4 = KeTlsGetValue(lbl_8323B4A0);
      puVar1 = *(undefined4 **)(iVar4 + 4);
      if (puVar1 < *(undefined4 **)(iVar4 + 0xc)) {
        *puVar1 = &lbl_82132BC4;
        uVar2 = TBLr;
        puVar1[1] = (int)uVar2;
        *(undefined4 **)(iVar4 + 4) = puVar1 + 3;
      }
      iVar4 = KeTlsGetValue(lbl_8323B4A0);
      puVar1 = *(undefined4 **)(iVar4 + 4);
      if (*(undefined4 **)(iVar4 + 0xc) <= puVar1) {
        return uVar3;
      }
      *puVar1 = &lbl_82132BC4;
      uVar2 = TBLr;
      puVar1[1] = (int)uVar2;
      *(undefined4 **)(iVar4 + 4) = puVar1 + 3;
      return uVar3;
    }
    iVar4 = KeTlsGetValue(lbl_8323B4A0);
    puVar1 = *(undefined4 **)(iVar4 + 4);
    if (puVar1 < *(undefined4 **)(iVar4 + 0xc)) {
      *puVar1 = &lbl_82132BC4;
      uVar3 = TBLr;
      puVar1[1] = (int)uVar3;
      *(undefined4 **)(iVar4 + 4) = puVar1 + 3;
    }
  }
  *(float *)(param_1 + 0x14) = (float)dVar5;
  *(undefined4 *)(param_1 + 0x28) = 0;
  iVar4 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar4 + 4);
  if (puVar1 < *(undefined4 **)(iVar4 + 0xc)) {
    *puVar1 = &lbl_82132BC4;
    uVar3 = TBLr;
    puVar1[1] = (int)uVar3;
    *(undefined4 **)(iVar4 + 4) = puVar1 + 3;
  }
  return 0;
}

