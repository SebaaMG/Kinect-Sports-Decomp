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
extern int fn_8262FEC8();
extern int fn_82631578();
extern int fn_82639F78();
extern int fn_82BFFC08();


void fn_82C013D0(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x38) != 0) {
    fn_82639F78(*(int *)(param_1 + 0x38),0,0,0,0,1);
                    /* WARNING: Subroutine does not return */
    fn_82631578(*(undefined4 *)(param_1 + 0x38),0);
  }
  uVar2 = 0x48;
  do {
    uVar3 = 0;
    do {
      iVar1 = (uVar2 + uVar3) * 4;
      if (*(int *)(iVar1 + param_1) != 0) {
        fn_8262FEC8();
        *(undefined4 *)(iVar1 + param_1) = 0;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 3);
    uVar2 = uVar2 + 3;
  } while (uVar2 < 0x51);
  if (*(int *)(param_1 + 0x144) != 0) {
    fn_8262FEC8();
    *(undefined4 *)(param_1 + 0x144) = 0;
  }
  if (*(int *)(param_1 + 0x148) != 0) {
    fn_8262FEC8();
    *(undefined4 *)(param_1 + 0x148) = 0;
  }
  fn_82BFFC08(param_1);
  return;
}

