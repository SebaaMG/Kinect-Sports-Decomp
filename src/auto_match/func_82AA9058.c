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


void fn_82AA9058(int param_1,uint param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5)

{
  ushort uVar1;
  
  *param_3 = 0;
  if ((param_2 == *(ushort *)(param_1 + 0x34) - 1) && ((*(ushort *)(param_1 + 0x16) & 0x1000) != 0))
  {
    *param_3 = 1;
  }
  *param_5 = 0;
  if (((uint)*(ushort *)(param_1 + 0x14) & 1 << (param_2 & 0x3f)) != 0) {
    *param_5 = 1;
  }
  *param_4 = 0;
  if (*(ushort *)(param_1 + 0x34) < 3) {
    return;
  }
  uVar1 = *(ushort *)(param_1 + 0x16) >> 4 & 0xf;
  if ((((uVar1 == 1) || (uVar1 == 2)) && (0 < (int)param_2)) && ((int)param_2 < 3)) {
    *param_4 = 1;
  }
  if ((*(ushort *)(param_1 + 0x16) & 0xf0) != 0x30) {
    return;
  }
  if ((int)param_2 < 1) {
    return;
  }
  if (3 < (int)param_2) {
    return;
  }
  *param_4 = 1;
  return;
}

