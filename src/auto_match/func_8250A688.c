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
extern unsigned int lbl_8218EC10;
extern unsigned int lbl_821955C8;


bool fn_8250A688(int param_1,int param_2)

{
  float fVar1;
  bool bVar2;
  
  fVar1 = *(float *)(param_1 + 8);
  if ((((fVar1 < lbl_821955C8) || (lbl_8218EC10 < fVar1)) ||
      (*(float *)(param_2 + 8) < lbl_821955C8)) || (lbl_8218EC10 < *(float *)(param_2 + 8))) {
    bVar2 = fVar1 < *(float *)(param_2 + 8);
  }
  else {
    bVar2 = *(float *)(param_1 + 4) < *(float *)(param_2 + 4);
  }
  return bVar2;
}

