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
extern int fn_82810280();
extern unsigned int lbl_831BCA5C;
extern unsigned int lbl_831BCA60;


undefined8 fn_83066E70(longlong param_1,longlong param_2)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (double)fn_82810280();
  if ((double)lbl_831BCA60 <= dVar1) {
    dVar1 = (double)fn_82810280(param_1,param_1 + 0xc);
    dVar2 = (double)fn_82810280(param_2,param_2 + 0xc);
    if ((dVar1 <= (double)(float)((double)lbl_831BCA5C + dVar2)) &&
       ((double)(float)(dVar2 - (double)lbl_831BCA5C) <= dVar1)) {
      return 1;
    }
  }
  return 0;
}

