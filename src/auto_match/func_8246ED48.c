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
extern int fn_822315A0();
extern int fn_82356F98();
extern int fn_82365BD8();
extern int fn_823F2E20();
extern int fn_8246E850();
extern int fn_82471588();
extern int fn_8265C9E0();
extern unsigned int iStack_1c;
extern unsigned int iStack_20;


/* WARNING: Type propagation algorithm not settling */

void fn_8246ED48(longlong param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  int aiStack_30 [4];
  int iStack_20;
  int iStack_1c;
  
  aiStack_30[0] = (int)param_1;
  iStack_20 = aiStack_30[0] + 0x400;
  aiStack_30[1] = 1;
  aiStack_30[2] = 1;
  uVar1 = fn_8265C9E0(0x150);
  if ((uVar1 & 0xffffffff) == 0) {
    iStack_1c = 0;
  }
  else {
    iStack_1c = fn_82471588(uVar1,param_1 + 0x358,&iStack_20,aiStack_30 + 2,aiStack_30 + 1,
                                  aiStack_30);
  }
  iStack_20 = iStack_1c + 0x10;
  uVar2 = fn_82365BD8(aiStack_30 + 2,&iStack_20);
  fn_8246E850(param_1,uVar2,0xffffffff821bc490,0xffffffff821bc47c,param_1 + 0x378,3);
  fn_82356F98(aiStack_30 + 2);
  fn_823F2E20(&iStack_20,aiStack_30 + 2);
  if (aiStack_30[3] != 0) {
    fn_822315A0();
  }
  if (iStack_1c != 0) {
    fn_822315A0();
  }
  return;
}

