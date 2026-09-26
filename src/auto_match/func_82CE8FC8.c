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
extern int fn_82CE86F0();
extern int fn_82CE9810();
extern int fn_82CE98C8();
extern int fn_82CE9978();
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;


undefined8 fn_82CE8FC8(int param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  bool bVar3;
  int iVar5;
  int iVar6;
  undefined8 uVar4;
  
  iVar5 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar5 + 4);
  if (puVar1 < *(undefined4 **)(iVar5 + 0xc)) {
    *puVar1 = "TtGetNextJob";
    uVar4 = TBLr;
    puVar1[1] = (int)uVar4;
    *(undefined4 **)(iVar5 + 4) = puVar1 + 3;
  }
  bVar3 = true;
  do {
    RtlEnterCriticalSection(param_1);
    iVar6 = -1;
    iVar5 = *(int *)(param_1 + 0x1c);
    if (bVar3) {
      *(short *)(param_2 * 2 + iVar5) = *(short *)(param_2 * 2 + iVar5) + -1;
      iVar6 = fn_82CE86F0(param_1,param_4);
      if (param_3 == 0) {
        fn_82CE98C8();
      }
      else {
        fn_82CE9810(iVar6 * 0x14 + iVar5 + 0x2c);
      }
      bVar3 = false;
    }
    uVar4 = fn_82CE9978(param_1,iVar6,iVar5,param_5,param_4);
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

