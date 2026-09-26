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
extern unsigned int *auStack_30;


void fn_82FB6FE8(undefined4 *param_1,int *param_2,ulonglong param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined1 auStack_30 [48];
  
  iVar1 = *param_2;
  uVar4 = 0;
  uVar2 = (-param_3 & ~param_3 & 0xffffffff) >> 0x1f;
  if (uVar2 != 0xfffffffffffffffe) {
    do {
      if (iVar1 == 0) {
        return;
      }
      if (*(char *)(iVar1 + 0x10) != '\0') {
        if ((iVar1 == param_1[5]) && (iVar3 = (**(code **)*param_1)(param_1,auStack_30), iVar3 == 0)
           ) {
          return;
        }
        uVar4 = uVar4 + 1;
      }
      iVar1 = *(int *)(iVar1 + 4);
    } while ((uVar4 & 0xffffffff) < uVar2 + 2);
  }
  return;
}

