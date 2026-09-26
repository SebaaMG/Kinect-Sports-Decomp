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
extern int fn_828ACCE8();
extern int fn_828AD740();
extern int fn_828B00F8();


void fn_828B0230(int param_1)

{
  char cVar3;
  int *piVar2;
  ulonglong uVar1;
  
  if (((*(char *)(param_1 + 0x18) != '\0') &&
      (cVar3 = fn_828ACCE8(*(undefined4 *)(param_1 + 8)), cVar3 != '\0')) &&
     (cVar3 = fn_828AD740(*(undefined4 *)(param_1 + 8)), cVar3 == '\0')) {
    piVar2 = (int *)fn_825089A0();
    uVar1 = (**(code **)(*piVar2 + 0xc))();
    if (900000 < ((uVar1 & 0xffffffff) - (*(ulonglong *)(param_1 + 0x10) & 0xffffffff) & 0xffffffff)
       ) {
      fn_828B00F8(param_1,0);
    }
  }
  return;
}

