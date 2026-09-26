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
extern unsigned int *auStack_20;
extern int fn_82526C70();
extern int fn_82E1CAD0();
extern int fn_82E1CB08();
extern int fn_82E1CCA8();


void fn_8225FC80(undefined4 *param_1)

{
  char cVar1;
  undefined1 auStack_20 [16];
  
  cVar1 = fn_82E1CAD0(3);
  if (cVar1 != '\0') {
    fn_82526C70(auStack_20,10,0xffffffff821a6800,*param_1);
    fn_82E1CB08(0xffffffff821a6808,auStack_20,0);
    fn_82E1CCA8();
  }
  return;
}

