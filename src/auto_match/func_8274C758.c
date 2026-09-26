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
extern int fn_8267BE38();
extern int fn_8267C498();
extern int fn_826824B0();
extern int fn_826944C8();
extern int fn_82695370();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82696958();
extern int fn_82696B20();
extern int fn_82696D38();
extern int fn_8269A608();
extern int fn_8269F500();
extern int fn_826A7398();
extern int fn_82709BF8();
extern unsigned int iStack_44;
extern unsigned int iStack_48;


void fn_8274C758(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  longlong lVar10;
  int aiStack_50 [2];
  int iStack_48;
  int iStack_44;
  byte bStack_40;
  
  puVar1 = *(undefined1 **)(param_1 + 4);
  fn_826959C8(puVar1);
  *puVar1 = 0;
  if (2 < *(int *)(param_1 + 0x1c)) {
    uVar4 = fn_826A7398(*(undefined4 *)(param_1 + 0x18));
    uVar2 = *(undefined4 *)(param_1 + 0x18);
    uVar5 = fn_826957D0(param_1,0);
    fn_82696D38(aiStack_50,uVar5,uVar2,0xffffffffffffffff,0);
    uVar2 = *(undefined4 *)(param_1 + 0x18);
    uVar5 = fn_826957D0(param_1,2);
    fn_82696B20(&iStack_48,uVar5,uVar2);
    puVar8 = (uint *)0x0;
    iVar9 = 0;
    pcVar6 = (char *)fn_826957D0(param_1,1);
    uVar2 = *(undefined4 *)(param_1 + 0x18);
    if (*pcVar6 == '\a') {
      uVar5 = fn_826957D0(param_1,1);
      iVar7 = fn_82695370(uVar5,uVar2);
      if (iVar7 != 0) {
        *(int *)(iVar7 + 4) = *(int *)(iVar7 + 4) + 1;
        puVar8 = *(uint **)(iVar7 + 0x80);
        if (puVar8 == (uint *)0x0) {
          puVar8 = (uint *)fn_8269F500(iVar7);
        }
        if (puVar8 != (uint *)0x0) {
          *puVar8 = *puVar8 + 1;
        }
        fn_8267C498(iVar7);
      }
    }
    else {
      uVar5 = fn_826957D0(param_1,1);
      iVar9 = fn_82696958(uVar5,uVar2);
      if (iVar9 != 0) {
        *(uint *)(iVar9 + 8) = *(int *)(iVar9 + 8) + 1U & 0x8fffffff;
      }
    }
    fn_82709BF8(uVar4,aiStack_50,puVar8,iVar9,&iStack_48);
    puVar1 = *(undefined1 **)(param_1 + 4);
    fn_826959C8(puVar1);
    *puVar1 = 2;
    puVar1[4] = 1;
    if (iVar9 != 0) {
      fn_826824B0(iVar9);
    }
    if ((puVar8 != (uint *)0x0) &&
       (uVar3 = *puVar8, *puVar8 = (uint)((ulonglong)uVar3 - 1),
       (longlong)((ulonglong)uVar3 - 1) < 1)) {
      fn_8269A608(puVar8);
      fn_8267BE38(puVar8);
    }
    if (((bStack_40 & 2) == 0) && (iStack_48 != 0)) {
      fn_826824B0();
    }
    iStack_48 = 0;
    if (((bStack_40 & 1) == 0) && (iStack_44 != 0)) {
      fn_826824B0();
    }
    iStack_44 = 0;
    lVar10 = (ulonglong)*(uint *)(aiStack_50[0] + 8) - 1;
    *(int *)(aiStack_50[0] + 8) = (int)lVar10;
    if (lVar10 == 0) {
      fn_826944C8(aiStack_50[0]);
    }
  }
  return;
}

