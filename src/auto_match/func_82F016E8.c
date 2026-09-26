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


void fn_82F016E8(int param_1,undefined1 *param_2,undefined1 *param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = 3;
  *param_3 = *param_2;
  param_3[1] = param_2[1];
  param_3[2] = param_2[2];
  if (3 < param_4 + -3) {
    iVar3 = param_4 + -6;
    do {
      uVar4 = (int)(((uint)(byte)param_2[iVar5 + -3] + (uint)(byte)param_2[iVar5 + 3]) *
                    *(int *)(param_1 + 0x5318) +
                    ((uint)(byte)param_2[iVar5 + -2] + (uint)(byte)param_2[iVar5 + 2]) *
                    *(int *)(param_1 + 0x5314) +
                    ((uint)(byte)param_2[iVar5 + -1] + (uint)(byte)param_2[iVar5 + 1]) *
                    *(int *)(param_1 + 0x5310) +
                   (uint)(byte)param_2[iVar5] * *(int *)(param_1 + 0x530c)) >> 7;
      uVar2 = (byte)param_2[iVar5] - uVar4;
      uVar1 = (int)uVar2 >> 0x1f;
      if ((int)((uVar2 ^ uVar1) - uVar1) < 0x10) {
        if ((int)uVar4 < 0) {
          uVar4 = 0;
        }
        else if (0xff < (int)uVar4) {
          uVar4 = 0xff;
        }
      }
      else {
        uVar4 = (uint)(byte)param_2[iVar5];
      }
      (param_2 + iVar5)[(int)param_3 - (int)param_2] = (byte)uVar4;
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  param_3[param_4 + -1] = param_2[param_4 + -1];
  param_3[param_4 + -2] = param_2[param_4 + -2];
  param_3[param_4 + -3] = param_2[param_4 + -3];
  return;
}

