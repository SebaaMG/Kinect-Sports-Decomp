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


int fn_82E2AC98(int param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  
  iVar7 = 0;
  RtlEnterCriticalSection(param_1 + 8);
  uVar3 = 0;
  if (*(uint *)(param_1 + 0x2c) != 0) {
    iVar4 = 0;
    do {
      pbVar5 = (byte *)(iVar4 + *(int *)(param_1 + 0x24));
      pbVar6 = param_2;
      do {
        bVar1 = *pbVar6;
        bVar2 = *pbVar5;
        if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
        pbVar6 = pbVar6 + 1;
        pbVar5 = pbVar5 + 1;
      } while (pbVar6 != param_2 + 0x10);
      if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
        iVar7 = uVar3 * 0x20 + *(int *)(param_1 + 0x24) + 0x10;
        break;
      }
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 0x20;
    } while (uVar3 < *(uint *)(param_1 + 0x2c));
  }
  RtlLeaveCriticalSection(param_1 + 8);
  return iVar7;
}

