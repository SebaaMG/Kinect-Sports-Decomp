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
extern int fn_8240D928();
extern int fn_82897BA8();
extern int fn_828996C8();
extern int fn_8289AC08();
extern int fn_8289D8D0();
extern int fn_828A1318();
extern int fn_82BA02A8();


void fn_828AB150(int param_1,byte param_2)

{
  int iVar1;
  char cVar3;
  int iVar2;
  
  if (param_2 < *(byte *)(*(int *)(param_1 + 0x18) + 0x58)) {
    return;
  }
  if (*(byte *)(*(int *)(param_1 + 0x18) + 0x59) < param_2) {
    return;
  }
  if ((*(int **)(param_1 + 0x20) == (int *)0x0) ||
     (iVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 4))(), iVar1 == 0)) {
    if ((*(int **)(param_1 + 0x20) == (int *)0x0) ||
       (iVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(), iVar1 == 0)) {
      if (*(int **)(param_1 + 0x20) == (int *)0x0) {
        return;
      }
      iVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x10))();
      if (iVar1 == 0) {
        return;
      }
      if (*(int **)(param_1 + 0x20) == (int *)0x0) {
        iVar1 = 0;
      }
      else {
        iVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x10))();
      }
      fn_8289D8D0(*(undefined4 *)(param_1 + 0x28));
      iVar2 = fn_8240D928();
      iVar2 = (iVar2 + 4) * 4;
      if (param_2 == *(byte *)(iVar2 + iVar1)) {
        return;
      }
      fn_8289AC08(param_1,1,0,1,0);
      fn_82BA02A8(param_1);
      *(byte *)(iVar2 + iVar1) = param_2;
    }
    else {
      if (param_2 == *(byte *)(param_1 + 0xc)) {
        return;
      }
      fn_8289AC08(param_1,1,0,1,0);
      fn_82BA02A8(param_1);
      *(byte *)(param_1 + 0xc) = param_2;
    }
    fn_8289AC08(param_1,1,1,1,0);
    cVar3 = fn_82897BA8(*(undefined4 *)(param_1 + 0x18));
    if (cVar3 != '\0') {
      return;
    }
  }
  else {
    if (param_2 == *(byte *)(param_1 + 0xc)) {
      return;
    }
    fn_8289AC08(param_1,1,0,1,0);
    fn_82BA02A8(param_1);
    *(byte *)(param_1 + 0xc) = param_2;
    fn_8289AC08(param_1,1,1,1,0);
    cVar3 = fn_82897BA8(*(undefined4 *)(param_1 + 0x18));
    if (cVar3 != '\0') {
      fn_828996C8(param_1,0xffffffffffffffff);
      return;
    }
  }
  fn_828A1318(*(undefined4 *)(param_1 + 0x28),param_1);
  return;
}

