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
extern int fn_829641F8();
extern int fn_82975B00();
extern int fn_82975BB8();
extern int fn_82F65AC0();
extern int fn_82F65B18();
extern int fn_82F66A40();
extern int fn_82F66A80();


bool fn_82958E08(undefined8 param_1,uint *param_2,undefined4 *param_3,ushort param_4,int *param_5)

{
  int *piVar1;
  bool bVar2;
  int iVar5;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar6;
  char *pcVar7;
  char *pcVar8;
  char cVar10;
  uint uVar9;
  undefined4 *puVar11;
  char *pcVar12;
  undefined4 *puVar13;
  char acStack_a0 [160];
  
  *param_5 = 0;
  *param_2 = *param_2 & 0xbfffffff;
  pcVar12 = *(char **)(param_2[0x1a] + 0x18);
  uVar6 = 0x3f;
  bVar2 = false;
  pcVar8 = acStack_a0;
  pcVar7 = pcVar12;
  do {
    if (*pcVar7 == '\0') break;
    *pcVar8 = *pcVar7;
    uVar6 = uVar6 - 1;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
  } while (uVar6 != 0);
  if ((uVar6 & 0xffffffff) == 0) {
    pcVar8 = pcVar8 + -1;
  }
  *pcVar8 = '\0';
  pcVar7 = acStack_a0;
  cVar10 = acStack_a0[0];
  while ((cVar10 != '\0' && (*pcVar7 != '_'))) {
    pcVar7 = pcVar7 + 1;
    cVar10 = *pcVar7;
  }
  if (*pcVar7 == '_') {
    *pcVar7 = '\0';
    iVar5 = fn_82F65AC0(pcVar7 + 1,0xffffffff8202cf10);
    if (iVar5 != 0) {
      *param_5 = 1;
      param_2[0x1b] = 0;
      fn_82975B00(param_1,param_2[0x1a],0x1196,0xffffffff8203802c,pcVar12);
      goto LAB_82959120;
    }
    bVar2 = true;
  }
  pcVar12 = acStack_a0;
  while( true ) {
    if ((acStack_a0[0] == '\0') || (iVar5 = fn_82F66A40(*pcVar12), iVar5 == 0)) break;
    pcVar12 = pcVar12 + 1;
    acStack_a0[0] = *pcVar12;
  }
  if (*pcVar12 == '\0') {
    lVar3 = 0;
  }
  else {
    lVar3 = fn_82F65B18(pcVar12);
  }
  if (*pcVar12 != '\0') {
    *pcVar12 = '\0';
    pcVar12 = pcVar12 + 1;
  }
  cVar10 = *pcVar12;
  while (cVar10 != '\0') {
    iVar5 = fn_82F66A80();
    if (iVar5 == 0) break;
    pcVar12 = pcVar12 + 1;
    cVar10 = *pcVar12;
  }
  if (*pcVar12 == '\0') {
    uVar6 = (ulonglong)(param_2[0x1c] >> 2) + lVar3;
  }
  else {
    uVar6 = 0xffffffffffffffff;
  }
  uVar4 = fn_829641F8(param_1,param_2);
  puVar13 = (undefined4 *)0x0;
  if (param_3[4] == -1) {
LAB_82959110:
    param_2[0x1b] = 0;
    uVar9 = *param_2 | 0x40000000;
  }
  else {
    do {
      iVar5 = fn_82F65AC0(*param_3,acStack_a0);
      if ((iVar5 == 0) &&
         (puVar11 = param_3, puVar13 = param_3, (param_4 & *(ushort *)(param_3 + 1)) != 0)) break;
      puVar11 = param_3 + 9;
      piVar1 = param_3 + 0xd;
      param_3 = puVar11;
    } while (*piVar1 != -1);
    if ((puVar13 == (undefined4 *)0x0) || (puVar11[4] == -1)) goto LAB_82959110;
    if ((bVar2) && ((puVar13[2] & 0x80000000) == 0)) {
      *param_2 = *param_2 | 0x40000000;
    }
    if (puVar13[3] != 0) {
      fn_82975BB8(param_1,param_2[0x1a],0x1261,0xffffffff82037ff0,uVar4,acStack_a0,puVar13[3],
                        uVar6);
    }
    if (((uVar6 & 0xffffffff) < (ulonglong)(uint)puVar11[5]) ||
       ((ulonglong)(uint)puVar11[6] <= (uVar6 & 0xffffffff))) {
      *param_2 = *param_2 | 0x40000000;
    }
    if ((uint)puVar11[8] <= param_2[4]) {
      *param_2 = *param_2 | 0x40000000;
      *param_5 = 1;
      fn_82975B00(param_1,param_2[0x1a],0x11cb,0xffffffff82037fc8,acStack_a0,uVar4);
      goto LAB_82959120;
    }
    if ((param_4 & *(ushort *)(puVar13 + 1)) == 0) {
      *param_2 = *param_2 | 0x40000000;
    }
    param_2[0x1b] =
         (uint)(((uint)puVar13[7] + uVar6 & 0xffffffff) << 0x10) |
         (uint)*(ushort *)((int)puVar13 + 0x12);
    if (!bVar2) goto LAB_82959120;
    uVar9 = *param_2 | 0x1000000;
  }
  *param_2 = uVar9;
LAB_82959120:
  return *param_5 != 0;
}

