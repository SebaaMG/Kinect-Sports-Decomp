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
extern int fn_8262FE50();
extern int fn_82631578();
extern int fn_82631920();
extern int fn_82639EA8();
extern int fn_8263A1B8();
extern int fn_8263A508();
extern unsigned int lbl_8320A898;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;
extern unsigned int uStack_a4;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_b4;
extern unsigned int uStack_bc;


void fn_824F46D8(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uStack_bc;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  
  iVar1 = lbl_8320A898;
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(lbl_8320A898 + 0x2ed8) = 0;
    *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x80000;
    fn_82631920(lbl_8320A898,*(undefined4 *)(param_1 + 0x1c));
    iVar1 = *(int *)(lbl_8320A898 + 0x3148);
    uStack_bc = (undefined4)(longlong)*(float *)(lbl_8320A898 + 0x3220);
    uStack_a8 = uStack_bc;
    uStack_b4 = (undefined4)(longlong)*(float *)(lbl_8320A898 + 0x3224);
    uStack_a4 = uStack_b4;
    uStack_bc = (undefined4)(longlong)*(float *)(lbl_8320A898 + 0x3218);
    uStack_b4 = (undefined4)(longlong)*(float *)(lbl_8320A898 + 0x321c);
    uStack_a0 = *(undefined4 *)(lbl_8320A898 + 0x3228);
    uStack_9c = *(undefined4 *)(lbl_8320A898 + 0x322c);
    uStack_b0 = uStack_bc;
    uStack_ac = uStack_b4;
    if (iVar1 != 0) {
      fn_8262FE50(iVar1);
    }
    iVar2 = *(int *)(lbl_8320A898 + 0x3158);
    if (iVar2 != 0) {
      fn_8262FE50(iVar2);
    }
    fn_8263A1B8(lbl_8320A898,0,*(undefined4 *)(param_1 + 0x38));
    fn_8263A508(lbl_8320A898,0);
    for (piVar3 = *(int **)(param_1 + 0xc); piVar3 != (int *)0x0; piVar3 = (int *)piVar3[1]) {
      if (*piVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        fn_82631578(lbl_8320A898,*(undefined4 *)(param_1 + 0x34));
      }
    }
    fn_8263A1B8(lbl_8320A898,0,iVar1);
    fn_8263A508(lbl_8320A898,iVar2);
    fn_82639EA8(lbl_8320A898,&uStack_b0);
  }
  return;
}

