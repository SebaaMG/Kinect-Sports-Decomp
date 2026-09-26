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
extern int fn_827F05E0();


void fn_827F08E8(int param_1)

{
  ushort uVar1;
  char cVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)*(ushort *)(param_1 + 0xe8);
  if (uVar3 == 0) {
    *(undefined4 *)(param_1 + 0xf0) = 0xffff;
  }
  else {
    do {
      uVar3 = uVar3 - 1;
      if ((longlong)uVar3 < 0) goto LAB_827f0948;
      cVar2 = fn_827F05E0(param_1,uVar3 & 0xffff);
    } while (cVar2 != '\0');
    *(int *)(param_1 + 0xf0) = (int)uVar3;
  }
LAB_827f0948:
  uVar1 = *(ushort *)(param_1 + 0xea);
  *(ushort *)(param_1 + 0xea) = uVar1 | 2;
  *(ushort *)(param_1 + 0xea) = uVar1 & 0xfffe | 2;
  return;
}

