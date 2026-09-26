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
extern int fn_82F6ACF0();
extern int fn_82F6BC30();
extern int fn_82F6BDD4();
extern int fn_82F6BE24();
extern int fn_82F71CD0();
extern unsigned int iStack00000014;
extern unsigned int lbl_8329F734;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;


int fn_82F6BCB0(int param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  int iStack00000014;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  uStack_3c = 0;
  uStack_38 = 0;
  iStack00000014 = param_1;
  fn_82F71CD0(1);
  uVar3 = 0xffffffff8329f738;
  for (iVar4 = 0; iVar4 < *(int *)uVar3; iVar4 = iVar4 + 1) {
    iVar2 = *(int *)(iVar4 * 4 + lbl_8329F734);
    if ((iVar2 != 0) && ((*(uint *)(iVar2 + 0xc) & 0x83) != 0)) {
      fn_82F6ACF0(iVar4);
      uVar1 = *(uint *)(*(int *)(iVar4 * 4 + lbl_8329F734) + 0xc);
      uVar3 = (ulonglong)uVar1 & 0x83;
      if ((int)uVar3 != 0) {
        if (param_1 == 1) {
          iVar2 = fn_82F6BC30();
          if (iVar2 != -1) {
            uStack_3c = uStack_3c + 1;
          }
        }
        else if (((param_1 == 0) && ((uVar1 & 2) != 0)) &&
                (iVar2 = fn_82F6BC30(), iVar2 == -1)) {
          uStack_38 = -1;
        }
      }
      fn_82F6BE24();
    }
  }
  fn_82F6BDD4();
  if (iStack00000014 != 1) {
    uStack_3c = uStack_38;
  }
  return uStack_3c;
}

