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
extern unsigned int *auStack_a0;
extern int fn_82266DD8();
extern int fn_82286EA8();
extern int fn_822886B0();
extern int fn_8228A540();
extern int fn_8228A7F8();
extern int fn_8228AF60();
extern int fn_8265C9E0();
extern int fn_82A81CC0();


void fn_82289580(undefined4 *param_1)

{
  char *pcVar2;
  char cVar4;
  ulonglong uVar1;
  undefined4 uVar3;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_a0 [144];
  
  if (param_1[0x184] != 0) {
    fn_82286EA8();
  }
  pcVar2 = strstr((char *)(param_1[0x47c] + 0x234),"boxing");
  if (pcVar2 == (char *)0x0) {
    uVar5 = 0;
  }
  else {
    cVar4 = fn_82A81CC0((ulonglong)(uint)param_1[0x47c] + 0x844);
    if (cVar4 != '\x01') {
      uVar6 = 1;
      uVar5 = 0;
      goto LAB_82289600;
    }
    uVar5 = 1;
  }
  uVar6 = 0;
LAB_82289600:
  fn_8228A7F8(auStack_a0,uVar5,uVar6);
  uVar1 = fn_8265C9E0(0x5e0);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = fn_82266DD8(uVar1,param_1 + 0xb8,*param_1,param_1[0x1a6],auStack_a0);
  }
  param_1[0x184] = uVar3;
  fn_822886B0(param_1);
  fn_8228A540(param_1,0xffffffff821a94e4);
  fn_8228AF60(param_1,0xffffffff82196582);
  return;
}

