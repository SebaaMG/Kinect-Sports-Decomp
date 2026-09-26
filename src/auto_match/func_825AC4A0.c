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
extern unsigned int *auStack_3c;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern int fn_82230040();
extern int fn_825AA5F8();
extern int fn_825ACD10();
extern int fn_825AD738();
extern int fn_825AD818();
extern int fn_825ADF18();
extern int fn_825AE1A0();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_828B5580();
extern int fn_828B55B0();
extern unsigned int iStack_58;
extern unsigned int lbl_82002B04;
extern unsigned int uStack_40;
extern unsigned int uStack_48;
extern unsigned int uStack_64;
extern unsigned int uStack_74;
extern unsigned int uStack_7c;


void fn_825AC4A0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar4;
  undefined4 *puVar5;
  undefined8 uVar3;
  undefined4 *puVar6;
  undefined4 **ppuVar7;
  undefined4 *apuStack_90 [2];
  undefined4 *apuStack_88 [2];
  undefined **ppuStack_80;
  undefined4 uStack_7c;
  undefined **ppuStack_78;
  undefined4 uStack_74;
  undefined1 auStack_70 [8];
  undefined **ppuStack_68;
  undefined4 uStack_64;
  undefined1 auStack_60 [8];
  int iStack_58;
  undefined1 auStack_50 [4];
  undefined4 *puStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_40;
  undefined1 auStack_3c [4];
  undefined4 *puStack_38;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0x10) + 0x28);
  iVar4 = fn_825AA5F8();
  puVar5 = *(undefined4 **)(iVar4 + 4);
  iVar4 = fn_825AA5F8();
  apuStack_90[0] = *(undefined4 **)(iVar4 + 4);
  puVar6 = (undefined4 *)(*(undefined4 **)(iVar4 + 4))[1];
  while( true ) {
    if (*(char *)((int)puVar6 + 0x21) != '\0') break;
    if ((uint)puVar6[3] < uVar1) {
      puVar6 = (undefined4 *)puVar6[2];
    }
    else {
      apuStack_90[0] = puVar6;
      puVar6 = (undefined4 *)*puVar6;
    }
  }
  if ((apuStack_90[0] == *(undefined4 **)(iVar4 + 4)) || (uVar1 < (uint)apuStack_90[0][3])) {
    ppuVar7 = apuStack_88;
    apuStack_88[0] = *(undefined4 **)(iVar4 + 4);
  }
  else {
    ppuVar7 = apuStack_90;
  }
  if (*ppuVar7 == puVar5) {
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x28);
    uStack_48 = 0;
    puStack_4c = (undefined4 *)fn_8265C9E0(0x1c);
    if (puStack_4c == (undefined4 *)0x0) {
      uStack_74 = 0;
      ppuStack_78 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
      fn_82230040(&ppuStack_78);
    }
    *puStack_4c = puStack_4c;
    puStack_4c[1] = puStack_4c;
    puStack_4c[2] = puStack_4c;
    *(undefined1 *)(puStack_4c + 6) = 1;
    *(undefined1 *)((int)puStack_4c + 0x19) = 1;
    uStack_40 = uVar2;
    fn_825AD818(auStack_3c,auStack_50);
    iVar4 = fn_825AA5F8();
    puVar5 = (undefined4 *)fn_8265C9E0(0x24);
    if (puVar5 == (undefined4 *)0x0) {
      uStack_7c = 0;
      ppuStack_80 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
      fn_82230040(&ppuStack_80);
    }
    *puVar5 = *(undefined4 *)(iVar4 + 4);
    puVar5[1] = *(undefined4 *)(iVar4 + 4);
    puVar5[2] = *(undefined4 *)(iVar4 + 4);
    *(undefined1 *)(puVar5 + 8) = 0;
    *(undefined1 *)((int)puVar5 + 0x21) = 0;
    if (puVar5 + 3 != (undefined4 *)0x0) {
      puVar5[3] = uStack_40;
      fn_825AD818(puVar5 + 4,auStack_3c);
    }
    fn_825ADF18(apuStack_88,iVar4,puVar5);
    fn_825AD738(apuStack_88,auStack_3c,*puStack_38);
    fn_8265CA20(puStack_38);
    fn_825AD738(apuStack_88,auStack_50,*puStack_4c);
    fn_8265CA20(puStack_4c);
  }
  apuStack_88[0] = *(undefined4 **)(*(int *)(param_1 + 0x10) + 0x28);
  fn_828B5580(auStack_70,param_1 + 0x14);
  fn_828B5580(auStack_60,auStack_70);
  iStack_58 = param_1;
  uVar3 = fn_825AA5F8();
  iVar4 = fn_825ACD10(uVar3,apuStack_88);
  puVar5 = (undefined4 *)fn_8265C9E0(0x1c);
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = *(undefined4 *)(iVar4 + 4);
    puVar5[1] = *(undefined4 *)(iVar4 + 4);
    puVar5[2] = *(undefined4 *)(iVar4 + 4);
    *(undefined1 *)(puVar5 + 6) = 0;
    *(undefined1 *)((int)puVar5 + 0x19) = 0;
    if (puVar5 + 3 != (undefined4 *)0x0) {
      fn_828B5580(puVar5 + 3,auStack_60);
      puVar5[5] = iStack_58;
    }
    fn_825AE1A0(apuStack_88,iVar4,puVar5);
    fn_828B55B0(auStack_60);
    fn_828B55B0(auStack_70);
    return;
  }
  uStack_64 = 0;
  ppuStack_68 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_68);
}

