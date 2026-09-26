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
extern int fn_82265DE0();


void fn_82267CC8(undefined4 *param_1,ulonglong param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  param_1[0x12] = 1;
  if (param_1[0xf] != 0) {
    puVar3 = (undefined4 *)*param_1;
    for (puVar1 = (undefined4 *)*puVar3; puVar1 != puVar3; puVar1 = (undefined4 *)*puVar1) {
      if ((ulonglong)*(uint *)(puVar1[2] + 0x40) == (param_2 & 0xffffffff)) {
        fn_82265DE0(puVar1[2],param_3);
        piVar2 = (int *)param_1[8];
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 4))(piVar2,param_2,param_3);
        }
        break;
      }
      puVar3 = (undefined4 *)*param_1;
    }
  }
  param_1[0x12] = 0;
  return;
}

