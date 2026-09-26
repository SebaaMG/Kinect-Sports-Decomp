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


undefined8 fn_828E9DB8(uint *param_1,ulonglong param_2,uint param_3)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  uVar2 = 1;
  if (param_3 == 0) {
    return uVar2;
  }
  uVar3 = *param_1;
  uVar6 = param_1[1];
  if (param_1[3] < (uVar3 + param_3 + 7 >> 3) + uVar6) {
    uVar2 = 0;
  }
  else {
    if ((uVar3 != 0) && (7 < uVar3 + param_3)) {
      uVar5 = 8 - uVar3;
      uVar4 = (1 << (uVar5 & 0x3f)) - 1;
      param_3 = param_3 - uVar5;
      uVar1 = (uint)param_2;
      *(byte *)(param_1[2] + uVar6) =
           *(byte *)(param_1[2] + uVar6) & ~(byte)(uVar4 << (uVar3 & 0x3f));
      param_2 = (ulonglong)(uVar1 >> (uVar5 & 0x3f));
      *(byte *)(param_1[2] + param_1[1]) =
           (byte)((uVar4 & uVar1) << (*param_1 & 0x3f)) | *(byte *)(param_1[2] + param_1[1]);
      *param_1 = 0;
      param_1[1] = param_1[1] + 1;
    }
    uVar3 = (uint)param_2;
    if (7 < (int)param_3) {
      uVar7 = (ulonglong)(param_3 >> 3);
      param_3 = param_3 - (param_3 & 0xfffffff8);
      do {
        uVar3 = (uint)((param_2 & 0xffffffff) >> 8);
        *(char *)(param_1[2] + param_1[1]) = (char)param_2;
        param_1[1] = param_1[1] + 1;
        uVar7 = uVar7 - 1;
        param_2 = (param_2 & 0xffffffff) >> 8;
      } while (uVar7 != 0);
    }
    if (0 < (int)param_3) {
      uVar6 = (1 << (param_3 & 0x3f)) - 1;
      *(byte *)(param_1[2] + param_1[1]) =
           *(byte *)(param_1[2] + param_1[1]) & ~(byte)(uVar6 << (*param_1 & 0x3f));
      *(byte *)(param_1[2] + param_1[1]) =
           (byte)((uVar6 & uVar3) << (*param_1 & 0x3f)) | *(byte *)(param_1[2] + param_1[1]);
      *param_1 = *param_1 + param_3;
      return uVar2;
    }
  }
  return uVar2;
}

