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
extern int fn_82FF5D28();


char fn_8302FEC0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  
  if (param_3 == 0) {
    return '\x1f';
  }
  piVar1 = *(int **)(param_1 + 0xc4);
  cVar2 = '9';
  if (piVar1 != (int *)0x0) {
    while (piVar1[1] != param_2) {
      piVar1 = (int *)*piVar1;
      if (piVar1 == (int *)0x0) {
        return cVar2;
      }
    }
    piVar3 = piVar1 + 2;
    if (piVar3 != (int *)0x0) {
      for (piVar4 = (int *)*piVar3; (piVar4 != (int *)piVar1[3] && (*piVar4 != param_3));
          piVar4 = piVar4 + 1) {
      }
      if ((-(uint)((int *)piVar1[3] != piVar4) & (uint)piVar4) == 0) {
        piVar1 = (int *)fn_82FF5D28(piVar3);
        if (piVar1 != (int *)0x0) {
          *piVar1 = param_3;
        }
        cVar2 = (piVar1 == (int *)0x0) + '\x01';
      }
    }
  }
  return cVar2;
}

