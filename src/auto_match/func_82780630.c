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
extern int fn_8277EBC8();


void fn_82780630(int param_1,int param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar4 = 0;
  if (*(int *)(param_2 + 0x18) != 0) {
    do {
      lVar2 = (ulonglong)
              *(uint *)(((uint)((uVar4 & 0xffffffff) >> 4) & 0xffffffc) + *(int *)(param_2 + 0x24))
              + (uVar4 & 0x3f) * 0x18;
      iVar1 = (int)lVar2;
      uVar5 = (ulonglong)*(uint *)(iVar1 + 0xc) + param_3;
      uVar3 = (ulonglong)*(uint *)(iVar1 + 0x10) + param_3;
      if ((uVar5 & 0xffffffff) != (uVar3 & 0xffffffff)) {
        fn_8277EBC8(param_1,lVar2,param_3);
        if ((ulonglong)*(uint *)(param_1 + 0xdc) < (uVar5 & 0xffffffff)) {
          *(int *)(param_1 + 0xdc) = (int)uVar5;
        }
        if ((ulonglong)*(uint *)(param_1 + 0xdc) < (uVar3 & 0xffffffff)) {
          *(int *)(param_1 + 0xdc) = (int)uVar3;
        }
      }
      uVar4 = uVar4 + 1;
    } while ((uVar4 & 0xffffffff) < (ulonglong)*(uint *)(param_2 + 0x18));
  }
  return;
}

