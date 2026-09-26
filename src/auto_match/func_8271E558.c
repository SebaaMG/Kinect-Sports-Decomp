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
extern int fn_8267C498();
extern int fn_826944C8();
extern int fn_82695370();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82696330();
extern int fn_82696D38();
extern int fn_826A7398();
extern int fn_826B3E08();
extern int fn_826FE738();
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;


void fn_8271E558(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  char *pcVar4;
  undefined8 uVar3;
  char cVar6;
  int *piVar5;
  int *piVar7;
  longlong lVar8;
  int aiStack_70 [4];
  char acStack_60 [16];
  int *piStack_50;
  char *pcStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  puVar1 = *(undefined1 **)(param_1 + 4);
  fn_826959C8(puVar1);
  *puVar1 = 2;
  puVar1[4] = 0;
  if (*(int *)(param_1 + 0x1c) < 1) {
    return;
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    return;
  }
  piVar5 = (int *)0x0;
  pcVar4 = (char *)fn_826957D0(param_1,0);
  if (*pcVar4 == '\x05') {
    acStack_60[0] = '\0';
    uVar2 = *(undefined4 *)(param_1 + 0x18);
    uVar3 = fn_826957D0(param_1,0);
    fn_82696D38(aiStack_70,uVar3,uVar2,0xffffffffffffffff,0);
    piStack_50 = aiStack_70;
    pcStack_4c = acStack_60;
    uStack_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    cVar6 = fn_826B3E08(*(undefined4 *)(param_1 + 0x18),&piStack_50,0,0);
    lVar8 = (ulonglong)*(uint *)(aiStack_70[0] + 8) - 1;
    *(int *)(aiStack_70[0] + 8) = (int)lVar8;
    if (lVar8 == 0) {
      fn_826944C8(aiStack_70[0]);
    }
    if (((cVar6 != '\0') && (acStack_60[0] == '\a')) &&
       (piVar5 = (int *)fn_82695370(acStack_60,*(undefined4 *)(param_1 + 0x18)),
       piVar5 != (int *)0x0)) {
      piVar5[1] = piVar5[1] + 1;
    }
    fn_82696330(acStack_60);
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0x18);
    uVar3 = fn_826957D0(param_1,0);
    piVar5 = (int *)fn_82695370(uVar3,uVar2);
    if (piVar5 != (int *)0x0) {
      piVar5[1] = piVar5[1] + 1;
    }
  }
  if (piVar5 == (int *)0x0) {
    uVar3 = fn_826A7398(*(undefined4 *)(param_1 + 0x18));
    piVar7 = (int *)0x0;
  }
  else {
    cVar6 = (**(code **)(*piVar5 + 0xbc))(piVar5);
    if (cVar6 == '\0') goto LAB_8271e704;
    uVar3 = fn_826A7398(*(undefined4 *)(param_1 + 0x18));
    piVar7 = piVar5;
  }
  fn_826FE738(uVar3,piVar7);
  puVar1 = *(undefined1 **)(param_1 + 4);
  fn_826959C8(puVar1);
  puVar1[4] = 1;
  *puVar1 = 2;
LAB_8271e704:
  if (piVar5 != (int *)0x0) {
    fn_8267C498(piVar5);
  }
  return;
}

