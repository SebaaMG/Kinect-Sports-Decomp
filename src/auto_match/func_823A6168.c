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
extern int fn_8229F910();
extern int fn_822A02D8();
extern int fn_8239FF60();
extern int fn_82508078();
extern int fn_82535298();
extern int fn_82536288();
extern unsigned int iStack_2c;
extern unsigned int iStack_30;
extern unsigned int lbl_821922D0;
extern unsigned int lbl_821CA460;


void fn_823A6168(int param_1)

{
  int *piVar1;
  int iVar3;
  undefined8 uVar2;
  double dVar4;
  int iStack_30;
  int iStack_2c;
  longlong alStack_28 [2];
  
  piVar1 = *(int **)(*(int *)(param_1 + 8) + 0x2e0);
  iVar3 = (**(code **)(*piVar1 + 0xa4))(piVar1);
  if (iVar3 != 0) {
    iStack_30 = *(int *)(param_1 + 0xc);
    iStack_30 = fn_82535298(&iStack_30,
                                  *(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 0x174) + 0x84c),
                                  0xffffffff83296bc0,0xffffffff83296bd0);
    fn_82536288(&iStack_30);
    dVar4 = (double)(**(code **)(*piVar1 + 0xa0))(piVar1);
    if ((double)lbl_821922D0 < dVar4) {
      iVar3 = *(int *)(*(int *)(param_1 + 8) + 0xa0);
      if ((iVar3 == 0) || (*(int *)(iVar3 + 0x40) != 1)) {
        fn_8239FF60(*(undefined4 *)(*(int *)(param_1 + 8) + 0x2dc),0x1c);
      }
    }
    fn_82508078(*(undefined4 *)(*(int *)(param_1 + 8) + 0xa4),0xffffffff821b4f9c,0);
    *(undefined4 *)(param_1 + 0x24) = 1;
    *(undefined4 *)(param_1 + 0x2c) = lbl_821CA460;
    uVar2 = (**(code **)(*piVar1 + 0xa8))(piVar1,0);
    iVar3 = *(int *)(param_1 + 8);
    fn_822A02D8((double)*(float *)(*(int *)(iVar3 + 0x2d8) + 0x168),uVar2,alStack_28,&iStack_30,
                 &iStack_2c);
    alStack_28[0] = (longlong)iStack_2c;
    fn_8229F910((double)(longlong)iStack_30,(double)alStack_28[0],
                      *(undefined4 *)(*(int *)(iVar3 + 0xd4) + 0xc),0xffffffff821b5094);
  }
  return;
}

