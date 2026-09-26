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
extern int fn_828A3290();


undefined1 * fn_828A3410(undefined1 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar4;
  longlong lVar3;
  
  if (*(int *)(param_2 + 0x250) == 0) {
    *param_1 = 0;
    *(undefined4 *)(param_1 + 4) = 0;
  }
  else {
    puVar2 = (undefined4 *)fn_828A3290(param_2 + 0x240,0);
    uVar1 = *puVar2;
    if ((ulonglong)*(uint *)(param_2 + 0x250) != 0) {
      uVar4 = *(int *)(param_2 + 0x24c) + 1;
      *(uint *)(param_2 + 0x24c) = uVar4;
      if ((uint)(*(int *)(param_2 + 0x248) << 2) <= uVar4) {
        *(undefined4 *)(param_2 + 0x24c) = 0;
      }
      lVar3 = (ulonglong)*(uint *)(param_2 + 0x250) - 1;
      *(int *)(param_2 + 0x250) = (int)lVar3;
      if (lVar3 == 0) {
        *(undefined4 *)(param_2 + 0x24c) = 0;
      }
    }
    *(undefined4 *)(param_1 + 4) = uVar1;
    *param_1 = 1;
  }
  return param_1;
}

