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
extern unsigned int lbl_82022E50;
extern unsigned int lbl_82022E54;
extern unsigned int lbl_821AAD20;


void fn_8287C010(float *param_1)

{
  bool bVar1;
  
  if ((lbl_82022E50 <= *param_1) || (bVar1 = true, *param_1 <= lbl_82022E54)) {
    bVar1 = false;
  }
  if (!bVar1) {
    return;
  }
  *param_1 = lbl_821AAD20;
  return;
}

