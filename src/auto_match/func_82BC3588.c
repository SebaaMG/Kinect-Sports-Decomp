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
extern int fn_82BBFDD0();
extern int fn_82BBFFC8();
extern int fn_82BC0088();


void fn_82BC3588(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  ulonglong uVar4;
  
  *(uint *)(param_1 + 0xe4) = *(uint *)(param_1 + 0xe4) & 0xfffffffe;
  fn_82BBFDD0();
  if ((*(uint *)(param_1 + 0xe4) >> 1 & 1) != 0) {
    uVar4 = 0;
    iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x3b8) + 0xab0) + 0x60);
    if (*(int *)(iVar1 + 4) != 0) {
      iVar3 = 0;
      if (*(int *)(iVar1 + 4) == 0) {
        piVar2 = (int *)fn_82BC0088(iVar1,0);
        goto LAB_82bc35f4;
      }
      do {
        piVar2 = (int *)(*(int *)(iVar1 + 8) + iVar3);
LAB_82bc35f4:
        if (*piVar2 == param_1) {
          fn_82BBFFC8(iVar1,uVar4);
        }
        uVar4 = uVar4 + 1;
        iVar3 = iVar3 + 4;
      } while ((uVar4 & 0xffffffff) < (ulonglong)*(uint *)(iVar1 + 4));
    }
  }
  return;
}

