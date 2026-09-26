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
extern int fn_8225F670();
extern int fn_8225FCE8();
extern int fn_82E1CAD0();
extern int fn_82E1CB88();
extern int fn_82E1CC60();
extern int fn_82E1CCA8();


void fn_82265140(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  char cVar2;
  
  pcVar1 = (char *)fn_8225F670();
  if ((*pcVar1 != '\0') && (cVar2 = fn_82E1CAD0(0x6c), cVar2 != '\0')) {
    fn_82E1CB88(0xffffffff821a7a64,param_2);
    fn_8225FCE8(0xffffffff821a7a78);
    fn_82E1CC60(param_1,0xffffffff821a7a8c);
    fn_82E1CCA8();
  }
  return;
}

