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


void fn_82886F60(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = *(uint **)(param_2 * 4 + param_1);
  uVar1 = puVar2[1];
  if (uVar1 < *puVar2) {
    if (param_3 <= uVar1) {
      return;
    }
  }
  else if (uVar1 < param_3) goto LAB_82886f94;
  if (*puVar2 <= param_3) {
    return;
  }
LAB_82886f94:
  puVar2[1] = param_3;
  return;
}

