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
extern int fn_8267B890();
extern int fn_8267BE38();
extern int fn_8267C4C8();
extern int fn_8267C4F0();
extern int fn_82687270();
extern int fn_8268C510();
extern int fn_826944C8();
extern int fn_826949A8();
extern int fn_82695128();
extern int fn_826A7398();
extern int fn_826ADF90();
extern int fn_826DB990();
extern int fn_826E5600();
extern int fn_8274CF30();
extern int fn_8274D4F8();
extern unsigned int iStack_54;
extern unsigned int iStack_58;
extern unsigned int iStack_60;
extern unsigned int uStack_4c;
extern unsigned int uStack_5c;
extern U64 storeWordConditionalIndexed();


undefined8 fn_8274DC30(int param_1,undefined4 *param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  bool bVar5;
  longlong lVar6;
  undefined4 *puVar9;
  int iVar10;
  ulonglong uVar7;
  ulonglong uVar8;
  int *piVar11;
  char cVar12;
  char *pcVar14;
  longlong lVar13;
  char *pcVar15;
  uint *puVar16;
  undefined8 uVar17;
  char in_RESERVE;
  byte bVar18;
  int iStack_60;
  uint uStack_5c;
  int iStack_58;
  int iStack_54;
  int *piStack_50;
  undefined4 uStack_4c;
  
  uVar17 = 0;
  lVar6 = (**(code **)(**(int **)(param_1 + 0x74) + 0x48))();
  if (lVar6 == 0) {
    return 0;
  }
  fn_8267C4C8(lVar6);
  bVar5 = false;
  pcVar2 = *(char **)*param_2;
  if ((*pcVar2 == 'i') || (*pcVar2 == 'I')) {
    fn_82695128(&iStack_60,param_2);
    puVar9 = (undefined4 *)fn_826949A8(&iStack_58,&iStack_60,0,6);
    pcVar14 = "img://";
    pcVar15 = *(char **)*puVar9;
    do {
      cVar12 = *pcVar15;
      cVar1 = *pcVar14;
      if (cVar12 == '\0') break;
      pcVar15 = pcVar15 + 1;
      pcVar14 = pcVar14 + 1;
    } while (cVar12 == cVar1);
    lVar13 = (ulonglong)*(uint *)(iStack_58 + 8) - 1;
    *(int *)(iStack_58 + 8) = (int)lVar13;
    if (lVar13 == 0) {
      fn_826944C8(iStack_58);
    }
    if (cVar12 == cVar1) {
LAB_8274dd84:
      bVar5 = true;
    }
    else {
      puVar9 = (undefined4 *)fn_826949A8(&iStack_54,&iStack_60,0,8);
      pcVar14 = "imgps://";
      pcVar15 = *(char **)*puVar9;
      do {
        cVar12 = *pcVar15;
        cVar1 = *pcVar14;
        if (cVar12 == '\0') break;
        pcVar15 = pcVar15 + 1;
        pcVar14 = pcVar14 + 1;
      } while (cVar12 == cVar1);
      lVar13 = (ulonglong)*(uint *)(iStack_54 + 8) - 1;
      *(int *)(iStack_54 + 8) = (int)lVar13;
      if (lVar13 == 0) {
        fn_826944C8(iStack_54);
      }
      if (cVar12 == cVar1) goto LAB_8274dd84;
    }
    lVar13 = (ulonglong)*(uint *)(iStack_60 + 8) - 1;
    *(int *)(iStack_60 + 8) = (int)lVar13;
    if (lVar13 == 0) {
      fn_826944C8(iStack_60);
    }
  }
  bVar18 = !bVar5 << 1;
  if (!bVar5) {
    piStack_50 = (int *)0x0;
    uStack_4c = 0;
    fn_8268C510(&uStack_5c,*(undefined4 *)*param_2);
    cVar12 = fn_826DB990(lVar6,&piStack_50,&uStack_5c);
    lVar13 = ((ulonglong)uStack_5c & 0xfffffffc) + 4;
    do {
      puVar16 = (uint *)lVar13;
      uVar7 = (ulonglong)*puVar16;
      if (in_RESERVE != '\0') {
        uVar4 = storeWordConditionalIndexed(uVar7 - 1,0,lVar13);
        *puVar16 = uVar4;
        bVar18 = 2;
      }
    } while (!(bool)(bVar18 >> 1 & 1));
    if (uVar7 == 1) {
      fn_8267BE38();
    }
    if ((cVar12 == '\0') ||
       (uVar7 = (**(code **)(*piStack_50 + 8))(), piVar11 = piStack_50, (uVar7 & 0xff00) != 0x100))
    {
      if (piStack_50 != (int *)0x0) {
        fn_82687270();
      }
      fn_82687270(lVar6);
      return 0;
    }
    if (piStack_50 == (int *)0x0) goto LAB_8274dfc0;
    uVar7 = fn_8267B890(*(undefined4 *)(*(int *)(param_1 + 0x78) + 0x288),0x38,0);
    if ((uVar7 & 0xffffffff) != 0) {
      uVar17 = fn_8274CF30(uVar7,param_1);
    }
    fn_8274D4F8(uVar17,param_1,piVar11,lVar6);
    piVar11 = piStack_50;
  }
  else {
    iVar10 = fn_826A7398(param_1);
    piVar11 = (int *)(*(int *)(iVar10 + 0x100) + 8);
    if (*(int *)(iVar10 + 0x100) == 0) {
      piVar11 = (int *)0x0;
    }
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x78) + 0x288);
    uVar7 = (**(code **)(*piVar11 + 0xc))(piVar11,4);
    uVar8 = (**(code **)(*piVar11 + 0xc))(piVar11,5);
    piVar11 = (int *)fn_826E5600(pcVar2,uVar8,uVar7,uVar3);
    if ((uVar8 & 0xffffffff) != 0) {
      fn_8267C4F0(uVar8);
    }
    if ((uVar7 & 0xffffffff) != 0) {
      fn_8267C4F0(uVar7);
    }
    if (piVar11 == (int *)0x0) {
      fn_826ADF90(param_1,0xffffffff82013610,pcVar2);
    }
    else {
      uVar7 = fn_8267B890(uVar3,0x38,0);
      if ((uVar7 & 0xffffffff) != 0) {
        uVar17 = fn_8274CF30(uVar7,param_1);
      }
      fn_8274D4F8(uVar17,param_1,piVar11,0);
    }
  }
  if (piVar11 != (int *)0x0) {
    fn_82687270(piVar11);
  }
LAB_8274dfc0:
  fn_82687270(lVar6);
  return uVar17;
}

