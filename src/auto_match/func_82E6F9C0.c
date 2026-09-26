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
extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern unsigned int stack0x00000026;
extern unsigned int uStack00000026;


/* WARNING: Type propagation algorithm not settling */

undefined8 fn_82E6F9C0(int *param_1,uint param_2,ulonglong param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  ushort uStack00000026;
  uint auStack_40 [2];
  undefined8 auStack_38 [7];
  
  lVar2 = *(longlong *)(param_1 + 0x12);
  uStack00000026 = (ushort)((param_3 & 0xffffffff) << 8) | (ushort)(param_3 >> 8) & 0xff;
  auStack_40[0] = 0xffffffff;
  uVar1 = 0;
  while( true ) {
    if (lVar2 == 0) {
      return uVar1;
    }
    auStack_38[0] = 0;
    lVar2 = lVar2 + -1;
    uVar1 = (**(code **)(*param_1 + 0x24))(param_1,lVar2,auStack_38,0);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    uVar1 = (**(code **)(*(int *)param_1[0xb] + 0x1c))((int *)param_1[0xb],auStack_38[0]);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    auStack_40[1] = 0;
    uVar1 = (**(code **)(*(int *)param_1[0xb] + 0x24))
                      ((int *)param_1[0xb],auStack_40,4,auStack_40 + 1);
    if ((int)uVar1 < 0) break;
    auStack_40[0] =
         auStack_40[0] << 0x18 |
         (auStack_40[0] & 0xff00) << 8 | auStack_40[0] >> 8 & 0xff00 | auStack_40[0] >> 0x18;
    if ((auStack_40[0] == param_2) &&
       (uVar1 = (**(code **)(*(int *)param_1[0xb] + 0x30))
                          ((int *)param_1[0xb],&stack0x00000026,2,auStack_40 + 1), (int)uVar1 < 0))
    {
      return uVar1;
    }
    if (auStack_40[0] < param_2) {
      return uVar1;
    }
  }
  return uVar1;
}

