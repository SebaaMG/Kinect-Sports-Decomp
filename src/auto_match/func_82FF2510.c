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
extern int fn_82FF2248();
extern int fn_8301B248();


float * fn_82FF2510(double param_1,int param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  float *pfVar2;
  uint auStack_30 [12];
  
  fn_82FF2248(auStack_30,param_2,param_3);
  pfVar2 = (float *)(-(uint)(*(uint *)(param_2 + 4) != auStack_30[0]) & auStack_30[0] + 8);
  if (pfVar2 == (float *)0x0) {
    puVar1 = (undefined8 *)fn_8301B248(param_2);
    if (puVar1 != (undefined8 *)0x0) {
      *(float *)(puVar1 + 1) = (float)param_1;
      pfVar2 = (float *)(puVar1 + 1);
      *puVar1 = param_3;
    }
  }
  else {
    *pfVar2 = (float)param_1;
  }
  return pfVar2;
}

