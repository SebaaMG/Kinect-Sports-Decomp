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
extern unsigned int *auStack_1c;
extern int fn_8289F160();
extern int fn_828C6260();
extern unsigned int uStack_20;


void fn_8288B4F0(int param_1,undefined4 param_2,undefined8 param_3)

{
  int *piVar1;
  undefined4 uStack_20;
  undefined1 auStack_1c [4];
  
  uStack_20 = param_2;
  piVar1 = (int *)fn_8289F160(auStack_1c,param_1 + 0xb0,&uStack_20);
  fn_828C6260(param_1 + 0xa4,*(int *)(*piVar1 + 0x10),param_3,
                    *(int *)(param_1 + 0xa8) == *(int *)(*piVar1 + 0x10));
  return;
}

