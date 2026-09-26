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
extern int fn_82AD1AC8();
extern int fn_82AD2128();


void fn_82B1A590(int param_1,int param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = (param_2 + 0x17) * 4;
  iVar1 = *(int *)(iVar4 + param_3);
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar4 + param_1);
    iVar5 = iVar1;
    if (iVar2 != 0) {
      while (iVar3 = fn_82AD1AC8(iVar5,param_2), iVar3 != 0) {
        iVar5 = *(int *)(iVar3 + 0xc);
      }
      fn_82AD2128(iVar5,param_2,iVar2,param_4);
    }
    *(int *)(iVar4 + param_1) = iVar1;
  }
  return;
}

