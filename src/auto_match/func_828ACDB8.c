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
extern int fn_825089A0();
extern int fn_828ACD28();


void fn_828ACDB8(int *param_1,int param_2)

{
  undefined8 uVar1;
  int *piVar3;
  undefined8 uVar2;
  double dVar4;
  
  uVar1 = fn_828ACD28();
  param_1[0x2e] = param_2;
  piVar3 = (int *)fn_825089A0();
  dVar4 = (double)(**(code **)(*piVar3 + 8))();
  param_1[0x2f] = (int)(float)dVar4;
  uVar2 = fn_828ACD28(param_1);
  if ((int)uVar1 != (int)uVar2) {
    (**(code **)(*param_1 + 0x1c))(param_1,uVar1,uVar2);
  }
  return;
}

