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
extern V16 vectorMergeHighWord();
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82CE5088(int param_1)

{
  undefined4 *puVar1;
  int in_r0;
  undefined1 in_vs32 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 in_vs38 [16];
  undefined1 in_vs39 [16];
  undefined1 in_vs40 [16];
  undefined1 in_vs44 [16];
  undefined4 in_register_00010030;
  undefined4 in_register_00010034;
  undefined4 in_register_00010038;
  undefined4 in_vr3;
  
  vectorSubtractFloatingPoint(in_vs32,in_vs44);{ V16 _vt0 = vectorMergeHighWord(in_vs40,in_vs32); memcpy(auVar3, &_vt0, 16); }{ V16 _vt1 = vectorMergeHighWord(in_vs38,in_vs39); memcpy(auVar2, &_vt1, 16); }
  vectorMergeHighWord(auVar2,auVar3);
  puVar1 = (undefined4 *)(in_r0 + param_1 & 0xfffffff0);
  *puVar1 = in_register_00010030;
  puVar1[1] = in_register_00010034;
  puVar1[2] = in_register_00010038;
  puVar1[3] = in_vr3;
  return;
}

