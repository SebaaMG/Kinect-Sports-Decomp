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
extern int fn_826944C8();
extern int fn_8269F500();
extern int fn_82720D48();


void fn_82721008(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  int param_5)

{
  int iVar1;
  longlong lVar2;
  int aiStack_30 [12];
  
  if (param_5 == 0) {
    fn_82720D48(param_1 + -0x34,param_2,param_3,0x67,0,0,param_4,0);
  }
  else {
    iVar1 = *(int *)(param_5 + 0x80);
    if (iVar1 == 0) {
      iVar1 = fn_8269F500(param_5);
    }
    aiStack_30[0] = *(int *)(iVar1 + 0xc);
    *(int *)(aiStack_30[0] + 8) = *(int *)(aiStack_30[0] + 8) + 1;
    fn_82720D48(param_1 + -0x34,param_2,param_3,0x67,aiStack_30,0,param_4,0);
    lVar2 = (ulonglong)*(uint *)(aiStack_30[0] + 8) - 1;
    *(int *)(aiStack_30[0] + 8) = (int)lVar2;
    if (lVar2 == 0) {
      fn_826944C8(aiStack_30[0]);
    }
  }
  return;
}

