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
extern int fn_82311AB8();
extern int fn_82F69290();
extern unsigned int lbl_82167E64;


ulonglong fn_8260D428(undefined4 *param_1,uint param_2,uint param_3,byte *param_4,uint param_5)

{
  byte *pbVar1;
  ulonglong uVar2;
  uint uVar3;
  byte *pbVar4;
  undefined **appuStack_20 [8];
  
  if ((uint)param_1[4] < param_2) {
    fn_82311AB8(appuStack_20,0xffffffff821961fc);
    appuStack_20[0] = &lbl_82167E64;
                    /* WARNING: Subroutine does not return */
    fn_82F69290(appuStack_20,0xffffffff821dda18);
  }
  uVar3 = param_1[4] - param_2;
  if (uVar3 < param_3) {
    param_3 = uVar3;
  }
  uVar3 = param_3;
  if (param_5 <= param_3) {
    uVar3 = param_5;
  }
  if (0xf < (uint)param_1[5]) {
    param_1 = (undefined4 *)*param_1;
  }
  pbVar4 = (byte *)((int)param_1 + param_2);
  uVar2 = 0;
  if (uVar3 != 0) {
    pbVar1 = pbVar4 + uVar3;
    do {
      uVar2 = (ulonglong)*pbVar4 - (ulonglong)*param_4;
      if (uVar2 != 0) break;
      pbVar4 = pbVar4 + 1;
      param_4 = param_4 + 1;
    } while (pbVar4 != pbVar1);
  }
  if ((uVar2 & 0xffffffff) == 0) {
    if (param_3 < param_5) {
      uVar2 = 0xffffffffffffffff;
    }
    else {
      uVar2 = (ulonglong)(param_5 != param_3);
    }
  }
  return uVar2;
}

