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
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int *auStack_28;
extern unsigned int *auStack_30;
extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern unsigned int *auStack_48;
extern int fn_822315A0();
extern int fn_824CC840();
extern int fn_824CD030();
extern int fn_824D2AE8();
extern int fn_824D3760();
extern int fn_824D3898();
extern int fn_824DB830();
extern int fn_82517978();
extern int fn_82F51468();
extern int fn_82F514A0();
extern int fn_82F514D8();
extern int fn_82F53418();
extern unsigned int iStack_2c;
extern unsigned int iStack_4c;
extern unsigned int lbl_821955D8;
extern unsigned int lbl_821C0D00;
extern unsigned int lbl_821CC160;
extern unsigned int uRam831c3b88;
extern unsigned int uStack_50;
extern U64 storeWordConditionalIndexed();


undefined4 * fn_824D2D78(undefined4 *param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar5;
  int iVar6;
  undefined8 uVar4;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  uint *puVar10;
  char in_RESERVE;
  byte in_cr0;
  byte bVar11;
  undefined4 uStack_50;
  int iStack_4c;
  undefined1 auStack_48 [4];
  int *piStack_44;
  undefined1 auStack_40 [4];
  int *piStack_3c;
  undefined1 auStack_38 [4];
  int *piStack_34;
  undefined1 auStack_30 [4];
  int iStack_2c;
  undefined1 auStack_28 [4];
  int *piStack_24;
  
  fn_824CC840();
  *(undefined1 *)(param_1 + 0x38) = 1;
  *param_1 = &lbl_821C0D00;
  fn_824DB830(param_1 + 0x3c,1,*(undefined4 *)(param_2 + 0x30));
  fn_824DB830(param_1 + 0x15c,0,*(undefined4 *)(param_2 + 0x30));
  param_1[0x27c] = 0;
  uVar2 = lbl_821CC160;
  param_1[0x27d] = 0;
  param_1[0x280] = uVar2;
  param_1[0x27e] = 0;
  param_1[0x27f] = 0;
  param_1[0x287] = uRam831c3b88;
  param_1[0x281] = 0;
  param_1[0x285] = uVar2;
  param_1[0x282] = 0;
  param_1[0x286] = uVar2;
  param_1[0x283] = 0;
  param_1[0x288] = uVar2;
  uVar3 = uRam831c3b88;
  param_1[0x289] = 0;
  param_1[0x28d] = uVar2;
  param_1[0x28a] = 0;
  param_1[0x28e] = uVar2;
  param_1[0x28b] = 0;
  param_1[0x28f] = uVar3;
  param_1[0x290] = uVar2;
  param_1[0x291] = 0;
  param_1[0x292] = 0;
  param_1[0x294] = 0;
  puVar5 = (undefined4 *)fn_82F514A0(auStack_40,param_1[8]);
  uStack_50 = 0;
  iStack_4c = 0;
  fn_82517978(&uStack_50,*puVar5,puVar5[1],0);
  fn_824D3760(auStack_48,uStack_50);
  if (ZEXT48(piStack_44) != 0) {
    lVar9 = ZEXT48(piStack_44) + 8;
    do {
      puVar10 = (uint *)lVar9;
      lVar8 = (ulonglong)*puVar10 - 1;
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed(lVar8,0,lVar9);
        *puVar10 = uVar1;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if ((int)lVar8 == 0) {
      (**(code **)(*piStack_44 + 4))();
    }
  }
  if (iStack_4c != 0) {
    fn_822315A0();
  }
  if (ZEXT48(piStack_3c) != 0) {
    lVar9 = ZEXT48(piStack_3c) + 8;
    do {
      puVar10 = (uint *)lVar9;
      lVar8 = (ulonglong)*puVar10 - 1;
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed(lVar8,0,lVar9);
        *puVar10 = uVar1;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if ((int)lVar8 == 0) {
      (**(code **)(*piStack_3c + 4))();
    }
  }
  puVar5 = (undefined4 *)fn_82F514D8(auStack_38,param_1[8]);
  uStack_50 = 0;
  iStack_4c = 0;
  fn_82517978(&uStack_50,*puVar5,puVar5[1],0);
  fn_824D3898(auStack_48,uStack_50);
  if (ZEXT48(piStack_44) != 0) {
    lVar9 = ZEXT48(piStack_44) + 8;
    do {
      puVar10 = (uint *)lVar9;
      lVar8 = (ulonglong)*puVar10 - 1;
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed(lVar8,0,lVar9);
        *puVar10 = uVar1;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if ((int)lVar8 == 0) {
      (**(code **)(*piStack_44 + 4))();
    }
  }
  if (iStack_4c != 0) {
    fn_822315A0();
  }
  if (ZEXT48(piStack_34) != 0) {
    lVar9 = ZEXT48(piStack_34) + 8;
    do {
      puVar10 = (uint *)lVar9;
      lVar8 = (ulonglong)*puVar10 - 1;
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed(lVar8,0,lVar9);
        *puVar10 = uVar1;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if ((int)lVar8 == 0) {
      (**(code **)(*piStack_34 + 4))();
    }
  }
  *(undefined4 *)(param_1[8] + 0x10) = lbl_821955D8;
  iVar6 = fn_824CD030(param_1);
  if (iVar6 != 0) {
    uVar4 = fn_82F51468(auStack_28,param_1[8]);
    puVar5 = (undefined4 *)fn_824D2AE8(auStack_30,uVar4);
    iVar7 = fn_82F53418(*puVar5,param_2 + 0x34,1);
    bVar11 = (iVar7 == 0) << 1;
    iVar6 = 0;
    if (iVar7 != 0) {
      iVar6 = iVar7;
    }
    param_1[0x294] = iVar6;
    if (iStack_2c != 0) {
      fn_822315A0();
    }
    if (ZEXT48(piStack_24) != 0) {
      lVar9 = ZEXT48(piStack_24) + 8;
      do {
        puVar10 = (uint *)lVar9;
        lVar8 = (ulonglong)*puVar10 - 1;
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed(lVar8,0,lVar9);
          *puVar10 = uVar1;
          bVar11 = 2;
        }
      } while (!(bool)(bVar11 >> 1 & 1));
      if ((int)lVar8 == 0) {
        (**(code **)(*piStack_24 + 4))();
      }
    }
  }
  return param_1;
}

