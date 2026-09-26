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
extern unsigned int *auStack_800;
extern int fn_826944C8();
extern int fn_826957D0();
extern int fn_82696330();
extern int fn_82696AD0();
extern int fn_82696D38();
extern int fn_826A90C0();
extern int fn_826AEA50();
extern int fn_82F66368();


void fn_826AFB60(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  undefined8 uVar4;
  int *piVar5;
  char cVar6;
  char *pcVar7;
  uint uVar8;
  undefined4 *puStack_820;
  undefined4 *apuStack_81c [3];
  char acStack_810 [16];
  undefined1 auStack_800 [16];
  char acStack_7f0 [2032];
  
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  uVar4 = fn_826957D0(param_1,0);
  piVar5 = (int *)fn_82696AD0(uVar4,uVar1);
  if (piVar5 != (int *)0x0) {
    acStack_810[0] = '\0';
    cVar6 = (**(code **)(*piVar5 + 0x2c))
                      (piVar5,*(int *)(param_1 + 0x18) + 0x78,
                       (ulonglong)*(uint *)(*(int *)(param_1 + 0x18) + 0x78) + 0x154,acStack_810);
    if (cVar6 != '\0') {
      if ((acStack_810[0] == '\b') || (bVar3 = false, acStack_810[0] == '\v')) {
        bVar3 = true;
      }
      if (bVar3) {
        iVar2 = *(int *)(param_1 + 0x18);
        auStack_800[0] = 0;
        fn_826AEA50(acStack_810,auStack_800,piVar5,iVar2,0,
                      (longlong)(*(int *)(iVar2 + 8) - *(int *)(iVar2 + 0xc) >> 4) +
                      ((ulonglong)*(uint *)(iVar2 + 0x1c) & 0x7ffffff) * 0x20 + -0x1f,0);
        fn_82696D38(apuStack_81c,auStack_800,*(undefined4 *)(param_1 + 0x18),
                          0xffffffffffffffff,0);
        fn_826A90C0(param_1,0xffffffff821cc884,*apuStack_81c[0]);
        uVar8 = apuStack_81c[0][2];
        apuStack_81c[0][2] = (int)((ulonglong)uVar8 - 1);
        if ((ulonglong)uVar8 - 1 == 0) {
          fn_826944C8(apuStack_81c[0]);
        }
        fn_82696330(auStack_800);
        fn_82696330(acStack_810);
        return;
      }
    }
    fn_82696330(acStack_810);
  }
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  uVar4 = fn_826957D0(param_1,0);
  fn_82696D38(&puStack_820,uVar4,uVar1,0xffffffffffffffff,0);
  uVar8 = puStack_820[4];
  if (1999 < uVar8) {
    uVar8 = 1999;
  }
  fn_82F66368(acStack_7f0,2000,*puStack_820,uVar8);
  pcVar7 = acStack_7f0;
  acStack_7f0[uVar8] = '\0';
  while (acStack_7f0[0] != '\0') {
    if (*pcVar7 == '\r') {
      *pcVar7 = '\n';
    }
    pcVar7 = pcVar7 + 1;
    acStack_7f0[0] = *pcVar7;
  }
  if ((uint)puStack_820[4] < 2000) {
    uVar4 = 0xffffffff821cc884;
  }
  else {
    uVar4 = 0xffffffff820077a4;
  }
  fn_826A90C0(param_1,uVar4,acStack_7f0);
  uVar8 = puStack_820[2];
  puStack_820[2] = (int)((ulonglong)uVar8 - 1);
  if ((ulonglong)uVar8 - 1 == 0) {
    fn_826944C8(puStack_820);
  }
  return;
}

