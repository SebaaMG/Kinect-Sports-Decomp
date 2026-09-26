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
extern int fn_82AB15D0();
extern int fn_82F68CC0();


undefined8 fn_82AB7070(undefined4 *param_1,uint param_2,undefined8 param_3)

{
  uint *puVar2;
  undefined8 uVar1;
  longlong lVar3;
  
  lVar3 = ((ulonglong)param_2 & 0x3fffffff) * 4;
  if (param_1 == (undefined4 *)0x0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d683c,0xffffffff820d6be8,0x226);
  }
  puVar2 = (uint *)(*(code *)param_1[1])(*param_1,lVar3 + 8);
  param_1[0xb] = puVar2;
  if (puVar2 == (uint *)0x0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6cd8,0xffffffff820d6be8,0x22d);
    uVar1 = 0x10;
  }
  else {
    *puVar2 = param_2;
    ((undefined4 *)param_1[0xb])[1] = *(undefined4 *)param_1[0xb];
    if ((ulonglong)*(uint *)param_1[0xb] != ((ulonglong)*(uint *)param_1[0xb] / 3) * 3) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6cac,0xffffffff820d6be8,0x233);
    }
    if (0x3fff < *(uint *)param_1[0xb]) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6c84,0xffffffff820d6be8,0x234);
    }
    fn_82F68CC0((ulonglong)(uint)param_1[0xb] + 8,param_3,lVar3);
    uVar1 = 0;
  }
  return uVar1;
}

