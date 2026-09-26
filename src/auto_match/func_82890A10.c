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
extern unsigned int *auStack_260;
extern unsigned int *auStack_280;
extern unsigned int *auStack_288;
extern unsigned int *auStack_290;
extern int fn_82230360();
extern int fn_823AA970();
extern int fn_8265CA20();
extern int fn_828B5580();
extern int fn_828B55B0();
extern int fn_828B5A20();
extern int fn_82F6DCE0();
extern unsigned int uStack_24c;
extern unsigned int uStack_250;
extern unsigned int uStack_26c;
extern unsigned int uStack_270;


undefined1 * fn_82890A10(undefined1 *param_1,int param_2,ulonglong param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar4;
  undefined8 uVar3;
  undefined1 *puVar5;
  char cVar7;
  char *pcVar6;
  undefined8 uVar8;
  undefined1 auStack_290 [8];
  undefined1 auStack_288 [8];
  uint auStack_280 [4];
  undefined4 uStack_270;
  uint uStack_26c;
  uint auStack_260 [4];
  undefined4 uStack_250;
  uint uStack_24c;
  char acStack_240 [576];
  
  iVar1 = *(int *)(param_2 + 0x34);
  if ((param_3 & 0xff) == 0) {
    if ((iVar1 == 0) || (*(int *)(iVar1 + 0x38) == 0)) {
      cVar7 = '\0';
    }
    else {
      cVar7 = *(char *)(*(int *)(iVar1 + 0x38) + 0x26);
    }
    if (cVar7 == '\0') {
      uVar8 = 0xffffffff820237d0;
    }
    else {
      uVar8 = 0xffffffff820237d8;
    }
    uVar2 = *(undefined4 *)(param_2 + 0x10);
    fn_828B5580(auStack_288,param_2 + 0x14);
    puVar4 = (undefined4 *)fn_828B5A20(auStack_260,auStack_288,param_3,uVar2);
    if (0xf < (uint)puVar4[5]) {
      puVar4 = (undefined4 *)*puVar4;
    }
    uVar3 = fn_823AA970(*(undefined4 *)(*(int *)(param_2 + 0x34) + 0x38));
    fn_82F6DCE0(acStack_240,0x200,0xffffffff8202376c,uVar8,uVar3,puVar4);
    if (0xf < uStack_24c) {
      fn_8265CA20(auStack_260[0]);
    }
    uStack_250 = 0;
    auStack_260[0] = auStack_260[0] & 0xffffff;
    puVar5 = auStack_288;
    uStack_24c = 0xf;
  }
  else {
    if ((iVar1 == 0) || (*(int *)(iVar1 + 0x38) == 0)) {
      cVar7 = '\0';
    }
    else {
      cVar7 = *(char *)(*(int *)(iVar1 + 0x38) + 0x26);
    }
    if (cVar7 == '\0') {
      uVar8 = 0xffffffff820237d0;
    }
    else {
      uVar8 = 0xffffffff820237d8;
    }
    uVar2 = *(undefined4 *)(param_2 + 0x10);
    fn_828B5580(auStack_290,param_2 + 0x14);
    puVar4 = (undefined4 *)fn_828B5A20(auStack_280,auStack_290,param_3,uVar2);
    if (0xf < (uint)puVar4[5]) {
      puVar4 = (undefined4 *)*puVar4;
    }
    uVar3 = fn_823AA970(*(undefined4 *)(*(int *)(param_2 + 0x34) + 0x38));
    fn_82F6DCE0(acStack_240,0x200,0xffffffff82023788,uVar8,uVar3,puVar4);
    if (0xf < uStack_26c) {
      fn_8265CA20(auStack_280[0]);
    }
    uStack_270 = 0;
    auStack_280[0] = auStack_280[0] & 0xffffff;
    puVar5 = auStack_290;
    uStack_26c = 0xf;
  }
  fn_828B55B0(puVar5);
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  pcVar6 = acStack_240;
  do {
    cVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar7 != '\0');
  fn_82230360(param_1,acStack_240,pcVar6 + (-1 - (int)acStack_240));
  return param_1;
}

