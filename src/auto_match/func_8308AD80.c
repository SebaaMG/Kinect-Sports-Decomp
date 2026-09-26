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
extern unsigned int fStack_34;
extern unsigned int fStack_38;
extern unsigned int fStack_3c;
extern unsigned int fStack_40;
extern unsigned int fStack_44;
extern unsigned int fStack_48;
extern unsigned int iStack_24;
extern unsigned int iStack_28;
extern unsigned int iStack_2c;
extern unsigned int iStack_30;
extern unsigned int uStack_50;
extern V16 vectorAddFloatingPoint();
extern V16 vectorMaximumFloatingPoint();
extern V16 vectorMinimumFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_8308AD80(int *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  int in_r0;
  undefined1 in_vs32 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 in_vs37 [16];
  undefined1 in_vs38 [16];
  undefined1 in_vs39 [16];
  undefined1 in_vs42 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  undefined4 in_register_00010020;
  undefined4 in_register_00010024;
  undefined4 in_register_00010028;
  undefined4 in_vr2;
  undefined8 uStack_50;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  vectorAddFloatingPoint(in_vs32,in_vs45);
  vectorAddFloatingPoint(in_vs42,in_vs44);
  pcVar1 = *(code **)(*param_1 + 0x14);{ V16 _vt0 = vectorMinimumFloatingPoint(in_vs38,in_vs39); memcpy(auVar4, &_vt0, 16); }{ V16 _vt1 = vectorMinimumFloatingPoint(in_vs37,in_vs39); memcpy(auVar3, &_vt1, 16); }
  vectorMaximumFloatingPoint(auVar4,in_vs32);
  vectorMaximumFloatingPoint(auVar3,in_vs32);
  puVar2 = (undefined4 *)((int)&fStack_40 + in_r0 & 0xfffffff0);
  *puVar2 = in_register_00010020;
  puVar2[1] = in_register_00010024;
  puVar2[2] = in_register_00010028;
  puVar2[3] = in_vr2;
  fStack_34 = (float)(int)fStack_34;
  puVar2 = (undefined4 *)((int)&uStack_50 + in_r0 & 0xfffffff0);
  *puVar2 = in_register_00010010;
  puVar2[1] = in_register_00010014;
  puVar2[2] = in_register_00010018;
  puVar2[3] = in_vr1;
  iStack_2c = (int)(((U64)(uStack_50) >> 32) & 0xFFFFFFFF);
  iStack_30 = (int)(((U64)(uStack_50) >> 0) & 0xFFFFFFFF);
  fStack_38 = (float)(int)fStack_38;
  iStack_28 = (int)fStack_48;
  iStack_24 = (int)fStack_44;
  fStack_40 = (float)(int)fStack_40;
  uStack_50 = (longlong)(int)fStack_40;
  fStack_3c = (float)(int)fStack_3c;
  (*pcVar1)(param_1,param_2,&fStack_40);
  return;
}

