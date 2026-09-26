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
extern int fn_824550A8();
extern int fn_824556F0();
extern int fn_82508078();
extern int fn_8252CAF8();
extern int fn_82555A88();
extern int fn_827F6210();
extern int fn_827F62A8();
extern int fn_827F6318();
extern int fn_827F6430();
extern unsigned int lbl_821BA71C;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831D37E8;


void fn_82363388(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined **ppuVar4;
  double dVar5;
  
  fn_824556F0(param_1 + 0x45c);
  *(undefined4 *)(*(int *)(param_1 + 0x6ac) + 0x1d0) = 0;
  fn_8252CAF8(*(undefined4 *)(param_1 + 0x6ac),1,1);
  fn_824550A8(param_1 + 0x6a8);
  fn_82508078(*(undefined4 *)(param_1 + 0x3f4),lbl_821BA71C,0);
  ppuVar4 = &lbl_831D37E8;
  uVar1 = *(uint *)(*(int *)(*(int *)(param_1 + 0x210) + 0x3e4) + 0x8c0);
  dVar5 = (double)lbl_821CC160;
  do {
    iVar3 = fn_82555A88((ulonglong)uVar1 + 0x98,*ppuVar4);
    if ((iVar3 != 0) && (iVar3 = *(int *)(iVar3 + 0x144), iVar3 != 0)) {
      iVar2 = **(int **)(iVar3 + 400);
      if (*(int *)(iVar2 + 0x110) != 0) {
        fn_827F62A8(dVar5);
        fn_827F6318(*(undefined4 *)(iVar2 + 0x110));
        fn_827F6430(*(undefined4 *)(iVar2 + 0x110));
      }
      if (*(int *)(**(int **)(iVar3 + 400) + 0x110) != 0) {
        fn_827F6210(dVar5);
      }
    }
    ppuVar4 = ppuVar4 + 1;
  } while (ppuVar4 != (undefined **)0x831d3820);
  return;
}

