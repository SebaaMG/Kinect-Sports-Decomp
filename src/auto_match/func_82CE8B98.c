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
extern unsigned int *auStack_d0;
extern int fn_82CE86F0();
extern int fn_82CE8758();
extern int fn_82CE9810();
extern int fn_82CE98C8();
extern int fn_82CFBB08();
extern int fn_82CFC050();
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;


void fn_82CE8B98(int param_1,int *param_2,int param_3)

{
  short sVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar7;
  ulonglong uVar6;
  int iVar8;
  undefined1 auStack_d0 [208];
  
  iVar7 = KeTlsGetValue(lbl_8323B4A0);
  puVar2 = *(undefined4 **)(iVar7 + 4);
  if (puVar2 < *(undefined4 **)(iVar7 + 0xc)) {
    *puVar2 = "TtAddJobBatch";
    uVar4 = TBLr;
    puVar2[1] = (int)uVar4;
    *(undefined4 **)(iVar7 + 4) = puVar2 + 3;
  }
  RtlEnterCriticalSection(param_1);
  iVar7 = 0;
  uVar3 = *(uint *)(param_1 + 0x1c);
  if (0 < param_2[1]) {
    iVar8 = 0;
    do {
      fn_82CFC050(auStack_d0,*(int *)(*param_2 + iVar8),
                   *(undefined2 *)(*(int *)(*param_2 + iVar8) + 4));
      uVar6 = fn_82CE86F0(param_1,auStack_d0);
      if (param_3 == 0) {
        fn_82CE98C8();
      }
      else {
        fn_82CE9810((uVar6 + (uVar6 & 0x3fffffff) * 4 & 0x3fffffff) * 4 + (ulonglong)uVar3 +
                          0x2c,auStack_d0);
      }
      if ((int)uVar6 < *(int *)(param_1 + 0x88)) {
        iVar5 = (int)((uVar6 + 0x11 & 0xffffffff) << 1);
        sVar1 = *(short *)(iVar5 + uVar3);
        if (sVar1 == 0) goto LAB_82ce8ca0;
        *(short *)(iVar5 + uVar3) = sVar1 + -1;
        fn_82CFBB08(*(undefined4 *)((int)((uVar6 + 0x1e & 0xffffffff) << 2) + param_1),1);
      }
      else {
LAB_82ce8ca0:
        fn_82CE8758(param_1,(ulonglong)uVar3);
      }
      iVar7 = iVar7 + 1;
      iVar8 = iVar8 + 4;
    } while (iVar7 < param_2[1]);
  }
  RtlLeaveCriticalSection(param_1);
  iVar7 = KeTlsGetValue(lbl_8323B4A0);
  puVar2 = *(undefined4 **)(iVar7 + 4);
  if (puVar2 < *(undefined4 **)(iVar7 + 0xc)) {
    *puVar2 = &lbl_82132BC4;
    uVar4 = TBLr;
    puVar2[1] = (int)uVar4;
    *(undefined4 **)(iVar7 + 4) = puVar2 + 3;
  }
  return;
}

