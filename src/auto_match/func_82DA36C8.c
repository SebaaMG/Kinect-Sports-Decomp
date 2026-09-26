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
extern unsigned int fStack_24;
extern unsigned int fStack_28;
extern unsigned int fStack_2c;
extern unsigned int fStack_30;
extern int fn_82DA32A8();
extern int fn_82DAEB78();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_8323B4A0;
extern unsigned int lbl_8323B520;


undefined8 fn_82DA36C8(int *param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int iVar4;
  undefined8 uVar3;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  
  iVar4 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar4 + 4);
  if (puVar1 < *(undefined4 **)(iVar4 + 0xc)) {
    *puVar1 = "TtPhysics";
    uVar3 = TBLr;
    puVar1[1] = (int)uVar3;
    *(undefined4 **)(iVar4 + 4) = puVar1 + 3;
  }
  if (param_1[10] == 0) {
    fStack_30 = (float)param_1[6];
    fStack_2c = fStack_30 + (float)param_1[7];
    fStack_28 = fStack_2c - fStack_30;
    fStack_24 = lbl_821AAD20;
    if (fStack_28 != lbl_821AAD20) {
      fStack_24 = lbl_82002AE0 / fStack_28;
    }
    (**(code **)(*param_1 + 0x34))(param_1,&fStack_30);
    if (lbl_8323B520 == 1) {
      param_1[10] = 2;
      iVar4 = KeTlsGetValue(lbl_8323B4A0);
      puVar1 = *(undefined4 **)(iVar4 + 4);
      if (puVar1 < *(undefined4 **)(iVar4 + 0xc)) {
        *puVar1 = &lbl_82132BC4;
        uVar3 = TBLr;
        puVar1[1] = (int)uVar3;
        *(undefined4 **)(iVar4 + 4) = puVar1 + 3;
      }
      uVar3 = 2;
    }
    else {
      param_1[6] = (int)((float)param_1[6] + (float)param_1[7]);
      if (*(int *)(param_1[3] + 0x184) != 0) {
        iVar4 = KeTlsGetValue(lbl_8323B4A0);
        puVar1 = *(undefined4 **)(iVar4 + 4);
        if (puVar1 < *(undefined4 **)(iVar4 + 0xc)) {
          *puVar1 = "TtPostCollideCB";
          uVar3 = TBLr;
          puVar1[1] = (int)uVar3;
          *(undefined4 **)(iVar4 + 4) = puVar1 + 3;
        }
        fn_82DAEB78(param_1[3],&fStack_30);
        iVar4 = KeTlsGetValue(lbl_8323B4A0);
        puVar1 = *(undefined4 **)(iVar4 + 4);
        if (puVar1 < *(undefined4 **)(iVar4 + 0xc)) {
          *puVar1 = &lbl_82132BC4;
          uVar3 = TBLr;
          puVar1[1] = (int)uVar3;
          *(undefined4 **)(iVar4 + 4) = puVar1 + 3;
        }
      }
      *(undefined1 *)(param_1 + 4) = 1;
      param_1[10] = 0;
      iVar4 = KeTlsGetValue(lbl_8323B4A0);
      puVar1 = *(undefined4 **)(iVar4 + 4);
      if (puVar1 < *(undefined4 **)(iVar4 + 0xc)) {
        *puVar1 = &lbl_82132BC4;
        uVar3 = TBLr;
        puVar1[1] = (int)uVar3;
        *(undefined4 **)(iVar4 + 4) = puVar1 + 3;
      }
      uVar3 = 0;
    }
  }
  else {
    uVar3 = fn_82DA32A8(param_1);
    iVar4 = KeTlsGetValue(lbl_8323B4A0);
    puVar1 = *(undefined4 **)(iVar4 + 4);
    if (puVar1 < *(undefined4 **)(iVar4 + 0xc)) {
      *puVar1 = &lbl_82132BC4;
      uVar2 = TBLr;
      puVar1[1] = (int)uVar2;
      *(undefined4 **)(iVar4 + 4) = puVar1 + 3;
    }
  }
  return uVar3;
}

