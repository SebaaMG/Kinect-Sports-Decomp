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
extern int fn_82230300();
extern int fn_822315A0();
extern int fn_8265CA20();


void fn_82250768(undefined8 param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = *(char *)((int)param_2 + 0x35);
  while (cVar1 == '\0') {
    fn_82250768(param_1,param_2[2]);
    piVar2 = (int *)*param_2;
    if (param_2[0xb] != 0) {
      fn_822315A0();
    }
    fn_82230300(param_2 + 3,1,0);
    fn_8265CA20(param_2);
    param_2 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x35);
  }
  return;
}

