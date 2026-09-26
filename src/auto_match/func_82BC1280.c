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
extern int fn_82B7BD28();
extern int fn_82BC0928();
extern int fn_82BC0A30();
extern int fn_82BC2958();
extern int fn_82BC3948();
extern int fn_82F6C420();
extern unsigned int lbl_820E3444;


undefined4 * fn_82BC1280(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar4;
  undefined8 uVar3;
  
  fn_82BC0928();
  param_1[4] = param_2;
  *param_1 = &lbl_820E3444;
  *(int *)(param_4 + 0x588) = *(int *)(param_4 + 0x588) + 1;
  if (param_3 == 1) {
    if (*(int *)(*(int *)(param_4 + 0x550) + 0x28) <= param_2) {
      *(undefined4 *)(param_4 + 0x554) = 0x1d;
                    /* WARNING: Subroutine does not return */
      fn_82F6C420(param_4 + 0x10,1);
    }
  }
  else if (param_3 == 2) {
    if (*(int *)(*(int *)(param_4 + 0x550) + 0x20) <= param_2) {
      *(undefined4 *)(param_4 + 0x554) = 0x1c;
                    /* WARNING: Subroutine does not return */
      fn_82F6C420(param_4 + 0x10,1);
    }
  }
  else if ((param_3 == 3) && (*(int *)(*(int *)(param_4 + 0x550) + 0x24) <= param_2)) {
    *(undefined4 *)(param_4 + 0x554) = 0x1e;
                    /* WARNING: Subroutine does not return */
    fn_82F6C420(param_4 + 0x10,1);
  }
  uVar1 = *(undefined4 *)(param_4 + 0x5ac);
  puVar4 = (undefined4 *)fn_82B7BD28(uVar1,0x3c4);
  *puVar4 = uVar1;
  if (puVar4 + 1 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = fn_82BC3948(puVar4 + 1,param_1,param_4);
  }
  piVar2 = *(int **)(*(int *)(param_4 + 0xab0) + 0xa4);
  (**(code **)(*piVar2 + 0x28))(piVar2,uVar3);
  fn_82BC2958(uVar3,0,param_1);
  fn_82BC0A30(param_1,uVar3);
  return param_1;
}

