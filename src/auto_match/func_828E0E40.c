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
extern int fn_828ACC40();
extern int fn_828ACCE8();
extern int fn_828AE818();


void fn_828E0E40(int param_1)

{
  char cVar2;
  int *piVar1;
  double dVar3;
  
  cVar2 = fn_828ACC40(*(undefined4 *)(param_1 + 0x18));
  if (cVar2 == '\0') {
    cVar2 = fn_828ACCE8(*(undefined4 *)(param_1 + 0x18));
    if (cVar2 != '\0') {
      fn_828AE818(*(undefined4 *)(param_1 + 0x18),5);
    }
  }
  else if (*(int *)(param_1 + 0xc) != 0) {
    piVar1 = (int *)fn_825089A0();
    dVar3 = (double)(**(code **)(*piVar1 + 8))();
    *(float *)(param_1 + 0x10) = (float)dVar3;
    *(undefined4 *)(param_1 + 0xc) = 0;
    return;
  }
  return;
}

