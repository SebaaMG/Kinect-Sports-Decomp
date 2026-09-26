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
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_82A371C8(undefined4 *param_1,undefined4 *param_2,int param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  param_1[param_3 * 10 + 1] = *param_2;
  param_1[param_3 * 10 + 2] = param_2[1];
  param_1[param_3 * 10 + 8] = param_2[1] * (int)param_4;
  uStack_30 = param_1[param_3 * 10 + 9];
  param_1[param_3 * 10 + 6] = 0x103;
  uStack_2c = param_1[param_3 * 10 + 8];
  lVar1 = (**(code **)(*(int *)*param_1 + 0x10))
                    (param_2[2],param_1[param_3 * 10 + 10],0,
                     -(uint)((param_1[param_3 * 10 + 10] & 1) == 0) &
                     (uint)(param_1 + param_3 * 10 + 6),param_1 + param_3 * 10 + 6,
                     param_1[param_3 * 10 + 3],param_4,&uStack_30);
  iVar2 = (int)lVar1;
  if (((-1 < lVar1) && (iVar2 != 0x103)) || (iVar2 == -0x3fffffef)) {
    param_1[param_3 * 10 + 4] = param_1[param_3 * 10 + 7];
    NtClearEvent(param_1[param_3 * 10 + 10]);
  }
  param_1[param_3 * 10 + 5] = iVar2;
  return;
}

