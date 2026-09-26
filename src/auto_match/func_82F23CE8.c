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
extern int fn_82F0F9A0();
extern int fn_82F23A50();
extern int fn_82F23C88();


void fn_82F23CE8(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  longlong lVar5;
  
  if ((*(int *)(param_1 + 0x630) == 0) ||
     ((*(int *)(param_1 + 0xaf0) != 0 && (*(int *)(param_1 + 0xaf0) != 4)))) {
    iVar1 = *(int *)(param_1 + 0xaf0);
    if ((iVar1 != 0) && (iVar1 != 4)) {
      if (iVar1 == 2) {
        uVar2 = 0;
        if (*(int *)(param_1 + 0x2d8) != 0) {
          piVar3 = (int *)(*(int *)(param_1 + 0x1e54) + 4);
          do {
            lVar5 = 6;
            piVar4 = piVar3;
            do {
              if (0 < *piVar4) {
                *piVar4 = 1;
              }
              piVar4 = piVar4 + 1;
              lVar5 = lVar5 + -1;
            } while (lVar5 != 0);
            uVar2 = uVar2 + 1;
            piVar3 = piVar3 + 0x45;
          } while (uVar2 < *(uint *)(param_1 + 0x2d8));
        }
      }
      fn_82F23A50(param_1);
      fn_82F23C88(param_1);
      return;
    }
    fn_82F0F9A0(param_1,0xd);
  }
  return;
}

