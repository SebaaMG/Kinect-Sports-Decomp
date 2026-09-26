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
extern int fn_8265C990();
extern int fn_82E245F8();


undefined8 fn_82E24BB8(int *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  
  if (param_1 == (int *)0x0) {
    uVar2 = 0xffffffff80004005;
  }
  else {
    piVar1 = (int *)*param_1;
    if ((piVar1 == (int *)0x0) || (*piVar1 != 0x476f6f64)) {
      uVar2 = 0xffffffff8000ffff;
    }
    else {
      uVar2 = 0;
      fn_82E245F8(piVar1);
      fn_8265C990(piVar1,0x208c804d);
      *param_1 = 0;
    }
  }
  return uVar2;
}

