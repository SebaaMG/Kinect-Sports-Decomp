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
extern int fn_83075D60();
extern unsigned int lbl_820162A0;
extern unsigned int lbl_82186D4C;
extern unsigned int lbl_821AAD20;


void fn_8306D768(double param_1,int param_2)

{
  float fVar1;
  double dVar2;
  
  dVar2 = (double)fn_83075D60(param_2 + 0xa40);
  fVar1 = lbl_82186D4C;
  if ((double)lbl_820162A0 <= dVar2) {
    if ((double)*(float *)(param_2 + 0x1a80) <= (double)lbl_821AAD20) {
      return;
    }
    fVar1 = (float)((double)*(float *)(param_2 + 0x1a80) - param_1);
  }
  *(float *)(param_2 + 0x1a80) = fVar1;
  return;
}

