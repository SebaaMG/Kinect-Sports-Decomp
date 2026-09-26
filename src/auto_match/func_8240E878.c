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
extern int fn_823B78E0();
extern int fn_824106F8();
extern int fn_8251FA58();
extern int fn_82529320();
extern int fn_82536288();
extern int fn_82573868();
extern int fn_82575DF0();
extern int fn_82D89B48();
extern unsigned int lbl_821B5BEC;
extern unsigned int lbl_821B8244;


void fn_8240E878(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &lbl_821B8244;
  if (param_1[0x99] != 0) {
    fn_82575DF0(*(undefined4 *)(*(int *)(param_1[10] + 0x4c) + 0x93c));
    param_1[0x99] = 0;
  }
  if (*(int *)(param_1[10] + 0x4c) != 0) {
    fn_824106F8(param_1,0);
  }
  if (param_1[0x96] != 0) {
    fn_82573868(param_1[10],param_1 + 0x7c);
  }
  if (param_1[0x9c] != 0) {
    fn_82D89B48(*(undefined4 *)(param_1[10] + 0x7c0));
    piVar1 = (int *)param_1[0x9c];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xc))(piVar1,1);
    }
    param_1[0x9c] = 0;
  }
  fn_82529320(param_1[10],0);
  param_1[10] = 0;
  if (param_1[0x35] != 0) {
    fn_8251FA58();
    param_1[0x35] = 0;
  }
  if ((undefined4 *)param_1[6] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[6])();
  }
  fn_82536288(param_1 + 6);
  *param_1 = &lbl_821B5BEC;
  if (param_1[1] != 0) {
    fn_823B78E0(param_1[1],param_1);
  }
  return;
}

