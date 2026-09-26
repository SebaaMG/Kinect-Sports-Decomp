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
extern int fn_82E76DC8();


longlong fn_82E76E10(undefined8 param_1,short *param_2,short *param_3)

{
  int iVar2;
  longlong lVar1;
  
  if ((((param_2 == (short *)0x0) || (param_3 == (short *)0x0)) || (*(int *)(param_2 + 0x96) == 0))
     || (((iVar2 = fn_82E76DC8(param_1,param_3), iVar2 == 0 || (*param_2 != *param_3)) ||
         (*(byte *)(param_2 + 3) + 1 + ((int)(*(byte *)(param_2 + 3) + 1) >> 8) * -0x100 !=
          (uint)*(byte *)(param_3 + 3))))) {
    lVar1 = 0;
  }
  else {
    lVar1 = -((ulonglong)
              (0xff < (ulonglong)*(uint *)((int)param_3 + 0xf) -
                      (ulonglong)*(uint *)((int)param_2 + 0xf)) - 1);
  }
  return lVar1;
}

