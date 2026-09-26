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
extern int fn_8225C590();
extern int fn_8225DBF8();
extern int fn_82292450();
extern int fn_823577F0();
extern int fn_824BDE68();
extern int fn_82512B70();
extern unsigned int lbl_821B2420;


void fn_823569A8(int param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined **appuStack_40 [4];
  undefined ***pppuStack_30;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    fn_824BDE68(*(int *)(param_1 + 0x30),0);
    piVar1 = *(int **)(param_1 + 0x30);
    *(undefined4 *)(*(int *)(*piVar1 + 0x14) + 0x20) = 0;
    piVar1[0x144] = 0;
    if (piVar1[0x142] != 0) {
      fn_82292450(piVar1[0x142],1);
    }
    piVar1[0x142] = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  fn_823577F0(param_1 + 0x3cc,param_1 + 0x3d4);
  if (*(int *)(param_1 + 0x3f0) != 0) {
    fn_82512B70();
    *(undefined4 *)(param_1 + 0x3f0) = 0;
  }
  pppuStack_30 = appuStack_40;
  appuStack_40[0] = &lbl_821B2420;
  uVar2 = fn_8225C590();
  fn_8225DBF8(uVar2,appuStack_40);
  return;
}

