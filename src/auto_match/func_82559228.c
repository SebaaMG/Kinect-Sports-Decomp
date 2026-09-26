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
extern unsigned int *auStack_2c;
extern int fn_82559368();
extern int fn_8256BF18();
extern int fn_8256CC50();
extern int fn_8259BB38();
extern int fn_8265BF48();
extern int fn_82A1E0C0();
extern int fn_82A1E2C0();
extern int fn_82A1E508();
extern int fn_82A1E650();
extern int fn_82A1E6A0();
extern unsigned int lbl_8320A898;
extern unsigned int lbl_8327FBE4;
extern unsigned int lbl_8327FBE8;
extern unsigned int lbl_8327FBF0;
extern unsigned int lbl_8327FC04;
extern unsigned int uStack_30;


void fn_82559228(void)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 uStack_30;
  uint auStack_2c [11];
  
  enforceInOrderExecutionIO();
  *(undefined4 *)(lbl_8320A898 + 0x2a88) = 0;
  lbl_8327FBF0 = fn_82A1E6A0(0,1,0,0);
  lbl_8327FBE8 = fn_82A1E6A0(0,1,0,0);
  lbl_8327FBE4 = fn_82A1E0C0(0,0x4000,0xffffffff82559588,0,4,0);
  lVar1 = fn_82A1E6A0(0,1,0,0);
  lbl_8327FC04 = (int)lVar1;
  if ((lVar1 != 0) && (lbl_8327FC04 != -1)) {
    fn_82559368(0xffffffff821c5154,0xffffffff8327fbf4,0xffffffff8327fbf8);
    fn_82A1E650(lbl_8327FC04,0xffffffffffffffff);
  }
  uVar2 = fn_8265BF48(0xffffffff821c517c,0);
  iVar3 = fn_8256BF18();
  uStack_30 = (undefined4)uVar2;
  fn_8259BB38(auStack_2c,iVar3,&uStack_30);
  uVar4 = (ulonglong)auStack_2c[0];
  if (uVar4 != *(uint *)(iVar3 + 4)) {
    fn_8256CC50(iVar3,uVar4 + 0x10,uVar4 + 0x28,uVar2);
  }
  if (lbl_8327FBE4 != 0) {
    fn_82A1E508(lbl_8327FBE4,4);
    fn_82A1E2C0(lbl_8327FBE4);
  }
  return;
}

