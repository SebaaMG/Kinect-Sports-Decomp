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
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern int fn_82681728();
extern int fn_826944C8();
extern int fn_826961B0();
extern int fn_82696330();
extern int fn_826C1BA0();


void fn_8273CA78(longlong param_1,int param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_40 [4];
  int aiStack_3c [3];
  undefined1 auStack_30 [48];
  
  auStack_40[0] = 0;
  fn_82681728(aiStack_3c,(ulonglong)*(uint *)(param_2 + 0x78) + 0x254,0xffffffff82012158);
  uVar1 = fn_826961B0(auStack_30,param_3);
  fn_826C1BA0(param_1 + 0x10,param_2,aiStack_3c,uVar1,auStack_40);
  lVar2 = (ulonglong)*(uint *)(aiStack_3c[0] + 8) - 1;
  *(int *)(aiStack_3c[0] + 8) = (int)lVar2;
  if (lVar2 == 0) {
    fn_826944C8(aiStack_3c[0]);
  }
  fn_82696330(auStack_30);
  return;
}

