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


undefined8 fn_82C3CC38(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  if ((((*param_2 != 0) && (*param_2 < 0x5dc01)) && (uVar1 = param_2[1], uVar1 != 0)) &&
     (uVar1 < 0x21)) {
    uVar3 = (ulonglong)param_2[2];
    if (uVar3 != 0) {
      uVar2 = 0;
      do {
        if ((uVar3 & 1) != 0) {
          uVar2 = uVar2 + 1;
        }
        uVar3 = uVar3 >> 1;
      } while (uVar3 != 0);
      if (uVar1 != uVar2) {
        return 0;
      }
    }
    uVar1 = param_2[3];
    if (((uVar1 != 0) && (param_2[4] != 0)) && (uVar2 = param_2[4] << 3, uVar1 <= uVar2)) {
      if (param_2[5] == 0) {
        if (uVar1 < 0x21) {
          return 1;
        }
      }
      else if (((param_2[5] == 1) && (uVar2 == uVar1)) && (uVar1 < 0x41)) {
        if ((uVar1 & 0x1f) == 0) {
          return 1;
        }
        return 0;
      }
    }
  }
  return 0;
}

