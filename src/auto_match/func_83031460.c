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
#define _iStack00000020 ((*(U64*)&iStack00000020))
#define _iStack00000028 ((*(U64*)&iStack00000028))
extern int fn_83031220();
extern unsigned int iStack00000020;
extern unsigned int iStack00000024;
extern unsigned int iStack00000028;


int * fn_83031460(int *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  int *piVar2;
  int iStack00000020;
  int iStack00000024;
  int iStack00000028;
  
  param_1 = (int *)*param_1;
  do {
    if (param_1 == (int *)0x0) {
      piVar2 = (int *)0x0;
LAB_830314a8:
      _iStack00000020 = param_3;
      _iStack00000028 = param_4;
      piVar1 = (int *)fn_83031220();
      if (piVar1 != (int *)0x0) {
        piVar2 = piVar1 + 1;
        *piVar1 = param_2;
        piVar1[1] = iStack00000020;
        piVar1[2] = iStack00000024;
        piVar1[3] = iStack00000028;
      }
      return piVar2;
    }
    if (param_1[1] == param_2) {
      piVar2 = param_1 + 2;
      if (param_1 != (int *)0xfffffff8) {
        iStack00000020 = (int)((ulonglong)param_3 >> 0x20);
        iStack00000024 = (int)param_3;
        iStack00000028 = (int)((ulonglong)param_4 >> 0x20);
        *piVar2 = iStack00000020;
        param_1[3] = iStack00000024;
        param_1[4] = iStack00000028;
        return piVar2;
      }
      goto LAB_830314a8;
    }
    param_1 = (int *)*param_1;
  } while( true );
}

