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
extern unsigned int *auStack_80;
extern int fn_82CFBE40();
extern int fn_82CFD4F0();
extern int fn_82CFD5B0();
extern int fn_82CFD5B8();
extern int fn_82CFE180();
extern int fn_82CFE240();
extern int fn_82CFE370();
extern int fn_82CFE3B8();
extern int fn_82CFE418();
extern int fn_82CFE8F8();
extern unsigned int iStack_68;
extern unsigned int iStack_6c;
extern unsigned int uStack_60;
extern unsigned int uStack_62;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_90;


void fn_82CEB628(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  char cVar2;
  ushort uVar3;
  int iVar5;
  undefined8 uVar4;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  char cVar9;
  char cVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  undefined1 uStack_90;
  undefined1 auStack_80 [12];
  undefined4 uStack_74;
  undefined4 uStack_70;
  int iStack_6c;
  int iStack_68;
  char cStack_64;
  char cStack_63;
  undefined2 uStack_62;
  ushort uStack_60;
  
  fn_82CFE240(auStack_80,param_2,uStack_90);
  fn_82CFE418(auStack_80,*(undefined4 *)(param_1 + 0xc));
  iVar13 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    lVar12 = 0;
    do {
      fn_82CFE8F8(lVar12 + (ulonglong)*(uint *)(param_1 + 0x10),param_2);
      iVar13 = iVar13 + 1;
      lVar12 = lVar12 + 0x14;
    } while (iVar13 < *(int *)(param_1 + 0x14));
  }
  fn_82CFE418(auStack_80);
  iVar13 = 0;
  if (0 < *(int *)(param_1 + 0x1c)) {
    iVar8 = 0;
    do {
      cVar2 = cStack_64;
      iVar11 = *(int *)(param_1 + 0x18) + iVar8;
      puVar6 = &uStack_74;
      puVar7 = (undefined4 *)(iVar11 + -4);
      lVar12 = 6;
      do {
        puVar7 = puVar7 + 1;
        puVar6 = puVar6 + 1;
        *puVar6 = *puVar7;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      if ((cStack_64 == '\x18') || (cStack_64 == '\x1f')) {
        iVar5 = fn_82CFD4F0(cStack_63);
        cStack_63 = '\0';
        uStack_60 = *(short *)(iVar5 + 8) << 3 ^ uStack_60;
      }
      cVar10 = '\0';
      cVar9 = cVar2;
      if ((uStack_60 & 0x400) != 0) {
        uStack_60 = uStack_60 ^ 0x400;
        if (cStack_63 != '\0') {
          cVar10 = cStack_63;
        }
        cVar9 = '\x13';
        cStack_63 = cVar2;
        cStack_64 = '\x13';
      }
      uVar3 = uStack_60;
      cVar2 = cStack_63;
      if (((iStack_6c != 0) && (*(char *)(iVar11 + 0xc) != '\x14')) &&
         (*(char *)(iVar11 + 0xd) != '\x14')) {
        for (iVar5 = fn_82CFD5B0(iVar11); iVar5 != 0; iVar5 = *(int *)(iVar5 + 4)) {
          fn_82CEB628(iVar5,param_2);
        }
      }
      if (iStack_68 != 0) {
        uVar4 = fn_82CFD5B8(iVar11);
        fn_82CFE8F8(uVar4,param_2);
      }
      uVar1 = uStack_70;
      uVar4 = fn_82CFBE40(uStack_70);
      fn_82CFE180(auStack_80,uVar1,uVar4);
      fn_82CFE3B8(auStack_80,cVar9);
      fn_82CFE3B8(auStack_80,cVar2);
      if (cVar10 != '\0') {
        fn_82CFE3B8(auStack_80,cVar10);
      }
      fn_82CFE3B8(auStack_80,uStack_62);
      fn_82CFE3B8(auStack_80,uVar3);
      iVar13 = iVar13 + 1;
      iVar8 = iVar8 + 0x18;
    } while (iVar13 < *(int *)(param_1 + 0x1c));
  }
  fn_82CFE418(auStack_80);
  fn_82CFE370(auStack_80);
  return;
}

