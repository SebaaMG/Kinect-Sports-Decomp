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
extern unsigned int *auStack_2c;
extern int fn_8289B6F8();
extern int fn_828E5F60();
extern unsigned int iStack_30;


void fn_8289BBE8(undefined8 param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iStack_30;
  undefined1 auStack_2c [44];
  
  iStack_30 = *param_2;
  if (iStack_30 != *param_3) {
    do {
      iVar1 = iStack_30;
      if (*(int *)(iStack_30 + 0x18) == 0) {
        fn_828E5F60(&iStack_30);
        fn_8289B6F8(auStack_2c,param_1,iVar1);
      }
      else {
        fn_828E5F60(&iStack_30);
      }
    } while (iStack_30 != *param_3);
  }
  return;
}

