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
extern unsigned int *auStack_1c;
extern int fn_8256A790();
extern int fn_82F65390();
extern unsigned int uStack_20;


void fn_825B0530(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uStack_20;
  undefined4 auStack_1c [3];
  
  if (param_2[2] != 0) {
    iVar1 = fn_82F65390(*param_2,0xffffffff821c81b4,9);
    if (iVar1 == 0) {
      uStack_20 = param_2[3];
      auStack_1c[0] = param_2[2];
      fn_8256A790(&uStack_20,auStack_1c);
    }
  }
  return;
}

