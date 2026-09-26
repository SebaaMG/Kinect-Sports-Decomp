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
extern unsigned int *auStack_24;
extern int fn_8263BDD8();
extern unsigned int iStack_28;
extern unsigned int iStack_2c;
extern unsigned int iStack_30;
extern unsigned int lbl_821CBFB1;


void fn_8263CB90(int param_1,int *param_2,int *param_3,undefined8 param_4)

{
  int iVar1;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  undefined1 auStack_24 [36];
  
  iVar1 = *(int *)(param_1 + 0x18);
  fn_8263BDD8(iVar1,0,*(uint *)(param_1 + 0x1c) >> 0x1c,param_4,&iStack_30,&iStack_28,&iStack_2c,
                auStack_24);
  if (param_3 != (int *)0x0) {
    iStack_30 = ((uint)(byte)(&lbl_821CBFB1)[(*(uint *)(iVar1 + 0x20) & 0x3f) * 2] * *param_3 >> 3)
                + param_3[1] * iStack_28 + param_3[4] * iStack_2c + iStack_30;
  }
  *param_2 = iStack_28;
  param_2[1] = iStack_2c;
  param_2[2] = iStack_30;
  return;
}

