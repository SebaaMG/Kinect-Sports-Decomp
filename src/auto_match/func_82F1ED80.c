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
extern int fn_82F1E698();


void fn_82F1ED80(int param_1,ulonglong param_2,ulonglong param_3,int param_4,longlong param_5)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = *(int *)(param_1 + 0x1e54) + param_4 * 0x114;
  if ((param_2 & 0xffffffff) < (param_3 & 0xffffffff)) {
    do {
      uVar2 = 0;
      if (*(int *)(param_1 + 0x2d0) != 0) {
        do {
          if (((*(int *)(iVar1 + 0x74) != 0) || (*(int *)(param_1 + 0xaf0) == 0)) ||
             (*(int *)(param_1 + 0xaf0) == 4)) {
            fn_82F1E698(param_1,uVar2,param_2,iVar1,param_5);
          }
          uVar2 = uVar2 + 1;
          iVar1 = iVar1 + 0x114;
          param_5 = param_5 + 0x600;
        } while ((uVar2 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x2d0));
      }
      param_2 = param_2 + 1;
    } while ((param_2 & 0xffffffff) < (param_3 & 0xffffffff));
  }
  return;
}

