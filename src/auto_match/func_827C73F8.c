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
extern int fn_827C70D0();
extern int fn_827C7150();
extern int fn_827C7348();


void fn_827C73F8(int param_1,char param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  int iVar3;
  
  fn_827C7348();
  if (*(char *)(param_1 + 0xc) == '\0') {
    fn_827C7150(param_1,0x7f,7);
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    **(undefined1 **)(param_1 + 0x10) = 0xff;
    lVar2 = (ulonglong)*(uint *)(param_1 + 0x14) - 1;
    *(int *)(param_1 + 0x14) = (int)lVar2;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    if (lVar2 == 0) {
      fn_827C70D0(param_1);
    }
    **(char **)(param_1 + 0x10) = param_2 + -0x30;
    lVar2 = (ulonglong)*(uint *)(param_1 + 0x14) - 1;
    *(int *)(param_1 + 0x14) = (int)lVar2;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    if (lVar2 == 0) {
      fn_827C70D0(param_1);
    }
  }
  if (*(int *)(*(int *)(param_1 + 0x20) + 300) == 0) {
    iVar3 = 0;
    if (0 < *(int *)(*(int *)(param_1 + 0x20) + 0xe4)) {
      puVar1 = (undefined4 *)(param_1 + 0x20);
      do {
        puVar1 = puVar1 + 1;
        *puVar1 = 0;
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(*(int *)(param_1 + 0x20) + 0xe4));
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  return;
}

