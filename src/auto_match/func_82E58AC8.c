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
extern int fn_82E589E0();


undefined4 * fn_82E58AC8(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *apuStack_20 [2];
  
  iVar1 = fn_82E589E0(param_1,apuStack_20);
  if (iVar1 < 0) {
    apuStack_20[0] = (undefined4 *)0x0;
  }
  else {
    *apuStack_20[0] = param_2;
    apuStack_20[0][1] = *(undefined4 *)(param_1 + 0xe0);
    apuStack_20[0][2] = 0;
    if (*(int *)(param_1 + 0xe0) == 0) {
      *(undefined4 **)(param_1 + 0xe4) = apuStack_20[0];
    }
    else {
      *(undefined4 **)(*(int *)(param_1 + 0xe0) + 8) = apuStack_20[0];
    }
    *(undefined4 **)(param_1 + 0xe0) = apuStack_20[0];
    *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + 1;
  }
  return apuStack_20[0];
}

