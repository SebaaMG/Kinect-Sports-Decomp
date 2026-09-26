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
extern int fn_822315A0();
extern int fn_82266D28();
extern int fn_82279C58();
extern unsigned int iStack_1c;
extern unsigned int uStack_20;


undefined4 * fn_822888F0(undefined4 *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uStack_20;
  int iStack_1c;
  
  iVar1 = *(int *)(param_2 + 0x69c);
  if (*(int *)(iVar1 + 0x6c) == 0) {
    if ((*(int *)(iVar1 + 0x44) == 1) || (*(int *)(iVar1 + 0x44) == 0)) {
      piVar2 = (int *)(iVar1 + 0x4c);
    }
    else {
      piVar2 = (int *)(iVar1 + 0x54);
    }
    iVar1 = *piVar2;
  }
  else {
    iVar1 = *(int *)(iVar1 + 100);
  }
  if (iVar1 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    fn_82266D28(param_1);
  }
  else {
    fn_82279C58(&uStack_20);
    *param_1 = 0;
    param_1[1] = 0;
    if (param_1 != &uStack_20) {
      iVar1 = param_1[1];
      param_1[1] = iStack_1c;
      *param_1 = uStack_20;
      iStack_1c = iVar1;
    }
    if (iStack_1c != 0) {
      fn_822315A0();
    }
  }
  return param_1;
}

