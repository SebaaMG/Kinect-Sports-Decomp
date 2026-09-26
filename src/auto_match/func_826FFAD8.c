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
extern unsigned int *auStack_48;
extern int fn_8267BE38();
extern int fn_8267C4F0();
extern int fn_8268ACE8();
extern int fn_8268C928();
extern int fn_8268CAB0();
extern int fn_826FF580();
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern U64 storeWordConditionalIndexed();


void fn_826FFAD8(int param_1,int param_2)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  char *pcVar9;
  ulonglong uVar8;
  char *pcVar11;
  longlong lVar10;
  int *piVar12;
  uint *puVar13;
  char in_RESERVE;
  uint uStack_50;
  uint uStack_4c;
  uint auStack_48 [18];
  
  auStack_48[0] = 0;
  if (param_2 == 0) {
    return;
  }
  puVar13 = (uint *)(param_2 + 0xc);
  bVar3 = false;
  iVar5 = fn_8268ACE8(puVar13);
  if ((iVar5 != 0) &&
     ((cVar1 = *(char *)((*puVar13 & 0xfffffffc) + 8), cVar1 == 'i' || (cVar1 == 'I')))) {
    fn_8268CAB0(&uStack_50,puVar13);
    bVar3 = false;
    puVar6 = (uint *)fn_8268C928(auStack_48,&uStack_50,0,6);
    pcVar9 = "img://";
    pcVar11 = (char *)((*puVar6 & 0xfffffffc) + 8);
    do {
      cVar1 = *pcVar11;
      cVar2 = *pcVar9;
      if (cVar1 == '\0') break;
      pcVar11 = pcVar11 + 1;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 == cVar2);
    if (cVar1 == cVar2) {
LAB_826ffbf4:
      bVar4 = true;
    }
    else {
      bVar3 = true;
      puVar6 = (uint *)fn_8268C928(&uStack_4c,&uStack_50,0,8);
      pcVar9 = "imgps://";
      pcVar11 = (char *)((*puVar6 & 0xfffffffc) + 8);
      do {
        cVar1 = *pcVar11;
        cVar2 = *pcVar9;
        if (cVar1 == '\0') break;
        pcVar11 = pcVar11 + 1;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 == cVar2);
      bVar4 = false;
      if (cVar1 == cVar2) goto LAB_826ffbf4;
    }
    bVar3 = !bVar3;
    if (!bVar3) {
      lVar10 = ((ulonglong)uStack_4c & 0xfffffffc) + 4;
      do {
        puVar6 = (uint *)lVar10;
        uVar8 = (ulonglong)*puVar6;
        if (in_RESERVE != '\0') {
          uVar7 = storeWordConditionalIndexed(uVar8 - 1,0,lVar10);
          *puVar6 = uVar7;
          bVar3 = true;
        }
      } while (!bVar3);
      if (uVar8 == 1) {
        fn_8267BE38();
      }
    }
    bVar3 = false;
    lVar10 = ((ulonglong)auStack_48[0] & 0xfffffffc) + 4;
    do {
      puVar6 = (uint *)lVar10;
      uVar8 = (ulonglong)*puVar6;
      if (in_RESERVE != '\0') {
        uVar7 = storeWordConditionalIndexed(uVar8 - 1,0,lVar10);
        *puVar6 = uVar7;
        bVar3 = true;
      }
    } while (!bVar3);
    if (uVar8 == 1) {
      fn_8267BE38();
    }
    bVar4 = !bVar4;
    bVar3 = !bVar4;
    lVar10 = ((ulonglong)uStack_50 & 0xfffffffc) + 4;
    do {
      puVar6 = (uint *)lVar10;
      uVar8 = (ulonglong)*puVar6;
      if (in_RESERVE != '\0') {
        uVar7 = storeWordConditionalIndexed(uVar8 - 1,0,lVar10);
        *puVar6 = uVar7;
        bVar4 = true;
      }
    } while (!bVar4);
    if (uVar8 == 1) {
      fn_8267BE38();
    }
  }
  bVar4 = false;
  iVar5 = fn_8268ACE8(puVar13);
  uVar7 = auStack_48[0];
  if ((iVar5 != 0) && (!bVar3)) {
    bVar4 = true;
    uVar7 = (**(code **)(*(int *)(param_1 + 8) + 0xc))(param_1 + 8,0x17);
    if (uVar7 != 0) {
      bVar3 = true;
      goto LAB_826ffd18;
    }
  }
  bVar3 = false;
LAB_826ffd18:
  if ((bVar4) && (uVar7 != 0)) {
    fn_8267C4F0();
  }
  if (bVar3) {
    fn_826FF580(param_1,param_2);
  }
  else {
    iVar5 = *(int *)(param_1 + 0xb24) + 1;
    *(int *)(param_1 + 0xb24) = iVar5;
    *(int *)(param_2 + 0x40) = iVar5;
    piVar12 = *(int **)(param_1 + 0xb20);
    if (piVar12 == (int *)0x0) {
      *(int *)(param_1 + 0xb20) = param_2;
    }
    else {
      for (; *piVar12 != 0; piVar12 = (int *)*piVar12) {
      }
      *piVar12 = param_2;
    }
  }
  return;
}

