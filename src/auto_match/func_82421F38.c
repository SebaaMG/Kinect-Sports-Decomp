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
#define ZEXT48(x) ((U64)((U32)(x)))
extern int fn_82529508();
extern int fn_82529A38();
extern int fn_82558210();
extern int fn_82587AC0();
extern int fn_827F6308();
extern float lbl_821916FC;
extern unsigned int lbl_821CC160;
extern unsigned int stack0x00000000;
extern U64 storeVectorElementWordIndexed();


void fn_82421F38(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 in_vs32 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  
  uVar2 = ZEXT48(&stack0x00000000);
  *param_1 = param_2;
  fn_82529508(uVar2 - 0x5f0);
  uVar1 = storeVectorElementWordIndexed(in_vs32,0,uVar2 - 0x558);
  *(undefined4 *)(uVar2 - 0x558) = uVar1;
  storeVectorElementWordIndexed(in_vs45,uVar2 - 0x558,4);
  storeVectorElementWordIndexed(in_vs44,uVar2 - 0x558,8);
  fn_82558210(uVar2 - 0x5f0,0x19);
  uVar3 = fn_82587AC0(uVar2 - 0x5a5);
  iVar4 = fn_82529A38(uVar3,uVar2 - 0x5f0,0);
  param_1[1] = iVar4;
  if ((*(int *)(iVar4 + 400) != 0) &&
     (iVar4 = *(int *)(**(int **)(*(int *)(iVar4 + 400) + 400) + 0x110), iVar4 != 0)) {
    fn_827F6308(iVar4,1);
  }
  if (*(int *)(param_1[1] + 400) != 0) {
    *(undefined4 *)(**(int **)(*(int *)(param_1[1] + 400) + 400) + 0x118) = 1;
  }
  uVar1 = lbl_821CC160;
  *(float *)(param_1[1] + 0x2f0) = *(float *)(param_1[1] + 0x2f0) * lbl_821916FC;
  param_1[6] = uVar1;
  param_1[2] = 0;
  param_1[7] = uVar1;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}

