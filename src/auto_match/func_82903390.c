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


undefined8 fn_82903390(int param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (param_3 != 0) {
    do {
      if (*param_2 < *(uint *)(*(int *)(param_1 + 8) + 8)) {
        iVar2 = *(int *)(*param_2 * 4 + *(int *)(*(int *)(param_1 + 8) + 0x14));
      }
      else {
        iVar2 = 0;
      }
      if ((iVar2 == 0) || (*(int *)(iVar2 + 0x68) == 0)) {
        return 0;
      }
      uVar1 = uVar1 + 1;
      param_2 = param_2 + 1;
    } while (uVar1 < param_3);
  }
  return 1;
}

