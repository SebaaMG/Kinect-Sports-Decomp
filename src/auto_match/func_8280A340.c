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
extern unsigned int lbl_8200133C;
extern unsigned int lbl_8201DFD4;
extern unsigned int lbl_8201DFD8;
extern unsigned int lbl_8201DFDC;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double fn_8280A340(short param_1)

{
  float fVar1;
  double dVar2;
  
  fVar1 = (float)(longlong)(short)(param_1 << 2);
  dVar2 = (double)(((fVar1 * fVar1 * lbl_8201DFDC + lbl_8201DFD8) * fVar1 * fVar1 + lbl_8201DFD4)
                  * fVar1);
  if ((param_1 + 0x2000U & 0x4000) == 0) {
    return dVar2;
  }
  return (double)(float)((double)lbl_8200133C / dVar2);
}

