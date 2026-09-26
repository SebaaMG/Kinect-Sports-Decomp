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
extern int fn_82A1E968();
extern int fn_83014128();


undefined8 fn_82FA7EB0(longlong param_1,undefined8 param_2)

{
  undefined4 *puVar2;
  undefined8 uVar1;
  longlong lVar3;
  
  lVar3 = param_1 + 0xc;
  RtlEnterCriticalSection(lVar3);
  puVar2 = (undefined4 *)fn_83014128(param_1,param_2);
  if (puVar2 == (undefined4 *)0x0) {
    RtlLeaveCriticalSection(lVar3);
    uVar1 = 2;
  }
  else {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    fn_82A1E968(puVar2 + 6);
    RtlLeaveCriticalSection(lVar3);
    uVar1 = 1;
  }
  return uVar1;
}

