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
extern int fn_828D45F8();
extern int fn_828D47D0();
extern int fn_828E0DE0();


void fn_828E1490(int param_1)

{
  undefined8 uVar1;
  int iVar2;
  char cVar4;
  int *piVar3;
  double dVar5;
  
  uVar1 = fn_828D45F8();
  iVar2 = fn_828D47D0(uVar1,3,0);
  if (iVar2 != 0) {
    uVar1 = fn_828D45F8(param_1);
    iVar2 = fn_828D47D0(uVar1,4,0);
    if (iVar2 != 0) {
      *(undefined1 *)(param_1 + 0x28) = 1;
    }
  }
  cVar4 = fn_828ACCE8(*(undefined4 *)(param_1 + 0x18));
  if (cVar4 == '\0') {
    cVar4 = fn_828ACC40(*(undefined4 *)(param_1 + 0x18));
    if (cVar4 != '\0') {
      fn_828E0DE0(param_1,0);
    }
  }
  else if (*(int *)(param_1 + 0xc) != 6) {
    piVar3 = (int *)fn_825089A0();
    dVar5 = (double)(**(code **)(*piVar3 + 8))();
    *(float *)(param_1 + 0x10) = (float)dVar5;
    *(undefined4 *)(param_1 + 0xc) = 6;
    return;
  }
  return;
}

