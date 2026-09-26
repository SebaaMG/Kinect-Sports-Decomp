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


ulonglong fn_826CC0E8(int *param_1,undefined4 *param_2,ulonglong param_3)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  uint *puVar8;
  
  uVar4 = (uint)param_3;
  iVar7 = uVar4 * 0x10 + *param_1;
  puVar8 = (uint *)(iVar7 + 8);
  if ((*puVar8 == 0xfffffffe) || (*(uint *)(iVar7 + 0xc) != uVar4)) {
    return 0xffffffffffffffff;
  }
  do {
    if (puVar8[1] == uVar4) {
      pcVar6 = (char *)((puVar8[2] & 0xfffffffc) + 8);
      pcVar5 = (char *)((*(uint *)*param_2 & 0xfffffffc) + 8);
      do {
        cVar1 = *pcVar6;
        cVar2 = *pcVar5;
        if (cVar1 == '\0') break;
        pcVar6 = pcVar6 + 1;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 == cVar2);
      if (cVar1 == cVar2) {
        return param_3;
      }
    }
    uVar3 = *puVar8;
    param_3 = (ulonglong)uVar3;
    if (uVar3 == 0xffffffff) {
      return 0xffffffffffffffff;
    }
    puVar8 = (uint *)(uVar3 * 0x10 + *param_1 + 8);
  } while( true );
}

