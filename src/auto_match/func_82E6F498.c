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


undefined8 fn_82E6F498(int param_1,undefined8 param_2,uint *param_3)

{
  undefined8 uVar1;
  int aiStack_20 [2];
  
  if (param_3 == (uint *)0x0) {
    uVar1 = 0xffffffff80004003;
  }
  else {
    uVar1 = (**(code **)(**(int **)(param_1 + 0x2c) + 0x1c))();
    if (-1 < (int)uVar1) {
      aiStack_20[0] = 0;
      uVar1 = (**(code **)(**(int **)(param_1 + 0x2c) + 0x24))
                        (*(int **)(param_1 + 0x2c),param_3,4,aiStack_20);
      if (-1 < (int)uVar1) {
        if (aiStack_20[0] == 4) {
          *param_3 = (uint)(byte)*param_3 << 0x18 | (uint)*(byte *)((int)param_3 + 2) << 0x10 |
                     (uint)*(byte *)((int)param_3 + 1) << 8 | (uint)*(byte *)param_3;
        }
        else {
          uVar1 = 0xffffffffc00d36bb;
        }
      }
    }
  }
  return uVar1;
}

