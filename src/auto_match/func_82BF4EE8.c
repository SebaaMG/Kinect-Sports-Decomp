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
extern int fn_82BE5A70();
extern int fn_82BE6148();


bool fn_82BF4EE8(int *param_1,longlong param_2)

{
  int iVar2;
  longlong lVar1;
  bool bVar3;
  
  iVar2 = (**(code **)(*param_1 + 0xc))();
  if (iVar2 + (-0x40 - param_1[9]) < (int)param_2) {
    bVar3 = false;
  }
  else {
    iVar2 = fn_82BE5A70(param_1,param_2);
    if (iVar2 == 0) {
      lVar1 = fn_82BE6148(param_1,(ulonglong)(uint)param_1[9] + param_2,0);
      bVar3 = lVar1 != 0;
    }
    else {
      bVar3 = true;
    }
  }
  return bVar3;
}

