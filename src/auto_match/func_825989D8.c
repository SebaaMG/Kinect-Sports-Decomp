extern int *piRam8326c3a4;
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
extern int fn_82522DF8();
extern int fn_825269D0();
extern int fn_82599308();
extern int fn_8259A230();
extern int fn_82A1BB18();
extern int fn_82BFE128();
extern int fn_82CE6B70();
extern int fn_82CE7300();
extern int fn_82CE7D10();
extern unsigned int *lbl_8326C3A0;
extern unsigned int lbl_83296E1C;
extern unsigned int lbl_83296E24;


void fn_825989D8(void)

{
  undefined4 *puVar2;
  undefined4 uVar3;
  longlong lVar1;
  int *piVar4;

  if (lbl_8326C3A0 != (undefined4 *)0x0) {
    (**(code **)*lbl_8326C3A0)(lbl_8326C3A0,1);
    lbl_8326C3A0 = (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)fn_82599308();
  *puVar2 = 4;
  puVar2 = (undefined4 *)fn_82522DF8(0x40);
  *puVar2 = 7;
  fn_82A1BB18();
  uVar3 = fn_8259A230();
  puVar2[1] = uVar3;
  puVar2[2] = 1;
  sync(1);
  fn_82BFE128(lbl_83296E1C,puVar2);
  puVar2 = (undefined4 *)fn_82522DF8(0x40);
  *puVar2 = 7;
  fn_82A1BB18();
  uVar3 = fn_8259A230();
  puVar2[1] = uVar3;
  puVar2[2] = 3;
  sync(1);
  fn_82BFE128(lbl_83296E24,puVar2);
  while (piVar4 = (int *)fn_82599308(), *piVar4 != 0) {
    fn_82A1BB18();
    lVar1 = fn_8259A230();
    fn_825269D0(lVar1 + 0x23,0);
  }
  fn_82CE7D10();
  (**(code **)(*piRam8326c3a4 + 8))(piRam8326c3a4,3);
  fn_82CE7300(0);
  fn_82CE6B70(piRam8326c3a4,0);
  return;
}
