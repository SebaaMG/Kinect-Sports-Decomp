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
extern int fn_827701A8();


void fn_82770430(int param_1,int *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar2 = (ulonglong)(uint)param_2[1];
  uVar3 = 0;
  uVar1 = 0;
  if (*(char *)(*(int *)(param_1 + 8) + 0x1c) == '\0') {
    uVar3 = 0;
  }
  else {
    uVar5 = 1;
    if (1 < uVar2) {
      iVar4 = 0x28;
      do {
        if (((int *)(iVar4 + *param_2))[-10] != *(int *)(iVar4 + *param_2)) {
          uVar3 = fn_827701A8(param_1,param_2,uVar1,uVar5,uVar3);
          uVar1 = uVar5;
        }
        uVar2 = (ulonglong)(uint)param_2[1];
        uVar5 = uVar5 + 1;
        iVar4 = iVar4 + 0x28;
      } while ((uVar5 & 0xffffffff) < uVar2);
    }
  }
  fn_827701A8(param_1,param_2,uVar1,uVar2,uVar3);
  return;
}

