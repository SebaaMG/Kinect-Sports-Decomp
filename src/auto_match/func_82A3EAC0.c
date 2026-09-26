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
extern int fn_82A1DBD8();
extern int fn_82A1DDC0();
extern int fn_82A3B910();


void fn_82A3EAC0(int param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x2b0c);
  if (iVar2 == 0) {
    return;
  }
  if ((*(int *)(param_1 + 0x2ebc) == 0) || (bVar1 = true, 0x7fff < *(uint *)(param_1 + 0x2ec4))) {
    bVar1 = false;
  }
  if (*(char *)(param_1 + 0x2fe4) != '\0') {
    if (!bVar1) {
      fn_82A1DBD8(iVar2,param_3,param_2);
      goto LAB_82a3eb28;
    }
    iVar2 = *(int *)(param_1 + 0x2fe8);
  }
  fn_82A1DDC0(iVar2);
LAB_82a3eb28:
  if ((bVar1) && (fn_82A3B910(param_1,iVar2,param_2), *(char *)(param_1 + 0x2fe4) != '\0')) {
    fn_82A1DBD8(*(undefined4 *)(param_1 + 0x2b0c),iVar2,param_2);
  }
  return;
}

