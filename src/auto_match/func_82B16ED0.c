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


uint fn_82B16ED0(uint param_1,uint param_2)

{
  ushort uVar1;
  
  if ((*(uint *)(param_1 + 8) & 0x3f80) == 16000) {
    if (((~(ulonglong)*(uint *)(*(int *)(*(int *)(param_1 & 0xfffff000) + 0x94) + 0x28) & 0xffffffff
         ) >> 0xe & 1) == 0) {
      return 0;
    }
    return (*(uint *)(param_1 + 0x14) >> 2 & 0xff) >> ((param_2 & 0x1f) << 1) & 3;
  }
  if ((*(uint *)(param_1 + 8) & 0x1000000) != 0) {
    return 0;
  }
  uVar1 = *(ushort *)(param_1 + 0xe) >> ((param_2 & 0xf) << 2);
  if ((uVar1 & 4) == 0) {
    return 0;
  }
  return ((uVar1 & 2) == 0 ^ 1) + 1;
}

