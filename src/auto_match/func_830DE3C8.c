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
extern int fn_830DCDB0();
extern int fn_830DD210();
extern V16 vectorRotateLeftIntegerHalfWord();
extern V16 vectorSplatImmediateSignedHalfWord();
extern V16 vectorSubtractSignedHalfWordSaturate();
extern void *memcpy(void *, const void *, unsigned int);


void fn_830DE3C8(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  undefined4 *puVar1;
  int in_r0;
  undefined1 auVar2 [16];
  undefined1 in_vs34 [16];
  undefined4 in_register_00010000;
  undefined4 in_ACC;
  undefined4 in_register_00010008;
  undefined4 in_vr0;
  undefined1 auStack_30 [48];{ V16 _vt0 = vectorSplatImmediateSignedHalfWord(4); memcpy(auVar2, &_vt0, 16); }
  vectorSplatImmediateSignedHalfWord(1);{ V16 _vt1 = vectorRotateLeftIntegerHalfWord(auVar2,auVar2); memcpy(auVar2, &_vt1, 16); }
  vectorSubtractSignedHalfWordSaturate(auVar2,in_vs34);
  puVar1 = (undefined4 *)((uint)(auStack_30 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_00010000;
  puVar1[1] = in_ACC;
  puVar1[2] = in_register_00010008;
  puVar1[3] = in_vr0;
  fn_830DCDB0((param_1 - param_2) + -1,param_2,param_3,(param_5 & 0x7fffffff) * 2 + 3,param_5,0);
  vectorSplatImmediateSignedHalfWord(7);
  fn_830DD210(param_3,param_5,0);
  return;
}

