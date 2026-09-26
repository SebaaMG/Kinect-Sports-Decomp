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
extern unsigned int *auStack_40;
extern int fn_82A1E0C0();
extern int fn_82A2AA10();


bool fn_82D005F8(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  uint auStack_40 [4];
  undefined1 auStack_30 [48];
  
  iVar1 = fn_82A1E0C0(0,param_5,param_2,param_3,0,auStack_40);
  *param_1 = iVar1;
  if (iVar1 != 0) {
    *(ulonglong *)(param_1 + 2) = (ulonglong)auStack_40[0];
    fn_82A2AA10(0x406d1388,0,4,auStack_30);
  }
  return iVar1 == 0;
}

