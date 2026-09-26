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
extern unsigned int *auStack_28;
extern unsigned int *auStack_30;
extern int fn_827E0658();
extern int fn_827E11C0();


longlong fn_827D9410(int param_1,uint *param_2)

{
  uint *puVar1;
  ulonglong uVar2;
  uint auStack_30 [2];
  undefined1 auStack_28 [16];
  
  fn_827E0658(auStack_30,param_1,param_2);
  uVar2 = (ulonglong)auStack_30[0];
  if (uVar2 == *(uint *)(param_1 + 4)) {
    auStack_30[0] = *param_2;
    auStack_30[1] = 0;
    puVar1 = (uint *)fn_827E11C0(auStack_28,param_1,auStack_30);
    uVar2 = (ulonglong)*puVar1;
  }
  return uVar2 + 0xc;
}

