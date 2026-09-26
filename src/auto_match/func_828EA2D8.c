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
extern int fn_828E9DB8();
extern int fn_828E9F90();


undefined8 fn_828EA2D8(int *param_1,int param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  
  if (*param_1 == 0) {
    uVar1 = fn_828E9F90();
  }
  else if ((ulonglong)(uint)param_1[3] <
           ((ulonglong)(*param_1 + 7U >> 3) + (ulonglong)(uint)param_1[1] + param_3 & 0xffffffff)) {
    uVar1 = 0;
  }
  else {
    if (0 < (int)param_3) {
      puVar2 = (undefined1 *)(param_2 + -1);
      do {
        puVar2 = puVar2 + 1;
        fn_828E9DB8(param_1,*puVar2,8);
        param_3 = param_3 + -1;
      } while (0 < param_3);
    }
    uVar1 = 1;
  }
  return uVar1;
}

