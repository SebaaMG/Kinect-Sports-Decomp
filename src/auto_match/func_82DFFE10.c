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
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;


void fn_82DFFE10(int *param_1,undefined8 param_2,int param_3,longlong param_4)

{
  char *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [112];
  
  uVar4 = 0;
  uVar2 = (ulonglong)*(byte *)(*(int *)(param_3 + 0x1c) + 0x20);
  if (uVar2 != 0) {
    do {
      lVar3 = uVar4 * 0x60 + param_4;
      pcVar1 = (char *)(**(code **)(*param_1 + 0x40))(auStack_80,param_1,param_3,uVar4,auStack_70);
      if (*pcVar1 == '\0') {
        (**(code **)(*param_1 + 0x48))(param_1,param_3,uVar4,lVar3);
      }
      else {
        (**(code **)(*param_1 + 0x44))();
      }
      (**(code **)(*param_1 + 0x2c))(param_1,param_3,uVar4,lVar3);
      uVar4 = uVar4 + 1 & 0xff;
    } while (uVar4 < uVar2);
  }
  return;
}

