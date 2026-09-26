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


void fn_82CA4970(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4,
                  uint param_5)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  uVar4 = (ulonglong)((int)param_5 >> 4);
  uVar3 = 0;
  uVar6 = uVar4;
  if (0 < (longlong)uVar4) {
    do {
      *param_1 = *param_2;
      param_1[1] = *param_3;
      param_1[2] = param_2[1];
      param_1[3] = *param_4;
      param_1[4] = param_2[2];
      param_1[5] = param_3[1];
      param_1[6] = param_2[3];
      param_1[7] = param_4[1];
      param_1[8] = param_2[4];
      param_1[9] = param_3[2];
      param_1[10] = param_2[5];
      param_1[0xb] = param_4[2];
      param_1[0xc] = param_2[6];
      param_1[0xd] = param_3[3];
      param_1[0xe] = param_2[7];
      param_1[0xf] = param_4[3];
      param_1[0x10] = param_2[8];
      param_1[0x11] = param_3[4];
      param_1[0x12] = param_2[9];
      param_1[0x13] = param_4[4];
      param_1[0x14] = param_2[10];
      param_1[0x15] = param_3[5];
      param_1[0x16] = param_2[0xb];
      param_1[0x17] = param_4[5];
      param_1[0x18] = param_2[0xc];
      param_1[0x19] = param_3[6];
      param_1[0x1a] = param_2[0xd];
      param_1[0x1b] = param_4[6];
      param_1[0x1c] = param_2[0xe];
      puVar2 = param_3 + 7;
      param_3 = param_3 + 8;
      param_1[0x1d] = *puVar2;
      puVar2 = param_2 + 0xf;
      param_2 = param_2 + 0x10;
      param_1[0x1e] = *puVar2;
      puVar2 = param_4 + 7;
      param_4 = param_4 + 8;
      param_1[0x1f] = *puVar2;
      param_1 = param_1 + 0x20;
      uVar6 = uVar6 - 1;
      uVar3 = uVar4;
    } while (uVar6 != 0);
  }
  if ((int)(uVar3 & 0x1fffffff) * 8 < (int)param_5 >> 1) {
    lVar5 = (longlong)((int)param_5 >> 1) + (uVar3 & 0x1fffffff) * -8;
    do {
      *param_1 = *param_2;
      uVar1 = *param_3;
      param_3 = param_3 + 1;
      param_1[1] = uVar1;
      puVar2 = param_2 + 1;
      param_2 = param_2 + 2;
      param_1[2] = *puVar2;
      uVar1 = *param_4;
      param_4 = param_4 + 1;
      param_1[3] = uVar1;
      param_1 = param_1 + 4;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  if ((param_5 & 1) != 0) {
    *param_1 = *param_2;
    param_1[1] = *param_3;
    param_1[2] = *param_4;
    return;
  }
  return;
}

