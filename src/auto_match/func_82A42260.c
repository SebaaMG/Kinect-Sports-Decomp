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
extern int fn_82A1BB18();
extern int fn_82A3F6F0();
extern int fn_82A40018();
extern int fn_82A40368();
extern int fn_82A403F0();
extern int fn_82A406A0();
extern int fn_82A40AD8();
extern int fn_82A40BA8();
extern int fn_82A411B8();
extern int fn_82A412D8();
extern int fn_82A41DA0();
extern int fn_82A41FD0();
extern int fn_82A47B28();
extern int fn_82A4F4E0();
extern int fn_82BFE128();
extern unsigned int lbl_82089688;
extern unsigned int lbl_820896E8;
extern unsigned int lbl_820896F8;
extern unsigned int lbl_82089708;


void fn_82A42260(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  *param_1 = &lbl_82089708;
  param_1[1] = &lbl_820896F8;
  piVar4 = param_1 + 0xb;
  param_1[2] = &lbl_820896E8;
  (**(code **)(param_1[0xb] + 8))(piVar4);
  fn_82A1BB18();
  if (param_1[0x2c] != 0) {
    fn_82A406A0(param_1,1);
    if (param_1[0x27] != 0) {
      fn_82A4F4E0();
      param_1[0x27] = 0;
    }
    if (param_1[100] != 0) {
      while( true ) {
        iVar1 = fn_82A40AD8(param_1 + 0x2f);
        if (iVar1 == 0) break;
        if ((*(uint *)(iVar1 + 0x3c) & 0x10) != 0) {
          for (piVar3 = (int *)param_1[0x80]; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[1]) {
            if (*piVar3 == iVar1) goto LAB_82a42328;
          }
          piVar3 = (int *)0x0;
LAB_82a42328:
          fn_82A47B28(param_1 + 0x7a,piVar3);
        }
        (**(code **)(*(int *)(iVar1 + 4) + 0x50))(iVar1 + 4);
        (**(code **)(*(int *)(iVar1 + 4) + 0x4c))(iVar1 + 4,0);
        fn_82A4F4E0();
      }
    }
    while( true ) {
      iVar1 = fn_82A40BA8(param_1 + 0x70);
      if (iVar1 == 0) break;
      fn_82BFE128(param_1[0xfa8],*(undefined4 *)(iVar1 + 0x2c));
      fn_82BFE128(param_1[0xfa8],*(undefined4 *)(iVar1 + 0x30));
      while( true ) {
        iVar2 = fn_82A40BA8(iVar1 + 4);
        if (iVar2 == 0) break;
        (**(code **)(*(int *)(iVar2 + 4) + 0x50))(iVar2 + 4);
        (**(code **)(*(int *)(iVar2 + 4) + 0x4c))(iVar2 + 4,0);
        fn_82A4F4E0();
      }
      fn_82A411B8(iVar1 + 4);
      fn_82A4F4E0(iVar1);
    }
    if (param_1[0x6e] != 0) {
      while( true ) {
        iVar1 = fn_82A40BA8(param_1 + 0x66);
        if (iVar1 == 0) break;
        (**(code **)(*(int *)(iVar1 + 4) + 0x50))(iVar1 + 4);
        (**(code **)(*(int *)(iVar1 + 4) + 0x4c))(iVar1 + 4,0);
        fn_82A4F4E0();
      }
    }
    fn_82A403F0(param_1);
    fn_82A40368(param_1);
  }
  *param_1 = 0;
  (**(code **)(*piVar4 + 0x14))(piVar4);
  fn_82A41FD0(param_1 + 0xfaa);
  fn_82A3F6F0(param_1 + 0xfa8);
  fn_82A41DA0(param_1 + 0x94);
  fn_82A411B8(param_1 + 0x86);
  fn_82A411B8(param_1 + 0x7a);
  fn_82A411B8(param_1 + 0x70);
  fn_82A411B8(param_1 + 0x66);
  fn_82A412D8(param_1 + 0x2f);
  fn_82A40018(param_1 + 0x1d);
  fn_82A40018(param_1 + 0x14);
  fn_82A40018(piVar4);
  param_1[2] = &lbl_82089688;
  return;
}

