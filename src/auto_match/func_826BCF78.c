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
extern unsigned int *auStack_20;
extern int fn_826BCD88();
extern int fn_826BCE88();
extern unsigned int lbl_8200AA62;


ulonglong fn_826BCF78(ulonglong param_1)

{
  int iVar1;
  undefined2 auStack_20 [4];
  
  iVar1 = fn_826BCD88(0xffffffff82009ce8,param_1);
  if (iVar1 == 0) {
    param_1 = param_1 & 0xffff;
  }
  else {
    auStack_20[0] = (undefined2)param_1;
    iVar1 = fn_826BCE88(0xffffffff8200aa60,0,0x2a1,auStack_20,0xffffffff826bcdf0);
    param_1 = (ulonglong)*(ushort *)(&lbl_8200AA62 + iVar1 * 4);
  }
  return param_1;
}

