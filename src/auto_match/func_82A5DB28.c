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


byte fn_82A5DB28(short *param_1)

{
  ushort uVar1;
  ushort uVar2;
  byte bVar3;
  uint uVar4;
  
  uVar1 = param_1[7];
  bVar3 = 1;
  if (((uVar1 != 8) && (uVar1 != 0x10)) && (uVar1 != 0x18)) {
    bVar3 = -(uVar1 == 0x20) & 1;
  }
  if (*param_1 == -2) {
    uVar2 = param_1[9];
    if (((uVar2 != 0) && (uVar2 != 8)) && ((uVar2 != 0x10 && ((uVar2 != 0x14 && (uVar2 != 0x18))))))
    {
      bVar3 = -(uVar2 == 0x20) & bVar3;
    }
    bVar3 = -(uVar2 <= uVar1) & bVar3;
  }
  uVar4 = (uint)(ushort)param_1[1] * (uint)uVar1;
  return -((longlong)*(int *)(param_1 + 2) * (longlong)(int)(uint)(ushort)param_1[6] -
           (ulonglong)*(uint *)(param_1 + 4) == 0) &
         -((longlong)((int)uVar4 >> 3) + (ulonglong)((int)uVar4 < 0 && (uVar4 & 7) != 0) ==
          (ulonglong)(ushort)param_1[6]) & bVar3;
}

