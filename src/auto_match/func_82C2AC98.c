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


undefined8 fn_82C2AC98(int param_1,ulonglong param_2,undefined4 *param_3,undefined4 *param_4)

{
  int *piVar1;
  ulonglong uVar2;
  
  *param_4 = 0;
  *param_3 = 0;
  piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x2c) + 0x10) + 4);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  do {
    uVar2 = *(ulonglong *)(*piVar1 + 8);
    if (uVar2 <= param_2) {
      if (param_2 < *(uint *)(*piVar1 + 4) + uVar2) {
        *param_4 = 1;
        *param_3 = piVar1;
        return 0;
      }
      if (uVar2 < param_2) {
        return 0;
      }
    }
    piVar1 = (int *)piVar1[1];
    if (piVar1 == (int *)0x0) {
      return 0;
    }
  } while( true );
}

