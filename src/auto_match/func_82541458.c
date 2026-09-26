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
extern int fn_82637B30();
extern int fn_82637BC0();
extern int fn_82637C50();
extern int fn_82637CE0();
extern int fn_82637D70();
extern int fn_82637DE0();
extern int fn_82637E50();
extern int fn_82637EC0();
extern int fn_82637FF0();
extern unsigned int lbl_82195644;


void fn_82541458(int *param_1,undefined8 param_2,int param_3,longlong param_4)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  double dVar4;
  
  iVar1 = *param_1;
  *(uint *)(iVar1 + 0x293c) = *(uint *)(iVar1 + 0x293c) | 0x10;
  *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x200;
  iVar1 = *param_1;
  *(undefined1 *)(iVar1 + 0x293c) = 0xaa;
  *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x200;
  fn_82637B30(*param_1,1);
  fn_82637EC0(*param_1);
  dVar4 = (double)fn_82637BC0(*param_1,0);
  if (param_3 == 0x40) {
    uVar3 = (longlong)(dVar4 * (double)lbl_82195644) & 0xffffffff;
    if (uVar3 < 0x100) {
      uVar3 = ((((longlong)(dVar4 * (double)lbl_82195644) & 0xffU) << 8 | 0xffff0000 | uVar3) &
              0xffffff) << 8 | uVar3;
    }
    else {
      uVar3 = 0xffffffffffffffff;
    }
    fn_82637FF0(*param_1,uVar3);
    fn_82637C50(*param_1,0xc);
    uVar2 = 0xd;
  }
  else {
    fn_82637C50(*param_1,1);
    uVar2 = 0;
  }
  fn_82637CE0(*param_1,uVar2);
  fn_82637D70(*param_1,-(param_4 == 0) & 4);
  fn_82637DE0(*param_1,6);
  fn_82637E50(*param_1,1);
  return;
}

