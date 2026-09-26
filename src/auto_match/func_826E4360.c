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
extern int fn_8267BE38();
extern int fn_8267C4F0();


void fn_826E4360(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)(**(code **)(*(int *)(*(int *)(param_1 + 0x14) + 8) + 0xc))
                            (*(int *)(param_1 + 0x14) + 8,0x17);
  if (piVar2 != (int *)0x0) {
    RtlEnterCriticalSection(param_1 + 0x24);
    while( true ) {
      piVar1 = *(int **)(param_1 + 0x20);
      if (piVar1 == (int *)(param_1 + 0x1c)) break;
      *(int *)(*piVar1 + 4) = piVar1[1];
      *(int *)piVar1[1] = *piVar1;
      (**(code **)(*piVar2 + 8))(piVar2,piVar1[2]);
      fn_8267BE38(piVar1);
    }
    RtlLeaveCriticalSection(param_1 + 0x24);
    fn_8267C4F0(piVar2);
  }
  return;
}

