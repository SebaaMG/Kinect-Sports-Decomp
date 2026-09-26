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
extern int fn_82ABDBE8();


byte fn_82AF5548(undefined8 param_1,int param_2,longlong param_3)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_2 + 8);
  uVar3 = uVar1 >> 7 & 0x7f;
  if (uVar3 == 3) {
    if (((uVar1 & 0x1c000) == 0x4000) &&
       (cVar2 = fn_82ABDBE8(*(undefined4 *)(param_2 + 0x2c),*(undefined4 *)(param_2 + 0x30)),
       cVar2 != '\0')) goto LAB_82af55d0;
  }
  else {
    if (uVar3 == 100) {
      return 6;
    }
    if (((uVar3 == 0x6e) || (uVar3 == 0x71)) || (uVar3 == 0x7c)) goto LAB_82af55d0;
  }
  uVar1 = uVar1 >> 0xe & 7;
  if (uVar1 == 2) {
    return ((int)param_3 != 0) + 4;
  }
  if (uVar1 == 3) {
    return (-(param_3 != 0) & 2U) + 1;
  }
  if (uVar1 != 4) {
    return 6;
  }
LAB_82af55d0:
  return -(param_3 != 0) & 2;
}

