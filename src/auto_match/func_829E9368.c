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
extern int fn_829E92B8();


bool fn_829E9368(byte *param_1,ulonglong param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  uint *puVar7;
  byte *pbVar9;
  ulonglong uVar8;
  byte abStack_30 [48];
  
  if (((param_1 != (byte *)0x0) && (0x57 < (param_2 & 0xffffffff))) &&
     (iVar4 = fn_829E92B8(param_1,param_2,abStack_30,0x10), -1 < iVar4)) {
    pbVar6 = abStack_30;
    pbVar9 = param_1;
    do {
      bVar1 = *pbVar9;
      bVar2 = *pbVar6;
      if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
      pbVar9 = pbVar9 + 1;
      pbVar6 = pbVar6 + 1;
    } while (pbVar9 != param_1 + 0x10);
    if ((((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) &&
        ((param_2 & 0xffffffff) == (ulonglong)*(uint *)(param_1 + 0x14))) &&
       ((*(int *)(param_1 + 0x10) == 100 && (uVar3 = *(uint *)(param_1 + 0x24), uVar3 != 0)))) {
      uVar5 = 0;
      uVar8 = ((ulonglong)(uVar3 - 1) & 0xfffffff) * 0x10 + 0x58;
      if (uVar3 != 0) {
        puVar7 = (uint *)(param_1 + 0x54);
        do {
          uVar8 = *puVar7 + uVar8;
          if ((param_2 & 0xffffffff) < (uVar8 & 0xffffffff)) {
            return false;
          }
          uVar5 = uVar5 + 1;
          puVar7 = puVar7 + 4;
        } while (uVar5 < uVar3);
      }
      return (uVar8 & 0xffffffff) == (param_2 & 0xffffffff);
    }
  }
  return false;
}

