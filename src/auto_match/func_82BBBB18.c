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
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_82B7BEB0();
extern int fn_82BA02A8();
extern int fn_82BA03B8();
extern int fn_82BBB1A8();
extern int fn_82BBB770();
extern int fn_82BBB7D8();
extern int fn_82BC0088();
extern int fn_82BC7368();
extern unsigned int iStack_48;
extern unsigned int iStack_58;
extern unsigned int uStack_44;
extern unsigned int uStack_4c;
extern unsigned int uStack_54;
extern unsigned int uStack_5c;


void fn_82BBBB18(int param_1)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined1 auStack_60 [4];
  uint uStack_5c;
  int iStack_58;
  undefined4 uStack_54;
  undefined1 auStack_50 [4];
  uint uStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  
  fn_82BA02A8(*(undefined4 *)(param_1 + 0xc),0xffffffff820e0adc);
  *(int *)(param_1 + 0x864) = *(int *)(param_1 + 0x864) + 1;
  fn_82BA03B8(auStack_50,*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x5b0));
  fn_82BA03B8(auStack_60,*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x5b0));
  uVar6 = 1;
  iVar7 = 0;
  while( true ) {
    if (*(uint *)(*(int *)(param_1 + 0x814) + 4) < uVar6) {
      fn_82BBB1A8(param_1);
      fn_82BBB7D8(param_1);
      fn_82B7BEB0(uStack_54,iStack_58);
      fn_82B7BEB0(uStack_44,iStack_48);
      return;
    }
    iVar5 = *(int *)(*(int *)(*(int *)(param_1 + 0x814) + 8) + iVar7);
    if ((*(uint *)(iVar5 + 0xe4) & 1) != 0) break;
LAB_82bbbce8:
    uVar6 = uVar6 + 1;
    iVar7 = iVar7 + 4;
  }
  uStack_4c = 0;
  uStack_5c = 0;
LAB_82bbbbb4:
  bVar2 = true;
LAB_82bbbbb8:
  while (bVar2) {
    if ((iVar5 == 0) || (*(int *)(iVar5 + 0x37c) == *(int *)(param_1 + 0x864))) {
LAB_82bbbbf4:
      bVar2 = false;
    }
    else {
      *(int *)(iVar5 + 0x37c) = *(int *)(param_1 + 0x864);
      if (*(int *)(iVar5 + 0xec) == 0) {
        fn_82BBB770(iVar5,param_1);
        goto LAB_82bbbbf4;
      }
      piVar3 = (int *)fn_82BC0088(auStack_50,uStack_4c);
      *piVar3 = iVar5;
      puVar4 = (undefined4 *)fn_82BC0088(auStack_60,uStack_5c);
      *puVar4 = 1;
      iVar5 = *(int *)(iVar5 + 0xec);
    }
  }
  if (uStack_4c == 0) goto LAB_82bbbce8;
  if (uStack_4c - 1 < uStack_4c) {
    piVar3 = (int *)((uStack_4c - 1) * 4 + iStack_48);
  }
  else {
    piVar3 = (int *)0x0;
  }
  iVar1 = *piVar3;
  if (iVar5 != 0) {
    if (uStack_5c - 1 < uStack_5c) {
      piVar3 = (int *)((uStack_5c - 1) * 4 + iStack_58);
    }
    else {
      piVar3 = (int *)0x0;
    }
    if (*piVar3 != *(int *)(iVar1 + 0x14)) goto code_r0x82bbbc9c;
  }
  fn_82BBB770(iVar1,param_1);
  fn_82BC7368(auStack_50);
  fn_82BC7368(auStack_60);
  iVar5 = iVar1;
  goto LAB_82bbbbb8;
code_r0x82bbbc9c:
  iVar5 = fn_82BC7368(auStack_60);
  piVar3 = (int *)fn_82BC0088(auStack_60,uStack_5c);
  *piVar3 = iVar5 + 1;
  iVar5 = *(int *)((iVar5 + 0x3b) * 4 + iVar1);
  goto LAB_82bbbbb4;
}

