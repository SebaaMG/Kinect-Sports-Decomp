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


void fn_82807D10(int param_1,undefined4 *param_2)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  
  uVar4 = 0;
  pbVar7 = (byte *)*param_2;
  iVar5 = 0;
  uVar6 = 0;
  if (*(ushort *)(param_1 + 0x1e) != 0) {
    do {
      uVar4 = (uint)*pbVar7 << (uVar6 & 0x3f) | uVar4;
      uVar2 = uVar4 >> (uVar6 & 0x3f);
      uVar3 = uVar2 & 3;
      if ((uVar2 & 3) == 0) {
code_r0x82807d8c:
        pbVar7 = pbVar7 + 1;
      }
      else {
        if (uVar3 == 1) {
          uVar2 = (uint)pbVar7[1] << 0x10;
code_r0x82807d88:
          pbVar7 = pbVar7 + 1;
          uVar4 = uVar2 | uVar4;
          goto code_r0x82807d8c;
        }
        if (uVar3 < 3) {
          uVar2 = (uint)pbVar7[1] << 8;
          goto code_r0x82807d88;
        }
        if (uVar3 == 3) {
          pbVar1 = pbVar7 + 1;
          pbVar7 = pbVar7 + 2;
          uVar4 = (uint)*pbVar7 << 0x10 | (uint)*pbVar1 << 8 | uVar4;
          goto code_r0x82807d8c;
        }
      }
      iVar5 = iVar5 + 9;
      uVar6 = uVar6 + 0x18;
    } while (iVar5 < (int)(uint)*(ushort *)(param_1 + 0x1e));
  }
  *param_2 = pbVar7;
  return;
}

