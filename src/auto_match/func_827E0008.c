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
extern int fn_827DF1D0();
extern int fn_827DFB88();
extern int fn_827E25C8();
extern int fn_827E25F8();
extern int fn_827E2600();


ulonglong fn_827E0008(undefined8 param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  short sVar2;
  char cVar3;
  ulonglong uVar4;
  
  uVar4 = 0xffff;
  iVar1 = fn_827DF1D0();
  *param_3 = iVar1;
  if (iVar1 != 0) {
    sVar2 = fn_827E25F8();
    if (sVar2 != 0) {
      fn_827E25C8(*param_3);
      uVar4 = fn_827E25F8(*param_3);
      if (((uVar4 & 0xffff) == 0) && (cVar3 = fn_827E2600(*param_3), cVar3 != '\0')) {
        fn_827DFB88(param_1,*param_3);
      }
    }
  }
  return uVar4;
}

