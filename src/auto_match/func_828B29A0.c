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
extern int fn_8288B760();
extern int fn_828B2278();
extern int fn_828B2360();
extern int fn_828B2448();
extern int fn_828B2DE0();
extern unsigned int uStack_20;


undefined8 fn_828B29A0(undefined8 param_1,int *param_2)

{
  int iVar2;
  char cVar3;
  undefined8 uVar1;
  undefined8 uStack_20;
  
  iVar2 = fn_828B2360();
  if ((iVar2 == 0) || (cVar3 = fn_828B2DE0(), cVar3 == '\0')) {
    uVar1 = 0;
  }
  else {
    cVar3 = fn_8288B760(param_2);
    if (cVar3 == '\0') {
      uStack_20 = (**(code **)(*param_2 + 0x48))(param_2);
      uVar1 = fn_828B2448(param_1,&uStack_20);
    }
    else {
      uVar1 = (**(code **)(*param_2 + 0x44))();
      uVar1 = fn_828B2278(param_1,uVar1);
    }
  }
  return uVar1;
}

