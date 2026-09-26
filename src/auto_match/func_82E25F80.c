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
extern int fn_82E25E88();
extern unsigned int lbl_8208E054;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint fn_82E25F80(uint *param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  uint *puVar5;
  uint uVar6;
  byte *pbVar7;
  char *pcVar8;
  char *pcVar9;
  char acStack_2c [12];
  char acStack_20 [16];
  
  puVar5 = param_1 + 1;
  pbVar7 = (byte *)&lbl_8208E054;
  do {
    bVar1 = *(byte *)puVar5;
    bVar2 = *pbVar7;
    if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
    puVar5 = (uint *)((int)puVar5 + 1);
    pbVar7 = pbVar7 + 1;
  } while (puVar5 != param_1 + 4);
  if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
    uVar6 = *param_1;
  }
  else {
    puVar5 = (uint *)fn_82E25E88(acStack_20);
    pcVar9 = acStack_2c;
    pcVar8 = "";
    do {
      cVar3 = *pcVar9;
      cVar4 = *pcVar8;
      if (cVar3 != cVar4) break;
      pcVar9 = pcVar9 + 1;
      pcVar8 = pcVar8 + 1;
    } while (pcVar9 != acStack_20);
    uVar6 = -(uint)(cVar3 == cVar4) & *puVar5;
  }
  return uVar6;
}

