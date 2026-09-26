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


bool fn_82ABE2E0(int *param_1)

{
  bool bVar1;
  uint uVar2;
  uint *puVar3;
  
  uVar2 = (uint)param_1[2] >> 7 & 0x7f;
  if ((uVar2 < 0x53) || (bVar1 = true, 0x5f < uVar2)) {
    bVar1 = false;
  }
  if ((bVar1) || (((param_1[2] & 0x2000000U) != 0 && ((*param_1 != 0 || (param_1[1] != 0)))))) {
    return false;
  }
  puVar3 = (uint *)param_1[1];
  if (puVar3 == (uint *)0x0) {
    return true;
  }
  do {
    if (puVar3[4] != 0) {
      if ((*puVar3 & 0x40000000) == 0) {
        bVar1 = true;
        if ((*puVar3 & 0xe000000) != 0) goto LAB_82abe370;
      }
      else {
LAB_82abe370:
        bVar1 = false;
      }
      if (!bVar1) break;
    }
    puVar3 = (uint *)puVar3[2];
  } while (puVar3 != (uint *)0x0);
  return puVar3 == (uint *)0x0;
}

