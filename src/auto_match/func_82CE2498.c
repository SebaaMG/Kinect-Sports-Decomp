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
extern int fn_82CE3870();
extern int fn_82CE38A0();


void fn_82CE2498(undefined8 param_1,byte *param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 auStack_30 [12];
  
  auStack_30[0] = 2;
  iVar1 = fn_82CE38A0(param_1,param_2,auStack_30);
  if ((-1 < iVar1) && ((*param_2 & 0x40) != 0)) {
    fn_82CE3870(param_1,param_3);
  }
  return;
}

