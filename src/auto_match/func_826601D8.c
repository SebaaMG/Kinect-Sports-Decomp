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
extern int fn_82660558();
extern int fn_82660790();
extern int fn_82BA02A8();


void fn_826601D8(int *param_1)

{
  int *piStack00000014;
  
  piStack00000014 = param_1;
  if (*param_1 != 0) {
    fn_82BA02A8(param_1);
    fn_82660790(piStack00000014,*piStack00000014,piStack00000014[1]);
    fn_82660558(piStack00000014 + 3,*piStack00000014,
                      piStack00000014[2] - *piStack00000014 >> 5);
  }
  *piStack00000014 = 0;
  piStack00000014[1] = 0;
  piStack00000014[2] = 0;
  return;
}

