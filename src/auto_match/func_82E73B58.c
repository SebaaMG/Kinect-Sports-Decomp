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


undefined8 fn_82E73B58(undefined8 param_1,int *param_2)

{
  int iVar1;
  int *apiStack_20 [2];
  
  if (param_2 == (int *)0x0) {
    return 0xffffffff80070057;
  }
  do {
    apiStack_20[0] = (int *)0x0;
    do {
      iVar1 = (**(code **)(*param_2 + 8))(param_2,apiStack_20);
      if (iVar1 < 0) {
        if (apiStack_20[0] != (int *)0x0) {
          (**(code **)(*apiStack_20[0] + 8))();
        }
        return 0;
      }
    } while (apiStack_20[0] == (int *)0x0);
    (**(code **)(*apiStack_20[0] + 8))();
  } while( true );
}

