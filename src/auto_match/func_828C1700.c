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
extern unsigned int *auStack_20;
extern int fn_825089A0();
extern int fn_828C0300();
extern int fn_82A1EF78();
extern unsigned int lbl_8202604C;


undefined4 * fn_828C1700(undefined4 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined1 auStack_20 [8];
  
  *param_1 = &lbl_8202604C;
  param_1[2] = 0;
  piVar1 = (int *)fn_825089A0();
  uVar2 = (**(code **)(*piVar1 + 0x24))(piVar1,0x10,2);
  param_1[1] = uVar2;
  *(undefined4 *)uVar2 = uVar2;
  *(undefined4 *)(param_1[1] + 4) = param_1[1];
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  piVar1 = (int *)fn_825089A0();
  uVar2 = (**(code **)(*piVar1 + 0x24))(piVar1,0xc,2);
  param_1[0xb] = uVar2;
  *(undefined4 *)uVar2 = uVar2;
  *(undefined4 *)(param_1[0xb] + 4) = param_1[0xb];
  fn_828C0300(param_1 + 0xe,auStack_20,auStack_20[0]);
  uVar2 = fn_82A1EF78(2);
  param_1[10] = uVar2;
  return param_1;
}

