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
extern int fn_82F68CC0();


int fn_82935CC0(byte *param_1,uint param_2,byte *param_3,uint *param_4)

{
  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  longlong lVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  uVar1 = *param_4;
  uVar3 = 0;
  pbVar2 = param_3;
  if (uVar1 != 0) {
    do {
      if (uVar1 - uVar3 < param_2) break;
      lVar4 = 0;
      if (param_2 * 8 != 0) {
        pbVar6 = param_1;
        pbVar5 = pbVar2;
        do {
          lVar4 = (ulonglong)*pbVar6 - (ulonglong)*pbVar5;
          if (lVar4 != 0) break;
          pbVar6 = pbVar6 + 1;
          pbVar5 = pbVar5 + 1;
        } while (pbVar6 != param_1 + param_2 * 8);
      }
      if ((int)lVar4 == 0) {
        return uVar3 << 3;
      }
      uVar3 = uVar3 + 1;
      pbVar2 = pbVar2 + 8;
    } while (uVar3 < uVar1);
  }
  fn_82F68CC0(param_3 + uVar1 * 8,param_1);
  *param_4 = uVar1 + param_2;
  return uVar1 * 8;
}

