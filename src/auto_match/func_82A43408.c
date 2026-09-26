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


void fn_82A43408(undefined4 *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  uint uVar3;
  ulonglong uVar2;
  uint uVar4;
  
  uVar1 = 0;
  uVar4 = 0;
  if (param_1[1] != 0) {
    uVar3 = param_1[2];
    do {
      uVar4 = 0;
      if (uVar3 != 0) {
        do {
          uVar2 = (longlong)(int)uVar4 * (longlong)(int)param_1[1] + uVar1;
          uVar4 = uVar4 + 1;
          *(float *)((int)((uVar2 + 3 & 0xffffffff) << 2) + param_1[6]) =
               *(float *)((int)((uVar2 & 0xffffffff) << 2) + param_1[5]) *
               *(float *)((int)((uVar1 & 0xffffffff) << 2) + param_1[3]) * (float)param_1[4];
          uVar3 = param_1[2];
        } while (uVar4 < uVar3);
      }
      uVar4 = param_1[1];
      uVar1 = uVar1 + 1;
    } while ((uVar1 & 0xffffffff) < (ulonglong)uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x82a434b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)*param_1 + 8))
            ((int *)*param_1,0,param_2,param_1[6],
             ((longlong)(int)param_1[2] * (longlong)(int)uVar4 + 3U & 0x3fffffff) << 2);
  return;
}

