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
extern unsigned int *lbl_8327F874;


undefined8 fn_82536358(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = (int *)*lbl_8327F874;
  while( true ) {
    if (piVar2 == (int *)lbl_8327F874[1]) {
      return 0;
    }
    piVar1 = *(int **)(*piVar2 + 0x28);
    for (piVar3 = *(int **)(*piVar2 + 0x24); (piVar3 != piVar1 && (*piVar3 != param_1));
        piVar3 = piVar3 + 1) {
    }
    if (piVar3 != piVar1) break;
    piVar2 = piVar2 + 1;
  }
  return 1;
}

