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
extern int fn_82CE4040();
extern int fn_82CE5410();
extern int fn_82CEFBD0();
extern int fn_82D83D30();
extern int fn_82D841E0();
extern int fn_82D84258();
extern unsigned int lbl_8214162C;
extern unsigned int lbl_82141EE8;
extern unsigned int lbl_8214227C;
extern unsigned int lbl_82145254;
extern unsigned int lbl_82145280;
extern unsigned int lbl_8214529C;
extern unsigned int lbl_821452AC;
extern unsigned int lbl_821452C8;
extern unsigned int lbl_821452D4;


undefined4 * fn_82DEA840(undefined4 *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar2;
  ulonglong uVar1;
  undefined4 uVar3;
  
  *(undefined2 *)((int)param_1 + 6) = 1;
  param_1[2] = &lbl_82145254;
  param_1[3] = &lbl_82141EE8;
  param_1[4] = &lbl_8214162C;
  param_1[5] = &lbl_8214227C;
  param_1[6] = (int)param_2;
  param_1[8] = param_3;
  *param_1 = &lbl_821452D4;
  param_1[3] = &lbl_821452AC;
  param_1[2] = &lbl_821452C8;
  param_1[4] = &lbl_8214529C;
  param_1[5] = &lbl_82145280;
  fn_82CE4040(param_1);
  fn_82D84258(param_2,param_1 + 2);
  fn_82D841E0(param_2,param_1 + 4);
  fn_82D83D30(param_2,param_1 + 5);
  iVar2 = fn_82CE5410();
  uVar1 = (**(code **)(**(int **)(iVar2 + 0x10) + 4))(*(int **)(iVar2 + 0x10),0x1c);
  if ((uVar1 & 0xffffffff) == 0) {
    param_1[7] = 0;
  }
  else {
    uVar3 = fn_82CEFBD0(uVar1,1);
    param_1[7] = uVar3;
  }
  return param_1;
}

