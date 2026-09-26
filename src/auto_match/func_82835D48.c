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
extern unsigned int *auStack_140;
extern int fn_828358A8();
extern int fn_828358F8();
extern int fn_828359F8();
extern int fn_82F64020();
extern int fn_82F6D000();


void fn_82835D48(int param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  longlong param_5,char param_6,undefined8 param_7)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined1 auStack_140 [320];
  
  lVar1 = fn_828358F8(param_1,param_3);
  auStack_140[0] = 0;
  uVar2 = fn_828358A8(param_1);
  if (param_6 == '\0') {
    fn_828359F8(param_1,auStack_140,param_5);
  }
  if ((int)param_7 < 0) {
    uVar3 = 0xffffffff8201f2e0;
  }
  else {
    uVar3 = 0xffffffff8201f2d8;
    uVar2 = param_7;
  }
  fn_82F64020(auStack_140,0x100,uVar3,auStack_140,uVar2);
  fn_82F6D000(param_2,0xffffffff8201f2e8,auStack_140);
  piVar4 = *(int **)(param_1 + 8);
  if (piVar4 != (int *)0x0) {
    do {
      (**(code **)(*piVar4 + 4))
                (piVar4,param_2,param_1,lVar1 + param_4,param_5 + 1,0,0xffffffffffffffff);
      piVar4 = (int *)piVar4[3];
    } while (piVar4 != (int *)0x0);
  }
  return;
}

