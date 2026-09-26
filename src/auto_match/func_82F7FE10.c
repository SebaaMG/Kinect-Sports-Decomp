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
extern unsigned int *auStack_40;
extern int fn_82F63BA0();
extern int fn_82F68240();
extern int fn_82F7FC58();
extern int fn_82F86648();
extern int fn_82F86888();
extern unsigned int iStack_50;
extern unsigned int uStack_4c;


undefined8 fn_82F7FE10(undefined8 *param_1,undefined1 *param_2,ulonglong param_3,longlong param_4)

{
  undefined4 *puVar2;
  undefined8 uVar1;
  longlong lVar3;
  int iStack_50;
  uint uStack_4c;
  undefined1 auStack_40 [64];
  
  fn_82F86888(*param_1,&iStack_50,auStack_40,0x16);
  if ((param_2 == (undefined1 *)0x0) || ((param_3 & 0xffffffff) == 0)) {
    puVar2 = (undefined4 *)fn_82F68240();
    *puVar2 = 0x16;
    fn_82F63BA0();
    uVar1 = 0x16;
  }
  else {
    if ((int)param_3 == -1) {
      lVar3 = -1;
    }
    else {
      lVar3 = param_3 - (iStack_50 == 0x2d);
    }
    uVar1 = fn_82F86648(param_2 + (iStack_50 == 0x2d),lVar3,(ulonglong)uStack_4c + param_4,
                              &iStack_50);
    if ((int)uVar1 == 0) {
      uVar1 = fn_82F7FC58(param_2,param_3,param_4,&iStack_50,0);
    }
    else {
      *param_2 = 0;
    }
  }
  return uVar1;
}

