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
extern int fn_8265CA20();
extern int fn_828142D8();
extern int fn_82814BF0();
extern int fn_82815198();
extern int fn_8281FDF0();
extern int fn_828201D0();
extern int (*lbl_8320A4F8)();


void fn_82814F70(int param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  uint *puVar4;
  int aiStack_30 [12];
  
  if (param_1 != 0) {
    cVar2 = fn_8281FDF0(param_1,0xffffffff8201e08c);
    if (cVar2 != '\0') {
      fn_82814BF0(param_1);
    }
    iVar1 = *(int *)(param_1 + 0x80);
    if (iVar1 != 0) {
      fn_82815198(iVar1);
      fn_8265CA20(iVar1);
    }
    fn_828201D0(param_1);
    if (((*(uint *)(param_1 + 0x10) & 0x100) != 0) &&
       (*(char *)(*(int *)(param_1 + 0x1c) + 0x51) != '\0')) {
      uVar3 = 0;
      do {
        puVar4 = (uint *)(uVar3 * 0x21 + *(int *)(param_1 + 0x30));
        if (*(int *)((int)puVar4 + 0xd) != 0) {
          fn_828142D8((ulonglong)*(uint *)(param_1 + 0x34) + (ulonglong)*puVar4,aiStack_30);
          if (aiStack_30[0] != 0) {
            (**(code **)(aiStack_30[0] + 0x10))
                      (*(undefined4 *)(param_1 + 0x18),*(undefined4 *)((int)puVar4 + 0xd));
          }
        }
        uVar3 = uVar3 + 1 & 0xff;
      } while (uVar3 < *(byte *)(*(int *)(param_1 + 0x1c) + 0x51));
    }
    if ((*(uint *)(param_1 + 0x10) & 0x20) != 0) {
      (*lbl_8320A4F8)(*(undefined4 *)(param_1 + 0x18),
                      *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x5c));
      if (*(int *)(*(int *)(param_1 + 0x1c) + 0x70) != 0) {
        (*lbl_8320A4F8)(*(undefined4 *)(param_1 + 0x18));
      }
    }
    if ((*(uint *)(param_1 + 0x10) & 0x10) != 0) {
      (*lbl_8320A4F8)(*(undefined4 *)(param_1 + 0x18),param_1);
    }
  }
  return;
}

