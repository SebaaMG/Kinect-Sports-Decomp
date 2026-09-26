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
extern int fn_824F5A20();
extern int fn_82522D98();
extern int fn_8265C9E0();


void fn_823C5598(int param_1,int param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (param_2 == 0) {
    uVar4 = 0;
    *(undefined4 *)(param_1 + 0x2b4) = 0;
  }
  else {
    *(int *)(param_1 + 0x2b4) = param_2 + 0x81c;
    iVar1 = *(int *)(param_2 + 0xd54);
    if (*(int *)(iVar1 + 0x38) == 0) {
      uVar4 = *(undefined4 *)(param_2 + 0x93c);
      uVar2 = fn_8265C9E0(0x24);
      if ((uVar2 & 0xffffffff) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = fn_824F5A20(uVar2,uVar4);
      }
      *(int *)(iVar1 + 0x38) = iVar3;
      if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        fn_82522D98(8);
      }
    }
    uVar4 = *(undefined4 *)(iVar1 + 0x38);
  }
  *(undefined4 *)(param_1 + 0x360) = uVar4;
  return;
}

