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


void fn_82CF6B70(int *param_1,int param_2,longlong param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if ((int)param_4 < 0x2001) {
    if (0 < (int)param_3) {
      puVar2 = (undefined4 *)(param_2 + -4);
      do {
        uVar1 = (**(code **)(*param_1 + 4))(param_1,param_4);
        param_3 = param_3 + -1;
        puVar2 = puVar2 + 1;
        *puVar2 = uVar1;
      } while (param_3 != 0);
    }
  }
  else {
    (**(code **)(*(int *)param_1[1] + 0x18))();
  }
  return;
}

