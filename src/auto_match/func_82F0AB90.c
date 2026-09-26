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
extern unsigned int *auStack_220;
extern unsigned int *auStack_2a0;
extern int fn_82F09EE0();
extern int fn_82F69148();
extern unsigned int uStack_2a2;


void fn_82F0AB90(int param_1,int param_2,undefined8 param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte *pbVar8;
  ushort *puVar9;
  byte *pbVar10;
  longlong lVar11;
  ushort uStack_2a2;
  undefined1 auStack_2a0 [128];
  undefined1 auStack_220 [544];
  
  puVar9 = &uStack_2a2;
  pbVar10 = (byte *)(param_1 + 2);
  lVar11 = 8;
  do {
    pbVar8 = pbVar10 + -2;
    bVar1 = pbVar10[-1];
    bVar2 = *pbVar10;
    bVar3 = pbVar10[1];
    bVar4 = pbVar10[2];
    bVar5 = pbVar10[3];
    bVar6 = pbVar10[4];
    bVar7 = pbVar10[5];
    pbVar10 = pbVar10 + param_2;
    puVar9[1] = (ushort)*pbVar8;
    puVar9[2] = (ushort)bVar1;
    puVar9[3] = (ushort)bVar2;
    puVar9[4] = (ushort)bVar3;
    puVar9[5] = (ushort)bVar4;
    puVar9[6] = (ushort)bVar5;
    puVar9[7] = (ushort)bVar6;
    puVar9 = puVar9 + 8;
    *puVar9 = (ushort)bVar7;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  fn_82F09EE0(auStack_2a0,8,auStack_220,0);
  fn_82F69148(param_3,auStack_220,0x80);
  return;
}

