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
extern int fn_826728E8();


void fn_8229AD90(int param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0xc);
  if (param_2 == 0) {
    fn_826728E8(*puVar1,0xffffffff821ab778);
    uVar2 = 0xffffffff821ab788;
  }
  else {
    if (param_2 != 1) {
      return;
    }
    fn_826728E8(*puVar1,0xffffffff821ab798);
    uVar2 = 0xffffffff821ab7a8;
  }
  fn_826728E8(*puVar1,uVar2,param_4);
  return;
}

