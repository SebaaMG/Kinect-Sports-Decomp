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
extern int fn_82876A38();
extern int fn_82F66368();
extern int fn_82F6E8D4();
extern unsigned int register0x0000000c;
extern unsigned int stack0x00000000;


int fn_82876A90(int *param_1,longlong param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  byte *pbVar7;
  char *pcVar9;
  longlong lVar8;
  int iVar10;
  ulonglong uVar11;
  
  puVar1 = (undefined4 *)(ZEXT48(&stack0x00000000) - 0x70);
  *puVar1 = register0x0000000c;
  lVar8 = param_2;
  do {
    pcVar9 = (char *)lVar8;
    lVar8 = lVar8 + 1;
  } while (*pcVar9 != '\0');
  lVar5 = ((lVar8 - param_2) - 1U & 0xffffffff) + 1;
  uVar11 = -lVar5 & 0xfffffff0;
  fn_82F6E8D4();
  lVar8 = (ZEXT48(&stack0x00000000) - 0x70) + uVar11;
  *(undefined4 *)lVar8 = *puVar1;
  lVar8 = lVar8 + 0x50;
  fn_82F66368(lVar8,lVar5);
  fn_82876A38(lVar8);
  iVar10 = 0;
  iVar3 = *param_1 + -1;
  do {
    uVar6 = iVar3 - iVar10;
    iVar4 = ((int)uVar6 >> 1) + (uint)((int)uVar6 < 0 && (uVar6 & 1) != 0) + iVar10;
    pbVar7 = (byte *)(param_1[iVar4 * 2 + 1] + (int)param_1);
    lVar5 = lVar8;
    do {
      uVar2 = (uint)*(byte *)lVar5;
      uVar6 = (uint)*pbVar7;
      if (*pbVar7 == 0) break;
      pbVar7 = pbVar7 + 1;
      lVar5 = lVar5 + 1;
    } while (uVar6 == uVar2);
    if (uVar6 == uVar2) {
      return param_1[iVar4 * 2 + 2];
    }
    if ((int)(uVar6 - uVar2) < 1) {
      iVar10 = iVar4 + 1;
    }
    else {
      iVar3 = iVar4 + -1;
    }
    if (iVar3 < iVar10) {
      return 0;
    }
  } while( true );
}

