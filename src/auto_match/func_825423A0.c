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
extern int fn_825428F8();
extern int fn_82543C70();
extern int fn_82637B30();
extern int fn_82637BC0();
extern int fn_82637C50();
extern int fn_82637CE0();
extern int fn_82637D70();
extern int fn_82637DE0();
extern int fn_82637E50();
extern int fn_82637EC0();
extern int fn_82637FF0();
extern unsigned int lbl_821CC160;


void fn_825423A0(double param_1,int *param_2,int param_3,int param_4,undefined8 param_5,
                  int param_6,int param_7)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  double dVar4;
  
  if (param_3 == 8) {
    iVar1 = *param_2;
    uVar3 = *(uint *)(iVar1 + 0x2934) & 0xfffffffb;
code_r0x82542530:
    *(uint *)(iVar1 + 0x2934) = uVar3;
    *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x800;
    dVar4 = (double)fn_82637C50(*param_2,6);
    if (dVar4 <= (double)lbl_821CC160) {
      if (param_4 != 0) goto code_r0x825425b0;
      fn_82637EC0(*param_2,1);
      fn_82637D70(*param_2,0);
      fn_82637DE0(*param_2);
      fn_82637E50(*param_2,7);
      fn_82637B30(*param_2,1);
    }
    else if (param_4 == 0) {
      fn_82637EC0(*param_2,1);
      fn_82637D70(*param_2,0);
      fn_82637DE0(*param_2,0xe);
      fn_82637E50(*param_2,7);
      uVar2 = fn_825428F8();
      fn_82637FF0(*param_2,uVar2);
    }
    else {
code_r0x825425b0:
      fn_82637EC0(*param_2,1);
      fn_82637D70(*param_2,0);
      fn_82637DE0(*param_2,6);
      fn_82637E50(*param_2,1);
    }
  }
  else {
    if (param_3 == 0x40) {
      iVar1 = *param_2;
      uVar3 = *(uint *)(iVar1 + 0x2934) | 4;
      goto code_r0x82542530;
    }
    if (param_3 != 4) {
      return;
    }
    iVar1 = *param_2;
    dVar4 = (double)lbl_821CC160;
    *(uint *)(iVar1 + 0x2934) = *(uint *)(iVar1 + 0x2934) | 4;
    *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x800;
    if ((dVar4 < param_1) && (param_4 == 0)) {
      fn_82637B30(*param_2,1);
      fn_82637EC0(*param_2);
      fn_82637C50(*param_2);
      fn_82637CE0(*param_2,0);
      fn_82637DE0(*param_2,0xe);
      fn_82637E50(*param_2,0);
      fn_82637BC0(*param_2);
      fn_82637D70(*param_2);
      uVar2 = fn_825428F8();
      fn_82637FF0(*param_2,uVar2);
code_r0x82542508:
      uVar2 = 0xffffffff82190800;
      goto code_r0x82542628;
    }
    if ((param_6 != 0) && (param_4 == 0)) {
      fn_82637B30(*param_2,1);
      fn_82637EC0(*param_2);
      fn_82637D70(*param_2,4);
      fn_82637DE0(*param_2,1);
      fn_82637E50(*param_2);
      fn_82637BC0(*param_2,0);
      if (param_7 == 0) {
        fn_82637C50(*param_2,1);
        uVar2 = 0;
      }
      else {
        fn_82637C50(*param_2,6);
        uVar2 = 7;
      }
      fn_82637CE0(*param_2,uVar2);
      goto code_r0x82542508;
    }
    fn_82637B30(*param_2,0);
    fn_82637EC0(*param_2);
    if (param_4 == 0) goto code_r0x82542508;
  }
  uVar2 = 0xffffffff821907f0;
code_r0x82542628:
  fn_82543C70(param_2,0x32,uVar2,1);
  return;
}

