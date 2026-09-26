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
extern int fn_82E50CB8();
extern int fn_82E50F10();
extern int fn_82F63CA0();


undefined8 fn_82E54F10(int param_1,uint param_2,short param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  
  uVar4 = 0;
  fn_82E50CB8(param_1 + 8);
  if (param_2 < *(uint *)(param_1 + 0x58)) {
    if (*(uint *)(param_1 + 0x58) <= param_2) {
      uVar4 = 0xffffffff8000ffff;
      goto LAB_82e54fa0;
    }
    piVar1 = *(int **)(param_2 * 4 + *(int *)(param_1 + 0x54));
    uVar3 = 0;
    if (piVar1[1] != 0) {
      iVar2 = 0;
      do {
        if (*(short *)(iVar2 + *piVar1) == param_3) {
          if (uVar3 < piVar1[2] - 1U) {
            iVar2 = uVar3 * 2 + *piVar1;
            fn_82F63CA0(iVar2,iVar2 + 2,(piVar1[2] - uVar3) - 1 & 0x7fffffff);
          }
          iVar2 = piVar1[1];
          piVar1[1] = iVar2 + -1;
          *(undefined2 *)((iVar2 + -1) * 2 + *piVar1) = 0;
          goto LAB_82e54fa0;
        }
        uVar3 = uVar3 + 1;
        iVar2 = iVar2 + 2;
      } while (uVar3 < (uint)piVar1[1]);
    }
  }
  uVar4 = 0xffffffff80070057;
LAB_82e54fa0:
  fn_82E50F10(param_1 + 8);
  return uVar4;
}

