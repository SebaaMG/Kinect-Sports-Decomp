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
extern unsigned int *auStack_c0;
extern int fn_82CE86F0();
extern int fn_82CE8758();
extern int fn_82CE9810();
extern int fn_82CE98C8();
extern int fn_82CFBB08();
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;


void fn_82CE8D08(int param_1,int param_2,int param_3)

{
  short sVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar6;
  ulonglong uVar5;
  ulonglong uVar7;
  int aiStack_d0 [4];
  undefined1 auStack_c0 [192];
  
  iVar6 = KeTlsGetValue(lbl_8323B4A0);
  puVar2 = *(undefined4 **)(iVar6 + 4);
  if (puVar2 < *(undefined4 **)(iVar6 + 0xc)) {
    *puVar2 = "TtfinishJob";
    uVar4 = TBLr;
    puVar2[1] = (int)uVar4;
    *(undefined4 **)(iVar6 + 4) = puVar2 + 3;
  }
  RtlEnterCriticalSection(param_1);
  uVar3 = *(uint *)(param_1 + 0x1c);
  uVar7 = (ulonglong)uVar3;
  iVar6 = (**(code **)(param_1 + 0x24))(param_1,uVar7,param_2,aiStack_d0);
  if (iVar6 == 0) {
    uVar5 = fn_82CE86F0(param_1,auStack_c0);
    if (aiStack_d0[0] == 0) {
      fn_82CE98C8();
    }
    else {
      fn_82CE9810((uVar5 + (uVar5 & 0x3fffffff) * 4 & 0x3fffffff) * 4 + uVar7 + 0x2c,
                        auStack_c0);
    }
    if ((int)uVar5 < *(int *)(param_1 + 0x88)) {
      iVar6 = (int)((uVar5 + 0x11 & 0xffffffff) << 1);
      sVar1 = *(short *)(iVar6 + uVar3);
      if (sVar1 != 0) {
        *(short *)(iVar6 + uVar3) = sVar1 + -1;
        fn_82CFBB08(*(undefined4 *)((int)((uVar5 + 0x1e & 0xffffffff) << 2) + param_1),1);
        goto LAB_82ce8e18;
      }
    }
    fn_82CE8758(param_1,uVar7);
  }
LAB_82ce8e18:
  if (param_3 == 0) {
    iVar6 = (uint)*(byte *)(param_2 + 1) * 2;
    *(short *)(iVar6 + uVar3) = *(short *)(iVar6 + uVar3) + -1;
  }
  RtlLeaveCriticalSection(param_1);
  iVar6 = KeTlsGetValue(lbl_8323B4A0);
  puVar2 = *(undefined4 **)(iVar6 + 4);
  if (puVar2 < *(undefined4 **)(iVar6 + 0xc)) {
    *puVar2 = &lbl_82132BC4;
    uVar4 = TBLr;
    puVar2[1] = (int)uVar4;
    *(undefined4 **)(iVar6 + 4) = puVar2 + 3;
  }
  return;
}

