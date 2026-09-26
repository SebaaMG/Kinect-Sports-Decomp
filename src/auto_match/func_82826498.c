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
extern int fn_828261B0();
extern int fn_82826230();
extern int fn_82826290();
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_82826498(undefined8 param_1,ulonglong param_2,undefined4 param_3,code *param_4,
                  undefined8 param_5)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined4 auStack_38 [14];
  
  fn_828261B0();
  uStack_3c = (uint)param_2;
  uStack_40 = param_3;
  uVar1 = param_2 & 0xffffffff;
  while (uVar1 != 0) {
    uVar2 = (*param_4)(auStack_38[0],param_2,uStack_40,param_5);
    fn_82826290(auStack_38[0],&uStack_3c,&uStack_40,uVar2);
    param_2 = (ulonglong)uStack_3c;
    uVar1 = param_2;
  }
  fn_82826230(auStack_38);
  return;
}

