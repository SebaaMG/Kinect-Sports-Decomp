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


undefined8 fn_82C295B0(int param_1,ulonglong param_2,ulonglong param_3)

{
  int *piVar1;
  uint uVar2;
  ulonglong uVar3;
  
  piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x2c) + 0x10) + 8);
  do {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    uVar2 = *(uint *)(*piVar1 + 4);
    uVar3 = *(ulonglong *)(*piVar1 + 8);
    if (uVar2 != 0) {
      if (uVar3 < param_2) {
        if (param_2 < uVar2 + uVar3) goto code_r0x82c29608;
      }
      else if (uVar3 < (param_3 & 0xffffffff) + param_2) {
code_r0x82c29608:
        piVar1[1] = piVar1[1] + 1;
      }
    }
    if (uVar2 + uVar3 < param_2) {
      return 0;
    }
    piVar1 = (int *)piVar1[2];
  } while( true );
}

