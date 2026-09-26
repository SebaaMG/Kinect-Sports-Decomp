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
extern int fn_82FA5060();
extern int fn_82FA5190();
extern int fn_82FF86F0();
extern unsigned int lbl_831BC768;


int fn_82FF8ED8(int param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  uint auStack_30 [12];
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  if (*(int *)(param_1 + 0x1c) == 0) {
    if (uVar3 <= (param_2 & 0xffffffff)) {
      param_2 = uVar3;
    }
    iVar2 = *(int *)(param_1 + 0x18);
    *(uint *)(param_1 + 8) = uVar1 - (int)param_2;
    *(int *)(param_1 + 0x18) = iVar2 + (int)param_2;
  }
  else if (uVar3 < (param_2 & 0xffffffff)) {
    uVar3 = fn_82FA5060(lbl_831BC768,param_2);
    *(int *)(param_1 + 0x14) = (int)uVar3;
    if (((uVar3 & 0xffffffff) != 0) &&
       ((iVar2 = fn_82FF86F0(param_1,uVar3,param_2,auStack_30), iVar2 != 1 ||
        ((ulonglong)auStack_30[0] != (param_2 & 0xffffffff))))) {
      fn_82FA5190(lbl_831BC768,*(undefined4 *)(param_1 + 0x14));
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    iVar2 = *(int *)(param_1 + 0x14);
  }
  else {
    iVar2 = *(int *)(param_1 + 4);
    *(uint *)(param_1 + 8) = uVar1 - (int)param_2;
    *(int *)(param_1 + 4) = iVar2 + (int)param_2;
  }
  return iVar2;
}

