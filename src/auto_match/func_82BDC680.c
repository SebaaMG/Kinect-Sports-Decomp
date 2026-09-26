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
extern int fn_8265C990();
extern int fn_82BD7C38();


void fn_82BDC680(int param_1)

{
  uint uVar1;
  int *piVar2;
  
  if (param_1 != 0) {
    uVar1 = 0;
    if (*(int *)(param_1 + 0x88) != 0) {
      piVar2 = (int *)(param_1 + 0x7c);
      do {
        fn_82BD7C38(piVar2[-0xb],0,0,0);
        if (*piVar2 != 0) {
          fn_8265C990(*piVar2,0x618a0009);
          *piVar2 = 0;
        }
        if (piVar2[-9] != 0) {
          fn_8265C990(piVar2[-9],0x618a0003);
          piVar2[-9] = 0;
        }
        uVar1 = uVar1 + 1;
        piVar2 = piVar2 + 1;
      } while (uVar1 < *(uint *)(param_1 + 0x88));
    }
    if (*(int *)(param_1 + 0x60) != 0) {
      fn_8265C990(*(int *)(param_1 + 0x60),0x618a0003);
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
    if (*(int *)(param_1 + 0x84) != 0) {
      fn_8265C990(*(int *)(param_1 + 0x84),0x618a0009);
      *(undefined4 *)(param_1 + 0x84) = 0;
    }
    if (*(int *)(param_1 + 8) != 0) {
      fn_8265C990(*(int *)(param_1 + 8),0x608a2002);
      *(undefined4 *)(param_1 + 8) = 0;
    }
    fn_8265C990(param_1,0x618a800d);
  }
  return;
}

