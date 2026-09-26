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
extern int fn_8245B1F0();
extern int fn_82A1DD38();


undefined8 fn_8245B168(int param_1,undefined8 param_2,longlong param_3)

{
  uint *puVar1;
  undefined8 uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar2 = 0xffffffff80004005;
  }
  else {
    iVar3 = fn_8245B1F0(param_1);
    if (iVar3 != 0) {
      puVar1 = *(uint **)(param_1 + 0x20);
      if (((ulonglong)puVar1[2] + param_3 & 0xffffffff) <= (ulonglong)puVar1[1]) {
        fn_82A1DD38((ulonglong)*puVar1 + (ulonglong)puVar1[2],param_2,param_3);
        puVar1[2] = (int)param_3 + puVar1[2];
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}

