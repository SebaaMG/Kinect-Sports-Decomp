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
extern int fn_82E50CB8();
extern int fn_82E50F10();


undefined8 fn_82E42088(int param_1,int *param_2)

{
  undefined8 uVar1;
  int *piVar2;
  
  if (param_2 == (int *)0x0) {
    uVar1 = 0xffffffff80070057;
  }
  else {
    fn_82E50CB8(param_1 + 0xc);
    piVar2 = (int *)(param_1 + 0x5bc);
    if ((int *)*piVar2 != (int *)0x0) {
      (**(code **)(*(int *)*piVar2 + 8))();
      *piVar2 = 0;
    }
    uVar1 = (**(code **)(*param_2 + 0x10))(param_2,0xffffffff82152f7c,piVar2);
    fn_82E50F10(param_1 + 0xc);
  }
  return uVar1;
}

