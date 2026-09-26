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


undefined4 * fn_82B69840(undefined8 param_1,code *param_2,int param_3,code *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int aiStack_50 [20];
  
  if (param_2 == (code *)0x0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d69d8,0xffffffff820d9128,0x69);
  }
  if (param_3 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d69cc,0xffffffff820d9128,0x6a);
  }
  if (param_4 == (code *)0x0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9114,0xffffffff820d9128,0x6b);
  }
  puVar1 = (undefined4 *)(*param_2)(param_1,0x38);
  if (puVar1 == (undefined4 *)0x0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9110,0xffffffff820d9128,0x71);
  }
  else {
    *puVar1 = (int)param_1;
    puVar1[1] = param_3;
    puVar3 = (undefined4 *)0x8316101c;
    lVar2 = 0xc;
    puVar4 = puVar1 + 2;
    do {
      *puVar4 = puVar3[1];
      puVar3 = puVar3 + 2;
      (*param_4)(param_1,*puVar3,puVar4);
      lVar2 = lVar2 + -1;
      puVar4 = puVar4 + 1;
    } while (lVar2 != 0);
    aiStack_50[0] = 0;
    (*param_4)(param_1,0xffffffff820d90f0,aiStack_50);
    if (aiStack_50[0] == 0) {
      puVar1[2] = 0;
    }
  }
  return puVar1;
}

