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
extern unsigned int lbl_8323A960;


void fn_82CE44A8(undefined4 param_1)

{
  undefined4 *puVar1;
  short sVar2;
  
  puVar1 = lbl_8323A960;
  if ((lbl_8323A960 != (undefined4 *)0x0) && (*(short *)(lbl_8323A960 + 1) != 0)) {
    sVar2 = *(short *)((int)lbl_8323A960 + 6) + -1;
    *(short *)((int)lbl_8323A960 + 6) = sVar2;
    if (sVar2 == 0) {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  lbl_8323A960 = (undefined4 *)param_1;
  return;
}

