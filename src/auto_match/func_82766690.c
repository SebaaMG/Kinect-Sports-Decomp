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
#define CONCAT11(h,l) ((U16)((((U8)(h)) << 8) | ((U8)(l))))


undefined8 fn_82766690(undefined4 *param_1,int param_2,uint *param_3)

{
  byte bVar1;
  undefined8 uVar2;
  uint uVar3;
  byte *pbVar4;
  
  pbVar4 = (byte *)(*(int *)*param_1 + param_2);
  bVar1 = *pbVar4;
  if ((bVar1 & 3) == 0) {
    uVar3 = (uint)(bVar1 >> 2);
    uVar2 = 1;
  }
  else {
    if ((bVar1 & 3) == 1) {
      uVar2 = 2;
      uVar3 = (uint)pbVar4[1] << 6;
    }
    else {
      if ((bVar1 & 3) < 3) {
        uVar3 = (uint)pbVar4[2];
        uVar2 = 3;
      }
      else {
        uVar2 = 4;
        uVar3 = (uint)CONCAT11(pbVar4[3],pbVar4[2]);
      }
      uVar3 = (uVar3 << 8 | (uint)pbVar4[1]) << 6;
    }
    uVar3 = uVar3 | bVar1 >> 2;
  }
  *param_3 = uVar3;
  return uVar2;
}

