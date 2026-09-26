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


void fn_82A51180(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  int in_r9;
  uint uVar4;
  ulonglong uVar3;
  int in_r10;
  uint uVar5;
  
  puVar1 = *(undefined4 **)(in_r10 + 8);
  if ((float)puVar1[4] == *(float *)(in_r9 + 0x48)) {
    return;
  }
  puVar1[4] = *(float *)(in_r9 + 0x48);
  uVar2 = 0;
  uVar5 = 0;
  if (puVar1[1] != 0) {
    uVar4 = puVar1[2];
    do {
      uVar5 = 0;
      if (uVar4 != 0) {
        do {
          uVar3 = (longlong)(int)uVar5 * (longlong)(int)puVar1[1] + uVar2;
          uVar5 = uVar5 + 1;
          *(float *)((int)((uVar3 + 3 & 0xffffffff) << 2) + puVar1[6]) =
               *(float *)((int)((uVar3 & 0xffffffff) << 2) + puVar1[5]) *
               *(float *)((int)((uVar2 & 0xffffffff) << 2) + puVar1[3]) * (float)puVar1[4];
          uVar4 = puVar1[2];
        } while (uVar5 < uVar4);
      }
      uVar5 = puVar1[1];
      uVar2 = uVar2 + 1;
    } while ((uVar2 & 0xffffffff) < (ulonglong)uVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x82a434b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)*puVar1 + 8))
            ((int *)*puVar1,0,param_3,puVar1[6],
             ((longlong)(int)puVar1[2] * (longlong)(int)uVar5 + 3U & 0x3fffffff) << 2);
  return;
}

