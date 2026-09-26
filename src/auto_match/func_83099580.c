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
extern unsigned int *auStack_50;
extern int fn_82CE8E78();
extern int fn_82D38828();
extern int fn_82D38850();
extern int fn_830B6200();
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;


void fn_83099580(undefined8 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int iVar4;
  longlong lVar3;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined4 auStack_50 [20];
  
  iVar4 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar4 + 4);
  if (puVar1 < *(undefined4 **)(iVar4 + 0xc)) {
    *puVar1 = "TtCpuAabbTreeAabb";
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(undefined4 **)(iVar4 + 4) = puVar1 + 3;
  }
  uVar6 = (ulonglong)*(uint *)(param_2 + 0x30);
  iVar4 = *(int *)(param_2 + 0x2c);
  if (0 < (int)*(uint *)(param_2 + 0x30)) {
    do {
      auStack_50[0] = *(undefined4 *)(iVar4 + 0x24);
      *(undefined4 *)(iVar4 + 0x28) = 0;
      uVar7 = (ulonglong)*(uint *)(iVar4 + 0x20);
      if (*(int *)(param_2 + 0x20) != 0) {
        lVar3 = fn_82D38828(*(int *)(param_2 + 0x20),iVar4,auStack_50,uVar7);
        uVar7 = uVar7 - lVar3;
        *(int *)(iVar4 + 0x28) = *(int *)(iVar4 + 0x28) + (int)lVar3;
      }
      if (*(int *)(param_2 + 0x24) != 0) {
        lVar3 = fn_82D38850(*(int *)(param_2 + 0x24),iVar4,auStack_50,uVar7);
        uVar7 = uVar7 - lVar3;
        *(int *)(iVar4 + 0x28) = *(int *)(iVar4 + 0x28) + (int)lVar3;
      }
      if (*(int *)(param_2 + 0x28) != 0) {
        iVar5 = fn_830B6200(*(int *)(param_2 + 0x28),iVar4,auStack_50,uVar7);
        *(int *)(iVar4 + 0x28) = *(int *)(iVar4 + 0x28) + iVar5;
      }
      uVar6 = uVar6 - 1;
      iVar4 = iVar4 + 0x30;
    } while (uVar6 != 0);
  }
  iVar4 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar4 + 4);
  if (puVar1 < *(undefined4 **)(iVar4 + 0xc)) {
    *puVar1 = &lbl_82132BC4;
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(undefined4 **)(iVar4 + 4) = puVar1 + 3;
  }
  fn_82CE8E78(param_1,param_2,param_2,0);
  return;
}

