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
extern unsigned int *auStack_40;
extern int fn_82320B00();
extern int fn_82320BE0();
extern int fn_82528FA8();
extern int fn_827F6210();
extern unsigned int lbl_821916FC;
extern unsigned int lbl_821CA1A0;
extern unsigned int lbl_821CA1A4;
extern unsigned int lbl_821CA1A8;
extern unsigned int lbl_821CA460;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


undefined4 *
fn_82320900(undefined4 *param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
             undefined4 param_5)

{
  undefined4 *puVar1;
  int in_r0;
  int iVar2;
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined1 auStack_40 [64];
  
  *param_1 = *param_3;
  puVar1 = (undefined4 *)((uint)(param_1 + 4) & 0xfffffff0);
  *puVar1 = in_register_00010010;
  puVar1[1] = in_register_00010014;
  puVar1[2] = in_register_00010018;
  puVar1[3] = in_vr1;
  uStack_48 = lbl_821CA1A8;
  uStack_4c = lbl_821CA1A4;
  uStack_50 = lbl_821CA1A0;
  puVar1 = (undefined4 *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  iVar2 = fn_82528FA8((double)lbl_821CA460,param_4,param_2,auStack_40,&uStack_50,uStack_48,0);
  param_1[10] = param_5;
  param_1[0xc] = (int)param_4;
  param_1[8] = iVar2;
  param_1[9] = 0;
  param_1[0xb] = 1;
  if ((*(int *)(iVar2 + 400) != 0) &&
     (*(int *)(**(int **)(*(int *)(iVar2 + 400) + 400) + 0x110) != 0)) {
    fn_827F6210((double)lbl_821916FC);
  }
  fn_82320B00(param_1,1);
  fn_82320BE0(param_1,1);
  *(undefined4 *)(param_1[8] + 0xb50) = 1;
  return param_1;
}

