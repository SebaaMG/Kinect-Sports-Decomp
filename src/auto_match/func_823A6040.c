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
extern int fn_82359420();
extern int fn_8239FF60();
extern int fn_823A6168();
extern int fn_823A6490();
extern int fn_823A65E0();
extern int fn_823A67E8();
extern int fn_82508078();
extern unsigned int lbl_821922D0;


void fn_823A6040(undefined8 param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  double dVar3;
  
  fn_823A6168();
  piVar1 = *(int **)(*(int *)(param_2 + 8) + 0x2e0);
  uVar2 = piVar1[0x27];
  if (uVar2 == 0) {
    if (*(int *)(param_2 + 0x20) == 0) {
      dVar3 = (double)(**(code **)(*piVar1 + 0xa0))(piVar1);
      if ((double)lbl_821922D0 < dVar3) {
        fn_8239FF60(*(undefined4 *)(*(int *)(param_2 + 8) + 0x2dc),0x1b);
      }
      fn_82508078(*(undefined4 *)(*(int *)(param_2 + 8) + 0xa4),0xffffffff821b4f84,0);
    }
    *(undefined4 *)(param_2 + 0x20) = 1;
  }
  else {
    *(undefined4 *)(param_2 + 0x20) = 0;
    if (piVar1[0x28] + 1U < uVar2) {
      fn_82508078(*(undefined4 *)(*(int *)(param_2 + 8) + 0xa4),0xffffffff821b4f64,0);
    }
  }
  if (piVar1[0x1a] != 0) {
    fn_82359420(param_1,*(int *)(param_2 + 8),
                      (ulonglong)*(uint *)(*(int *)(param_2 + 8) + 0x174) + 0x84c);
  }
  fn_823A6490(param_2);
  fn_823A65E0(param_2);
  fn_823A67E8(param_1,param_2);
  return;
}

