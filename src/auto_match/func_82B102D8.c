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
extern int fn_82B0FD38();


void fn_82B102D8(undefined8 param_1,int *param_2)

{
  uint uVar1;
  uint *puVar2;
  
  while( true ) {
    fn_82B0FD38(param_1,param_2);
    if ((param_2[2] & 0x3f80U) == 0x3700) {
      for (puVar2 = (uint *)*param_2; puVar2 != (uint *)0x0; puVar2 = (uint *)puVar2[1]) {
        if ((((*puVar2 & 0xe000000) != 0) && ((*(uint *)(puVar2[3] + 8) >> 0x17 & 1) == 0)) &&
           ((*(uint *)(puVar2[3] + 8) >> 0x18 & 1) != 0)) {
          fn_82B0FD38(param_1);
        }
      }
      return;
    }
    puVar2 = (uint *)param_2[1];
    while( true ) {
      if (puVar2 == (uint *)0x0) {
        return;
      }
      param_2 = (int *)puVar2[4];
      if (((param_2 != (int *)0x0) && ((*puVar2 & 0xe000000) != 0)) &&
         (uVar1 = param_2[2], (uVar1 & 0x3f80) == 0x3700)) break;
      puVar2 = (uint *)puVar2[2];
    }
    if ((uVar1 >> 0x17 & 1) != 0) break;
    if ((uVar1 >> 0x18 & 1) == 0) {
      return;
    }
  }
  return;
}

