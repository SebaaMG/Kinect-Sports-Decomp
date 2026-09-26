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
extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern int fn_828F6FA8();
extern int fn_829410A8();
extern int fn_82941178();
extern int fn_82941320();
extern int fn_8295D6A8();


void fn_82945A10(undefined8 param_1,ulonglong param_2,float *param_3)

{
  int iVar1;
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [96];
  
  iVar1 = fn_82941178();
  if (-1 < iVar1) {
    fn_82941320(param_1,param_2 & 0xffffffff000007ff | 0xa0000000,auStack_60,0x40,0);
    fn_828F6FA8(auStack_80,0x20,auStack_60,0,0);
    iVar1 = fn_829410A8(param_1,0xffffffff82034eb8,auStack_80,(double)*param_3,(double)param_3[1],
                          (double)param_3[2],(double)param_3[3]);
    if (-1 < iVar1) {
      fn_8295D6A8(param_1,param_2,param_3);
    }
  }
  return;
}

