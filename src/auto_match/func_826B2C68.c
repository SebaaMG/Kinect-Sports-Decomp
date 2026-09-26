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
extern unsigned int *auStack_30;
extern int fn_82696330();
extern int fn_826B0F90();
extern int fn_826B2BE8();


void fn_826B2C68(int param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_30 [24];
  
  if ((*(int *)(param_1 + 0xcc) != 0) &&
     (*(int *)(*(int *)(param_1 + 0xcc) * 4 + *(int *)(param_1 + 200) + -4) != 0)) {
    iVar1 = fn_826B0F90();
    if (iVar1 == 0) {
      auStack_30[0] = 0;
      fn_826B2BE8(param_1,param_2,auStack_30);
      fn_82696330(auStack_30);
    }
  }
  return;
}

