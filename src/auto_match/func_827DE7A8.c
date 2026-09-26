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
extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern int fn_827D9630();
extern int fn_827D9658();
extern int fn_827DE748();
extern int fn_827E0658();


longlong fn_827DE7A8(int param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  uint *puVar2;
  ulonglong uVar3;
  uint auStack_70 [4];
  undefined1 auStack_60 [32];
  undefined4 auStack_40 [2];
  undefined1 auStack_38 [32];
  
  fn_827E0658(auStack_70,param_1,param_2);
  uVar3 = (ulonglong)auStack_70[0];
  if (uVar3 == *(uint *)(param_1 + 4)) {
    uVar1 = fn_827D9658(auStack_60);
    auStack_40[0] = *param_2;
    fn_827D9630(auStack_38,uVar1);
    puVar2 = (uint *)fn_827DE748(auStack_70,param_1,auStack_40);
    uVar3 = (ulonglong)*puVar2;
  }
  return uVar3 + 0x10;
}

