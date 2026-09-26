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
extern V16 vectorAddFloatingPoint();
extern V16 vectorMaximumFloatingPoint();
extern V16 vectorMinimumFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82D51E20(double param_1,int param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  undefined4 *puVar1;
  int in_r0;
  undefined1 in_vs32 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  undefined4 in_register_00010080;
  undefined4 in_register_00010084;
  undefined4 in_register_00010088;
  undefined4 in_vr8;
  undefined4 in_register_00010090;
  undefined4 in_register_00010094;
  undefined4 in_register_00010098;
  undefined4 in_vr9;
  
  (**(code **)(**(int **)(param_2 + 0x18) + 0x1c))
            ((double)(float)((double)*(float *)(param_2 + 0x20) + param_1));{ V16 _vt0 = vectorAddFloatingPoint(in_vs32,in_vs44); memcpy(auVar3, &_vt0, 16); }{ V16 _vt1 = vectorAddFloatingPoint(in_vs45,in_vs44); memcpy(auVar2, &_vt1, 16); }
  vectorMaximumFloatingPoint(in_vs32,auVar3);
  vectorMinimumFloatingPoint(in_vs45,auVar2);
  puVar1 = (undefined4 *)(param_5 + 0x10U & 0xfffffff0);
  *puVar1 = in_register_00010090;
  puVar1[1] = in_register_00010094;
  puVar1[2] = in_register_00010098;
  puVar1[3] = in_vr9;
  puVar1 = (undefined4 *)(in_r0 + param_5 & 0xfffffff0);
  *puVar1 = in_register_00010080;
  puVar1[1] = in_register_00010084;
  puVar1[2] = in_register_00010088;
  puVar1[3] = in_vr8;
  return;
}

