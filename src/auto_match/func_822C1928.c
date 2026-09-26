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
extern int fn_82F640B0();


uint fn_822C1928(undefined4 *param_1,byte *param_2,uint param_3,uint param_4)

{
  byte *pbVar1;
  longlong lVar2;
  byte *pbVar3;
  uint uVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  
  if ((param_4 != 0) || ((uint)param_1[4] < param_3)) {
    if ((param_3 < (uint)param_1[4]) && (uVar4 = param_1[4] - param_3, param_4 <= uVar4)) {
      pbVar7 = (byte *)((uVar4 - param_4) + 1);
      puVar5 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar5 = (undefined4 *)*param_1;
      }
      pbVar8 = (byte *)((int)puVar5 + param_3);
      while (pbVar1 = (byte *)fn_82F640B0(pbVar8,*param_2,pbVar7), pbVar1 != (byte *)0x0) {
        lVar2 = 0;
        if (param_4 != 0) {
          pbVar3 = param_2;
          pbVar6 = pbVar1;
          do {
            lVar2 = (ulonglong)*pbVar6 - (ulonglong)*pbVar3;
            if (lVar2 != 0) break;
            pbVar6 = pbVar6 + 1;
            pbVar3 = pbVar3 + 1;
          } while (pbVar6 != pbVar1 + param_4);
        }
        if ((int)lVar2 == 0) {
          if (0xf < (uint)param_1[5]) {
            param_1 = (undefined4 *)*param_1;
          }
          return (int)pbVar1 - (int)param_1;
        }
        pbVar7 = pbVar8 + (int)(pbVar7 + (-1 - (int)pbVar1));
        pbVar8 = pbVar1 + 1;
      }
    }
    param_3 = 0xffffffff;
  }
  return param_3;
}

