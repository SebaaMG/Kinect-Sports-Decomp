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
extern int fn_82631738();
extern int fn_82839000();
extern unsigned int iStack0000001c;
extern int (*lbl_8321130C)();
extern unsigned int uStack00000014;
extern unsigned int uStack_14;
extern unsigned int uStack_1c;


undefined8 fn_82839198(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uStack00000014;
  int iStack0000001c;
  undefined4 uStack_1c;
  undefined4 uStack_14;
  
  uStack00000014 = param_1;
  iStack0000001c = param_2;
  for (uStack_1c = 0; uStack_1c < *(uint *)(param_2 + 0x20); uStack_1c = uStack_1c + 1) {
    fn_82839000(**(undefined4 **)(*(int *)(param_2 + 0x24) + uStack_1c * 0xc));
    if (*(int *)(*(int *)(*(int *)(param_2 + 0x24) + uStack_1c * 0xc + 4) + 4) != 0) {
      fn_82631738(*(undefined4 *)
                         (*(int *)(*(int *)(param_2 + 0x24) + uStack_1c * 0xc + 4) + 4),
                        **(undefined4 **)(*(int *)(param_2 + 0x24) + uStack_1c * 0xc + 4));
    }
    iVar1 = *(int *)(*(int *)(*(int *)(param_2 + 0x24) + uStack_1c * 0xc) + 4);
    for (uStack_14 = 0; (int)uStack_14 < *(int *)(iVar1 + 0x20); uStack_14 = uStack_14 + 1) {
      if ((*(int *)(*(int *)(iVar1 + 0x1c) + uStack_14 * 0x10 + 0xc) == 0) &&
         (lbl_8321130C != (code *)0x0)) {
        (*lbl_8321130C)(*(undefined4 *)(*(int *)(iVar1 + 0x1c) + uStack_14 * 0x10),
                        (ulonglong)*(uint *)(iVar1 + 0x1c) +
                        ((ulonglong)uStack_14 & 0xfffffff) * 0x10 + 0xc);
      }
    }
  }
  return 0;
}

