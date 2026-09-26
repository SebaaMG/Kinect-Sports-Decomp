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
extern int fn_82B161E8();


undefined8 fn_82AF4AE0(int param_1,int *param_2,int param_3,longlong param_4)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = 0;
  piVar1 = param_2;
  if ((param_2[4] & 7U) != 0) {
    do {
      if (*piVar1 == param_3) break;
      uVar2 = uVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (uVar2 < (param_2[4] & 7U));
  }
  if (uVar2 == (param_2[4] & 7U)) {
    if ((*(uint *)(param_3 + 8) >> 0x1a & 1) != 0) {
      fn_82B161E8(param_1,param_3,*(undefined4 *)(param_1 + 0x294));
    }
    param_4 = ((ulonglong)(*(uint *)(param_3 + 8) >> 0xe) & 7) - param_4;
    if (param_4 != 0) {
      piVar1 = param_2 + (uVar2 - 1);
      do {
        if (uVar2 == 4) {
          return 0;
        }
        piVar1 = piVar1 + 1;
        *piVar1 = param_3;
        uVar2 = uVar2 + 1;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
    }
    param_2[4] = param_2[4] & 0xfffffff8U | uVar2 & 7;
  }
  return 1;
}

