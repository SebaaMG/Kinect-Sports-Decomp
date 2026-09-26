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
extern int fn_825089A0();
extern int fn_828B8550();


bool fn_828B8800(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,longlong param_8)

{
  bool bVar1;
  int *piVar3;
  undefined8 uVar2;
  
  bVar1 = param_8 == *(longlong *)(param_1 + 0x48);
  if (bVar1) {
    piVar3 = (int *)fn_825089A0();
    uVar2 = (**(code **)(*piVar3 + 0xc))();
    fn_828B8550(param_1,uVar2,param_2,param_3,param_4,param_7,param_5,param_6);
  }
  return bVar1;
}

