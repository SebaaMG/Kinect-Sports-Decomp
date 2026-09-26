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
extern int fn_82C008D8();


undefined8 fn_82C0D1C8(int param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  int *apiStack_20 [2];
  
  apiStack_20[0] = (int *)0x0;
  uVar1 = (**(code **)(**(int **)(param_1 + 0x2c) + 0x40))
                    (*(int **)(param_1 + 0x2c),apiStack_20,0,0);
  if (apiStack_20[0] == (int *)0x0) {
    *param_2 = 0;
  }
  else {
    uVar1 = fn_82C008D8(apiStack_20[0],param_2);
    if (apiStack_20[0] != (int *)0x0) {
      (**(code **)(*apiStack_20[0] + 8))(apiStack_20[0]);
    }
  }
  return uVar1;
}

