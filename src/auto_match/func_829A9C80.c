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
#define _uStack00000018 ((*(U64*)&uStack00000018))
extern int fn_82958950();
extern unsigned int uStack00000018;
extern unsigned int uStack0000001c;


undefined8 fn_829A9C80(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  undefined4 uStack00000018;
  undefined4 uStack0000001c;
  
  _uStack00000018 = param_1;
  uVar1 = fn_82958950(param_2,2);
  if (-1 < (int)uVar1) {
    uVar1 = 0;
    *(undefined4 *)(*(int *)(param_2 + 0x114) * 4 + *(int *)(param_2 + 0x110)) = uStack0000001c;
    *(undefined4 *)((*(int *)(param_2 + 0x114) + 1) * 4 + *(int *)(param_2 + 0x110)) =
         uStack00000018;
    *(int *)(param_2 + 0x114) = *(int *)(param_2 + 0x114) + 2;
  }
  return uVar1;
}

