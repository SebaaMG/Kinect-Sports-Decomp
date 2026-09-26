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
extern V16 loadVectorLeftIndexed128();
extern V16 vectorAddFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82D523B8(undefined8 param_1,int param_2)

{
  undefined4 *puVar1;
  float *pfVar2;
  undefined8 in_r0;
  undefined1 in_vs32 [16];
  undefined1 in_vs42 [16];
  undefined1 auVar3 [16];
  undefined1 in_vs45 [16];
  float in_register_00010080;
  float in_register_00010084;
  float in_register_00010088;
  float in_vr8;
  float in_register_00010090;
  float in_register_00010094;
  float in_register_00010098;
  float in_vr9;
  undefined4 in_register_000100c0;
  undefined4 in_register_000100c4;
  undefined4 in_register_000100c8;
  undefined4 in_vr12;{ V16 _vt0 = vectorAddFloatingPoint(in_vs45,in_vs32); memcpy(auVar3, &_vt0, 16); }
  puVar1 = (undefined4 *)((int)in_r0 + param_2 & 0xfffffff0);
  *puVar1 = in_register_000100c0;
  puVar1[1] = in_register_000100c4;
  puVar1[2] = in_register_000100c8;
  puVar1[3] = in_vr12;
  loadVectorLeftIndexed128(in_r0,0xffffffff82015be0);
  vectorAddFloatingPoint(auVar3,in_vs42);
  pfVar2 = (float *)((int)in_r0 + param_2 & 0xfffffff0);
  *pfVar2 = in_register_00010090 * in_register_00010080;
  pfVar2[1] = in_register_00010094 * in_register_00010084;
  pfVar2[2] = in_register_00010098 * in_register_00010088;
  pfVar2[3] = in_vr9 * in_vr8;
  return;
}

