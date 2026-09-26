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
extern int fn_82275128();
extern int fn_82292AE8();
extern int fn_82292BC0();
extern int fn_82292C30();
extern int fn_82474EA8();
extern int fn_82536070();
extern int fn_8254B438();
extern int fn_8255B1E0();
extern unsigned int lbl_821CC160;


void fn_82475F40(int param_1)

{
  int iVar1;
  double dVar2;
  
  fn_82292BC0(0,0,0);
  fn_82292C30(4);
  iVar1 = fn_82292AE8();
  if (*(int *)(iVar1 + 0x54) != 0) {
    *(undefined4 *)(iVar1 + 0x54) = 0;
    fn_82536070(0xffffffff821aa320,0xffffffff821aa314);
  }
  fn_8254B438(*(undefined4 *)(*(int *)(param_1 + 0xc0) + 0x8c8));
  fn_82474EA8(param_1 + 0x10);
  if ((*(int *)(param_1 + 8) == 1) && (*(int *)(param_1 + 0x110) != 0)) {
    iVar1 = *(int *)(*(int *)(param_1 + 0xc0) + 0x844);
    if (iVar1 != 0) {
      fn_8255B1E0((double)lbl_821CC160,iVar1,param_1 + 0x110,1,0,0,0,1);
      dVar2 = (double)*(float *)(*(int *)(iVar1 + 0x358) + 0x94);
      iVar1 = fn_82275128();
      if ((double)*(float *)(iVar1 + 0xc) < dVar2) {
        *(float *)(iVar1 + 0xc) = (float)dVar2;
      }
    }
  }
  return;
}

