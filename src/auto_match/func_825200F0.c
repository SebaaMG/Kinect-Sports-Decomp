typedef unsigned char undefined1, byte, undefined, bool;
#define true 1
#define false 0
typedef unsigned short undefined2, ushort, word;
typedef unsigned int undefined4, uint, dword, ulong;
typedef unsigned __int64 undefined8, ulonglong, qword;
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


undefined8 fn_825200F0(undefined8 param_1,uint *param_2)

{
  uint uStack_20;
  uint uStack_1c;
  undefined8 uStack_18;

  uStack_1c = *param_2;
  uStack_20 = uStack_1c >> 0x18;
  if (uStack_1c == 0) {
    uStack_20 = 0x7a;
  }
  uStack_18 = 0;
  FUN_827d9670(param_1,&uStack_1c,&uStack_18,&uStack_20);
  return param_1;
}
