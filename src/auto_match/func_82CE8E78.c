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
extern int fn_82CE9810();
extern int fn_82CE98C8();
extern int fn_82CE9978();
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;


undefined8 fn_82CE8E78(int param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  byte *pbVar3;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar4;
  int aiStack_d0 [4];
  undefined1 auStack_c0 [192];
  
  iVar5 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar5 + 4);
  if (puVar1 < *(undefined4 **)(iVar5 + 0xc)) {
    *puVar1 = "TtGetNextJob";
    uVar4 = TBLr;
    puVar1[1] = (int)uVar4;
    *(undefined4 **)(iVar5 + 4) = puVar1 + 3;
  }
  do {
    RtlEnterCriticalSection(param_1);
    iVar7 = -1;
    iVar5 = *(int *)(param_1 + 0x1c);
    if (param_2 != 0) {
      iVar6 = (**(code **)(param_1 + 0x24))(param_1,iVar5,param_2,aiStack_d0);
      if (iVar6 == 0) {
        iVar7 = fn_82CE86F0(param_1,auStack_c0);
        if (aiStack_d0[0] == 0) {
          fn_82CE98C8();
        }
        else {
          fn_82CE9810(iVar7 * 0x14 + iVar5 + 0x2c,auStack_c0);
        }
      }
      pbVar3 = (byte *)(param_2 + 1);
      param_2 = 0;
      iVar6 = (uint)*pbVar3 * 2;
      *(short *)(iVar6 + iVar5) = *(short *)(iVar6 + iVar5) + -1;
    }
    uVar4 = fn_82CE9978(param_1,iVar7,iVar5,param_4,param_3);
  } while ((int)uVar4 == -1);
  iVar5 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar5 + 4);
  if (puVar1 < *(undefined4 **)(iVar5 + 0xc)) {
    *puVar1 = &lbl_82132BC4;
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(undefined4 **)(iVar5 + 4) = puVar1 + 3;
  }
  return uVar4;
}

