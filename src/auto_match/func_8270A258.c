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


void fn_8270A258(undefined1 *param_1,byte *param_2,byte *param_3,byte *param_4,byte *param_5,
                  int param_6,int param_7)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  
  bVar1 = param_2[2];
  bVar2 = param_4[2];
  bVar3 = param_4[3];
  iVar14 = (0x100 - param_7) * (0x100 - param_6);
  bVar4 = param_4[1];
  bVar5 = param_5[1];
  bVar6 = param_5[2];
  bVar7 = param_3[1];
  bVar8 = param_3[3];
  bVar9 = param_5[3];
  bVar10 = param_3[2];
  bVar11 = param_2[1];
  bVar12 = param_2[3];
  iVar13 = (0x100 - param_7) * param_6;
  iVar15 = (0x100 - param_6) * param_7;
  param_6 = param_6 * param_7;
  *param_1 = (char)((uint)*param_5 * param_6 +
                    (uint)*param_4 * iVar15 +
                    (uint)*param_3 * iVar13 + (uint)*param_2 * iVar14 + 0x8000 >> 0x10);
  param_1[1] = (char)((uint)bVar5 * param_6 +
                      (uint)bVar4 * iVar15 + (uint)bVar7 * iVar13 + (uint)bVar11 * iVar14 + 0x8000
                     >> 0x10);
  param_1[2] = (char)((uint)bVar6 * param_6 +
                      (uint)bVar2 * iVar15 + (uint)bVar10 * iVar13 + (uint)bVar1 * iVar14 + 0x8000
                     >> 0x10);
  param_1[3] = (char)((uint)bVar9 * param_6 +
                      (uint)bVar3 * iVar15 + (uint)bVar8 * iVar13 + (uint)bVar12 * iVar14 + 0x8000
                     >> 0x10);
  return;
}

