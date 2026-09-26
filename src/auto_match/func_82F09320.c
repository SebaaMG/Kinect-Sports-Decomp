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
extern int fn_82F09B38();


void fn_82F09320(int param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  short sVar2;
  int iVar3;
  longlong lVar4;
  short asStack_a0 [68];
  
  fn_82F09B38(asStack_a0,param_3,8,0xff);
  iVar1 = 0;
  do {
    iVar3 = 0;
    lVar4 = 8;
    do {
      sVar2 = asStack_a0[iVar1 + iVar3];
      if (sVar2 < 0) {
        sVar2 = 0;
      }
      else if (0xff < sVar2) {
        sVar2 = 0xff;
      }
      *(char *)(iVar3 + param_1) = (char)sVar2;
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    iVar1 = iVar1 + 8;
    param_1 = param_1 + param_2;
  } while (iVar1 < 0x40);
  return;
}

