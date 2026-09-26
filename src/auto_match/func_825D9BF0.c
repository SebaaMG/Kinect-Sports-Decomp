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
extern int fn_8252BAB8();
extern int fn_8252D240();


undefined8 fn_825D9BF0(int param_1,longlong param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = 0;
  iVar1 = fn_8252BAB8(param_1,param_2 + 0x5bc,0,0);
  if ((iVar1 != 0) && (iVar1 = fn_8252D240(param_1,param_2 + 0x5c0,0), iVar1 != 0)) {
    puVar2 = (undefined4 *)(param_1 + 0xb58);
    lVar4 = 4;
    do {
      puVar2 = puVar2 + 2;
      *puVar2 = 0xffffffff;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    uVar3 = 1;
  }
  return uVar3;
}

