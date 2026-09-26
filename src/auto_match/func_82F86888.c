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
extern unsigned int *auStack_3c;
extern int fn_82F63C78();
extern int fn_82F664B0();
extern int fn_82F867A8();
extern int fn_82F88DE8();
extern unsigned int stack0x00000010;
extern unsigned int uStack00000010;
extern unsigned int uStack_48;
extern unsigned int uStack_50;


int * fn_82F86888(undefined8 param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uStack00000010;
  undefined8 uStack_50;
  ushort uStack_48;
  short sStack_40;
  char cStack_3e;
  undefined1 auStack_3c [60];
  
  uStack00000010 = param_1;
  fn_82F867A8(&uStack_50,&stack0x00000010);
  iVar1 = fn_82F88DE8(uStack_50,(ulonglong)uStack_48 << 0x30,0x11,0,&sStack_40);
  param_2[2] = iVar1;
  param_2[1] = (int)sStack_40;
  *param_2 = (int)cStack_3e;
  iVar1 = fn_82F664B0(param_3,param_4,auStack_3c);
  if (iVar1 == 0) {
    param_2[3] = (int)param_3;
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F63C78(0,0,0,0,0);
}

