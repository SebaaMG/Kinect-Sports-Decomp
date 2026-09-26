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
extern int fn_82F68CC0();


void fn_8281C620(int param_1,int *param_2,uint *param_3)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    uVar2 = (ulonglong)*(uint *)(*(int *)(param_1 + 0xc) + 0x1c);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x1c);
    if (iVar1 == 0) {
      uVar2 = (ulonglong)*(uint *)(*(int *)(param_1 + 0x20) + 4);
    }
    else {
      uVar2 = (ulonglong)*(uint *)(iVar1 + 0x11) + (ulonglong)*(uint *)(iVar1 + 0xd);
    }
  }
  uVar3 = *(uint *)(param_1 + 0x24);
  if (*param_3 <= *(uint *)(param_1 + 0x24)) {
    uVar3 = *param_3;
  }
  fn_82F68CC0(uVar2 + *(uint *)(param_1 + 0x10),*param_2,uVar3);
  *(uint *)(param_1 + 0x10) = uVar3 + *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) - uVar3;
  *param_2 = *param_2 + uVar3;
  *param_3 = *param_3 - uVar3;
  return;
}

