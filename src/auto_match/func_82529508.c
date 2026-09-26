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
extern int fn_82526C70();
extern int fn_82558150();
extern int fn_82558210();
extern int fn_82587B68();
extern int fn_82A1EFC0();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_82196582;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern U64 storeVectorElementWordIndexed();


void fn_82529508(longlong param_1)

{
  ulonglong uVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined2 *puVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  char *pcVar11;
  longlong lVar12;
  undefined1 in_vs32 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  
  fn_82558150();
  puVar8 = (undefined2 *)param_1;
  *puVar8 = 0x5bc;
  fn_82558210(param_1,3);
  puVar9 = (undefined4 *)fn_82587B68(2);
  fn_82526C70(param_1 + 0x42,0x40,0xffffffff821c4dd0,*puVar9);
  uVar4 = lbl_821CC160;
  lVar12 = param_1 + 0x510;
  *(undefined4 *)(puVar8 + 0x4c) = lbl_821CC160;
  *(undefined4 *)(puVar8 + 0x4e) = uVar4;
  *(undefined4 *)(puVar8 + 0x50) = uVar4;
  *(undefined4 *)(puVar8 + 0x56) = uVar4;
  uVar10 = param_1 + 0x520;
  *(undefined4 *)(puVar8 + 0x54) = uVar4;
  *(undefined4 *)(puVar8 + 0x52) = uVar4;
  *(undefined4 *)(puVar8 + 0x5c) = 0;
  uVar7 = lbl_821CA460;
  *(undefined4 *)(puVar8 + 0x27c) = 0;
  *(undefined4 *)(puVar8 + 0x284) = uVar4;
  *(undefined4 *)(puVar8 + 0x6e) = 0;
  *(undefined4 *)(puVar8 + 0x58) = uVar7;
  *(undefined4 *)(puVar8 + 0x6a) = 0;
  *(undefined4 *)(puVar8 + 0x5a) = uVar7;
  *(undefined4 *)(puVar8 + 0x5e) = 0;
  *(undefined4 *)(puVar8 + 0x6c) = 0;
  *(undefined4 *)(puVar8 + 0x74) = 0;
  iVar6 = (int)uVar10;
  *(undefined4 *)(puVar8 + 0x72) = 0;
  *(undefined4 *)(puVar8 + 0x70) = 0;
  *(undefined4 *)(puVar8 + 0x270) = 0;
  puVar8[0x272] = 0xffff;
  *(undefined4 *)(puVar8 + 0x60) = 0;
  *(undefined4 *)(puVar8 + 100) = 0;
  *(undefined4 *)(puVar8 + 0x66) = 0;
  puVar8[0x274] = 0;
  puVar8[0x275] = 0;
  *(undefined4 *)(puVar8 + 0x278) = 0;
  *(undefined4 *)(puVar8 + 0x27a) = 0;
  *(undefined1 *)(puVar8 + 0x277) = 0;
  *(undefined1 *)(puVar8 + 0x276) = 0;
  *(undefined4 *)(puVar8 + 0x62) = 0;
  uVar5 = (uint)lVar12;
  uVar4 = storeVectorElementWordIndexed(in_vs32,0,lVar12);
  *(undefined4 *)(uVar5 & 0xfffffffc) = uVar4;
  uVar4 = storeVectorElementWordIndexed(in_vs45,lVar12,4);
  *(undefined4 *)(uVar5 + 4 & 0xfffffffc) = uVar4;
  uVar4 = storeVectorElementWordIndexed(in_vs44,lVar12,8);
  *(undefined4 *)(uVar5 + 8 & 0xfffffffc) = uVar4;
  *(undefined4 *)(puVar8 + 0x27e) = 0;
  uVar4 = lbl_8218E8E8;
  *(undefined4 *)(puVar8 + 0x2b0) = 0;
  *(undefined4 *)(puVar8 + 0x282) = uVar4;
  *(undefined4 *)(puVar8 + 0x2b2) = 0;
  *(undefined4 *)(puVar8 + 0x280) = uVar4;
  *(undefined4 *)(puVar8 + 0x28e) = 0;
  do {
    pcVar11 = (char *)uVar10;
    uVar1 = param_1 + 0x560U & 0xffffffff;
    bVar2 = (uVar10 & 0xffffffff) == uVar1;
    if (uVar1 <= (uVar10 & 0xffffffff)) goto LAB_82529668;
    cVar3 = pcVar11[(int)&lbl_82196582 - iVar6];
    *pcVar11 = cVar3;
    uVar10 = uVar10 + 1;
    pcVar11 = (char *)uVar10;
  } while (cVar3 != '\0');
  bVar2 = (uVar10 & 0xffffffff) == (param_1 + 0x560U & 0xffffffff);
LAB_82529668:
  if (bVar2) {
    pcVar11[-1] = '\0';
  }
  uVar10 = param_1 + 0x570;
  *(undefined4 *)(puVar8 + 0x2d8) = uVar7;
  *(undefined4 *)(puVar8 + 0x2b6) = 0;
  iVar6 = (int)uVar10;
  do {
    pcVar11 = (char *)uVar10;
    uVar1 = param_1 + 0x5b0U & 0xffffffff;
    bVar2 = (uVar10 & 0xffffffff) == uVar1;
    if (uVar1 <= (uVar10 & 0xffffffff)) goto LAB_825296a4;
    cVar3 = pcVar11[(int)&lbl_82196582 - iVar6];
    *pcVar11 = cVar3;
    uVar10 = uVar10 + 1;
    pcVar11 = (char *)uVar10;
  } while (cVar3 != '\0');
  bVar2 = (uVar10 & 0xffffffff) == (param_1 + 0x5b0U & 0xffffffff);
LAB_825296a4:
  if (bVar2) {
    pcVar11[-1] = '\0';
  }
  *(undefined4 *)(puVar8 + 0x76) = 0;
  fn_82A1EFC0(param_1 + 0xf0,0,1000);
  *(undefined4 *)(puVar8 + 0x26e) = 0;
  *(undefined4 *)(puVar8 + 0x26c) = 1;
  return;
}

