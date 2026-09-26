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
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern int fn_8267B890();
extern int fn_826824B0();
extern int fn_826944C8();
extern int fn_82695608();
extern int fn_826957D0();
extern int fn_82695FA0();
extern int fn_82696330();
extern int fn_82696BC8();
extern int fn_82696D38();
extern int fn_826972E0();
extern int fn_826A1D48();
extern int fn_826AE288();
extern int fn_826C0B08();
extern unsigned int iStack_2c;
extern unsigned int iStack_74;
extern unsigned int iStack_78;
extern unsigned int uStack_3c;
extern unsigned int uStack_48;


void fn_826C0C68(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar4;
  undefined1 *puVar5;
  ulonglong uVar3;
  int iVar6;
  bool bVar8;
  longlong lVar7;
  int aiStack_80 [2];
  int iStack_78;
  int iStack_74;
  byte bStack_70;
  char acStack_60 [16];
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined1 auStack_40 [4];
  undefined1 uStack_3c;
  undefined1 auStack_30 [4];
  int iStack_2c;
  
  if (*(int *)(param_1 + 0x1c) < 1) goto LAB_826c0de4;
  pcVar4 = (char *)fn_826957D0(param_1,0);
  acStack_60[0] = '\0';
  cVar1 = *pcVar4;
  if ((cVar1 == '\x03') || (bVar8 = false, cVar1 == '\x04')) {
    bVar8 = true;
  }
  if (bVar8) {
    uStack_48 = fn_826972E0(pcVar4,*(undefined4 *)(param_1 + 0x18));
    auStack_50[0] = 3;
    fn_82695FA0(acStack_60,auStack_50);
    puVar5 = auStack_50;
LAB_826c0d0c:
    fn_82696330(puVar5);
  }
  else {
    if (cVar1 == '\x02') {
      uStack_3c = fn_82695608(pcVar4,*(undefined4 *)(param_1 + 0x18));
      auStack_40[0] = 2;
      fn_82695FA0(acStack_60,auStack_40);
      puVar5 = auStack_40;
      goto LAB_826c0d0c;
    }
    if (cVar1 == '\x05') {
      fn_82696D38(aiStack_80,pcVar4,*(undefined4 *)(param_1 + 0x18),0xffffffffffffffff,0);
      auStack_30[0] = 5;
      iStack_2c = aiStack_80[0];
      *(int *)(aiStack_80[0] + 8) = *(int *)(aiStack_80[0] + 8) + 1;
      fn_82695FA0(acStack_60,auStack_30);
      fn_82696330(auStack_30);
      lVar7 = (ulonglong)*(uint *)(aiStack_80[0] + 8) - 1;
      *(int *)(aiStack_80[0] + 8) = (int)lVar7;
      if (lVar7 == 0) {
        fn_826944C8(aiStack_80[0]);
      }
    }
    else if ((cVar1 == '\x06') || (cVar1 == '\a')) {
      fn_82695FA0(acStack_60,pcVar4);
    }
  }
  if ((acStack_60[0] == '\0') || (bVar8 = false, acStack_60[0] == '\n')) {
    bVar8 = true;
  }
  if (!bVar8) {
    fn_82695FA0(*(undefined4 *)(param_1 + 4),acStack_60);
    fn_82696330(acStack_60);
    return;
  }
  fn_82696330(acStack_60);
LAB_826c0de4:
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 == 0) {
    uVar3 = fn_8267B890(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x288),
                              0x30,0);
    if ((uVar3 & 0xffffffff) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = fn_826C0B08(uVar3,*(undefined4 *)(param_1 + 0x18));
    }
  }
  else {
    iVar6 = iVar2 + -0x10;
    if (iVar6 != 0) {
      *(uint *)(iVar2 + -8) = *(int *)(iVar2 + -8) + 1U & 0x8fffffff;
    }
  }
  fn_826AE288(&iStack_78,*(undefined4 *)(param_1 + 0x18),1);
  fn_826A1D48(iVar6 + 0x10,(ulonglong)*(uint *)(param_1 + 0x18) + 0x78,&iStack_78);
  fn_82696BC8(*(undefined4 *)(param_1 + 4),iVar6);
  if (((bStack_70 & 2) == 0) && (iStack_78 != 0)) {
    fn_826824B0();
  }
  iStack_78 = 0;
  if (((bStack_70 & 1) == 0) && (iStack_74 != 0)) {
    fn_826824B0();
  }
  iStack_74 = 0;
  if (iVar6 != 0) {
    fn_826824B0(iVar6);
  }
  return;
}

