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
extern unsigned int *auStack_30;
extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern unsigned int uStack_3c;


undefined8 fn_82E6F878(int *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ushort auStack_40 [2];
  undefined4 uStack_3c;
  uint auStack_38 [2];
  undefined8 auStack_30 [6];
  
  if (*(ulonglong *)(param_1 + 0x12) < param_2) {
    uVar2 = 0xffffffffc00d36b2;
  }
  else {
    if ((param_2 < *(ulonglong *)(param_1 + 0x12)) ||
       (uVar2 = (**(code **)(*(int *)param_1[0x16] + 0x50))
                          ((int *)param_1[0x16],(param_2 & 0xffffffff) + 1), -1 < (int)uVar2)) {
      auStack_30[0] = 0;
      uVar2 = (**(code **)(*param_1 + 0x24))(param_1,param_2,auStack_30,0);
      if (-1 < (int)uVar2) {
        uVar2 = (**(code **)(*(int *)param_1[0xb] + 0x1c))((int *)param_1[0xb],auStack_30[0]);
        if (-1 < (int)uVar2) {
          trapDoubleWordImmediate(6,(ulonglong)(uint)param_1[0x17],0);
          uStack_3c = 0;
          uVar1 = *(ulonglong *)(param_1 + 0x10) / (ulonglong)(uint)param_1[0x17] & 0xffffffff;
          auStack_38[0] =
               (uint)(uVar1 << 0x18) |
               (uint)(uVar1 << 8) & 0xff0000 | (uint)(uVar1 >> 8) & 0xff00 | (uint)(uVar1 >> 0x18);
          uVar2 = (**(code **)(*(int *)param_1[0xb] + 0x30))
                            ((int *)param_1[0xb],auStack_38,4,&uStack_3c);
          if (-1 < (int)uVar2) {
            auStack_40[0] = *(ushort *)(param_1 + 0x18) << 8 | *(ushort *)(param_1 + 0x18) >> 8;
            uVar2 = (**(code **)(*(int *)param_1[0xb] + 0x30))
                              ((int *)param_1[0xb],auStack_40,2,&uStack_3c);
          }
        }
      }
    }
    if (*(ulonglong *)(param_1 + 0x12) <= param_2) {
      *(ulonglong *)(param_1 + 0x12) = *(ulonglong *)(param_1 + 0x12) + 1;
    }
  }
  return uVar2;
}

