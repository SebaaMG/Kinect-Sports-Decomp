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
extern unsigned int *auStack_50;


undefined1 *
fn_82D446E8(undefined1 *param_1,int param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  char *pcVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 auStack_50 [80];
  
  uVar3 = (ulonglong)*(uint *)(param_2 + 0x24) - 1;
  if (-1 < (longlong)uVar3) {
    lVar4 = (uVar3 & 0x3fffffff) << 2;
    do {
      iVar1 = *(int *)(*(int *)(param_2 + 0x20) + (int)lVar4);
      pcVar2 = (char *)(*(code *)**(undefined4 **)(iVar1 + 0x10))
                                 (auStack_50,iVar1 + 0x10,param_3,param_4,param_5,param_6);
      if (*pcVar2 == '\0') {
        *param_1 = 0;
        return param_1;
      }
      uVar3 = uVar3 - 1;
      lVar4 = lVar4 + -4;
    } while (-1 < (longlong)uVar3);
  }
  *param_1 = 1;
  return param_1;
}

