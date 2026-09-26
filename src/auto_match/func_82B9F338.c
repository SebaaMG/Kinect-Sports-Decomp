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
extern int fn_82AB15D0();


undefined8 fn_82B9F338(int *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  
  puVar3 = (uint *)0x0;
  if (param_1 == (int *)0x0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820dddb8,0xffffffff820dddc0,0x2ab);
  }
  puVar1 = (uint *)*param_1;
  puVar2 = param_3;
  if (puVar1 != (uint *)0x0) {
    while (puVar2 != (uint *)0x0) {
      if (*param_2 == *puVar1) {
        puVar3 = (uint *)((int)puVar3 + 1);
        puVar1 = (uint *)puVar1[3];
        param_2 = param_2 + 1;
        puVar2 = puVar1;
        if (puVar3 == param_3) {
          *param_4 = (uint)puVar1;
          return 1;
        }
      }
      else if (*param_2 < *puVar1) {
        puVar1 = (uint *)puVar1[1];
        puVar2 = puVar1;
      }
      else {
        puVar1 = (uint *)puVar1[2];
        puVar2 = puVar1;
      }
    }
  }
  return 0;
}

