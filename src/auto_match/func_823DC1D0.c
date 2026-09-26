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
extern unsigned int *auStack_10;
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


/* WARNING: Removing unreachable block (ram,0x823dc228) */

undefined8 fn_823DC1D0(int param_1,longlong param_2)

{
  uint uVar1;
  float *pfVar2;
  int in_r0;
  undefined1 in_vs32 [16];
  undefined1 auVar3 [16];
  undefined1 in_vs33 [16];
  float fVar4;
  float fVar5;
  undefined1 auStack_10 [16];
  
  uVar1 = in_r0 + param_1 & 0xfffffff0;
  fVar4 = *(float *)(uVar1 + 4);
  fVar5 = *(float *)(uVar1 + 8);{ V16 _vt0 = vectorSubtractFloatingPoint(in_vs33,in_vs32); memcpy(auVar3, &_vt0, 16); }
  fVar4 = fVar4 * fVar4 + 0.0 + fVar5 * fVar5;
  pfVar2 = (float *)((uint)(auStack_10 + in_r0) & 0xfffffff0);
  *pfVar2 = fVar4;
  pfVar2[1] = fVar4;
  pfVar2[2] = fVar4;
  pfVar2[3] = fVar4;
  if (1 < (uint)param_2) {
    param_2 = param_2 + -1;
    do {
      param_1 = param_1 + 0x10;
      uVar1 = in_r0 + param_1 & 0xfffffff0;
      fVar4 = *(float *)(uVar1 + 4);
      fVar5 = *(float *)(uVar1 + 8);{ V16 _vt1 = vectorSubtractFloatingPoint(in_vs33,auVar3); memcpy(auVar3, &_vt1, 16); }
      fVar4 = fVar4 * fVar4 + 0.0 + fVar5 * fVar5;
      pfVar2 = (float *)((uint)(auStack_10 + in_r0) & 0xfffffff0);
      *pfVar2 = fVar4;
      pfVar2[1] = fVar4;
      pfVar2[2] = fVar4;
      pfVar2[3] = fVar4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
    return 0;
  }
  return 0;
}

