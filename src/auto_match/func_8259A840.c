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
extern int fn_823AB478();
extern int fn_82522D98();
extern int fn_8259C5D8();
extern int fn_8259C738();
extern int fn_82A1BB18();
extern int fn_82A264D0();
extern unsigned int lbl_83265988;


undefined8 fn_8259A840(int param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int aiStack_50 [20];
  
  lVar1 = fn_82A1BB18();
  fn_8259C5D8(param_1 + 0x60,1,lVar1 + 1);
  aiStack_50[1] = 0;
  iVar3 = *(int *)(param_1 + 0x70);
  if (*(int *)(param_1 + 0x70) == 0) {
    iVar3 = lbl_83265988;
  }
  uVar2 = fn_823AB478(iVar3);
  iVar3 = fn_82A264D0(uVar2,*(undefined4 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0x94),0,
                          999,aiStack_50 + 2,aiStack_50);
  if ((iVar3 == 0) && (aiStack_50[0] != 0)) {
                    /* WARNING: Subroutine does not return */
    fn_82522D98(aiStack_50[2]);
  }
  fn_82A1BB18();
  fn_8259C738(param_1 + 0x60);
  return 0;
}

