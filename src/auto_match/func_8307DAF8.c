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
#define _fStack00000020 ((*(U64*)&fStack00000020))
#define _fStack00000028 ((*(U64*)&fStack00000028))
#define _fStack00000030 ((*(U64*)&fStack00000030))
#define _fStack00000038 ((*(U64*)&fStack00000038))
extern unsigned int fStack00000020;
extern unsigned int fStack00000024;
extern unsigned int fStack00000028;
extern unsigned int fStack00000030;
extern unsigned int fStack00000034;
extern unsigned int fStack00000038;
extern int fn_8306EA78();


float * fn_8307DAF8(float *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  float fStack00000020;
  float fStack00000024;
  float fStack00000028;
  float fStack00000030;
  float fStack00000034;
  float fStack00000038;
  
  fStack00000028 = (float)((ulonglong)param_3 >> 0x20);
  fStack00000038 = (float)((ulonglong)param_5 >> 0x20);
  fVar1 = fStack00000028 - fStack00000038;
  _fStack00000020 = param_2;
  _fStack00000028 = param_3;
  _fStack00000030 = param_4;
  _fStack00000038 = param_5;
  dVar2 = (double)fn_8306EA78((double)fVar1);
  dVar3 = (double)fn_8306EA78((double)(fStack00000024 - fStack00000034));
  dVar4 = (double)fn_8306EA78((double)(fStack00000020 - fStack00000030));
  *param_1 = (float)dVar4;
  param_1[1] = (float)dVar3;
  param_1[2] = (float)dVar2;
  return param_1;
}

