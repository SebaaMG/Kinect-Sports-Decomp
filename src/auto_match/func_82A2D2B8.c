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
extern unsigned int uStack00000010;


void fn_82A2D2B8(undefined8 param_1,short *param_2,short *param_3)

{
  bool bVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  ushort uStack00000010;
  char *pcStack00000014;
  
  uStack00000010 = (ushort)((ulonglong)param_1 >> 0x30);
  uVar3 = (uint)uStack00000010;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  if (uVar3 == 0) {
    return;
  }
  pcStack00000014 = (char *)param_1;
  bVar1 = *pcStack00000014 == '\\';
  for (uVar4 = (uint)bVar1; (uVar4 < uVar3 && (pcStack00000014[uVar4] != '\\')); uVar4 = uVar4 + 1)
  {
  }
  sVar2 = (short)uVar4 - (ushort)bVar1;
  *(char **)(param_2 + 2) = pcStack00000014 + bVar1;
  *param_2 = sVar2;
  param_2[1] = sVar2;
  if (uVar3 <= uVar4) {
    return;
  }
  sVar2 = (uStack00000010 - (short)uVar4) + -1;
  *(char **)(param_3 + 2) = pcStack00000014 + uVar4 + 1;
  *param_3 = sVar2;
  param_3[1] = sVar2;
  return;
}

