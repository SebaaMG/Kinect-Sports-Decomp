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
extern int fn_82EE5E28();
extern int fn_82EE5F60();


undefined8 fn_82E577A0(int param_1,undefined8 param_2,ulonglong param_3)

{
  ushort *puVar1;
  undefined8 uVar2;
  ushort *puVar3;
  longlong lVar4;
  
  if ((param_3 & 0xffffffff) == 0) {
    uVar2 = 0;
  }
  else {
    lVar4 = (param_3 & 0x7fffffff) << 1;
    uVar2 = fn_82EE5F60(param_2,param_1,lVar4);
    if (-1 < (int)uVar2) {
      if ((param_3 & 0xffffffff) != 0) {
        puVar3 = (ushort *)(param_1 + -2);
        do {
          puVar1 = puVar3 + 1;
          puVar3 = puVar3 + 1;
          *puVar3 = *puVar1 << 8 | *puVar1 >> 8;
          param_3 = param_3 - 1;
        } while (param_3 != 0);
      }
      uVar2 = fn_82EE5E28(param_2,lVar4);
    }
  }
  return uVar2;
}

