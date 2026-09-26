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
extern int fn_82FB48E8();
extern int fn_82FB5D80();


void fn_82FB5FA0(int param_1,ulonglong param_2,int param_3)

{
  int iVar1;
  char cVar2;
  
  if ((param_3 != *(int *)(*(int *)(param_1 + -8) + 0x28)) && (*(int *)(param_1 + 0xc) != 1)) {
    return;
  }
  if ((ulonglong)*(uint *)(param_1 + 8) == (param_2 & 0xffffffff)) {
    return;
  }
  iVar1 = *(int *)(param_1 + -0x34);
  if (iVar1 != 0) {
    if (**(int **)(iVar1 + 0x74) == 0) {
      if (*(int *)(iVar1 + 0xc) == 0) {
        cVar2 = '\0';
      }
      else {
        cVar2 = fn_82FB48E8();
      }
    }
    else {
      cVar2 = '\x01';
    }
    if (cVar2 != '\0') {
      *(int *)(param_1 + 0x10) = (int)param_2;
      goto LAB_82fb6040;
    }
  }
  fn_82FB5D80(param_1 + -0x40,param_2);
LAB_82fb6040:
  *(int *)(param_1 + 8) = (int)param_2;
  return;
}

