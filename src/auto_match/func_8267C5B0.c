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
extern unsigned int *auStack_20;
extern int fn_8267BED0();


undefined4 fn_8267C5B0(int param_1)

{
  undefined4 *puVar1;
  undefined4 auStack_20 [4];
  
  if (*(int *)(param_1 + 8) == 0) {
    auStack_20[0] = 2;
    puVar1 = (undefined4 *)fn_8267BED0(param_1,8,auStack_20);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1[1] = param_1;
      *puVar1 = 1;
    }
    *(undefined4 **)(param_1 + 8) = puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      return 0;
    }
  }
  **(int **)(param_1 + 8) = **(int **)(param_1 + 8) + 1;
  return *(undefined4 *)(param_1 + 8);
}

