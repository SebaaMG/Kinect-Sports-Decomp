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


void fn_8270A468(undefined1 *param_1,byte *param_2,byte *param_3,byte *param_4,byte *param_5,
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
  int iVar9;
  int iVar10;
  int iVar11;
  
  bVar1 = param_2[1];
  bVar2 = param_5[2];
  bVar3 = param_5[1];
  iVar10 = (0x100 - param_7) * (0x100 - param_6);
  bVar4 = param_2[2];
  bVar5 = param_4[1];
  bVar6 = param_4[2];
  bVar7 = param_3[1];
  bVar8 = param_3[2];
  iVar9 = (0x100 - param_7) * param_6;
  iVar11 = (0x100 - param_6) * param_7;
  param_6 = param_6 * param_7;
  *param_1 = (char)((uint)*param_5 * param_6 +
                    (uint)*param_4 * iVar11 +
                    (uint)*param_3 * iVar9 + (uint)*param_2 * iVar10 + 0x8000 >> 0x10);
  param_1[1] = (char)((uint)bVar3 * param_6 +
                      (uint)bVar5 * iVar11 + (uint)bVar7 * iVar9 + (uint)bVar1 * iVar10 + 0x8000 >>
                     0x10);
  param_1[2] = (char)((uint)bVar2 * param_6 +
                      (uint)bVar6 * iVar11 + (uint)bVar8 * iVar9 + (uint)bVar4 * iVar10 + 0x8000 >>
                     0x10);
  param_1[3] = 0xff;
  return;
}

