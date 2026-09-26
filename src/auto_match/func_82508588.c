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
extern int fn_8229E090();
extern int fn_8265CA20();


void fn_82508588(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  
  if (param_1 == 2) {
    fn_8265CA20(param_2);
  }
  else {
    uVar1 = *(undefined4 *)param_2[2];
    if (param_1 == 0) {
      pcVar2 = (code *)*param_2;
    }
    else {
      if (param_1 != 1) {
        return;
      }
      pcVar2 = (code *)param_2[1];
    }
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)();
      fn_8229E090(uVar1,0,1);
    }
  }
  return;
}

