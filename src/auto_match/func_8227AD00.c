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
extern unsigned int *auStack_318;
extern unsigned int *auStack_320;
extern unsigned int *auStack_328;
extern int fn_822315A0();
extern int fn_822794D0();
extern int fn_82279C58();
extern int fn_8266F768();
extern int fn_82671A40();
extern int fn_82673A28();
extern int fn_82A1EFC0();
extern unsigned int iStack_314;
extern unsigned int iStack_31c;
extern unsigned int iStack_324;
extern unsigned int lbl_821A86E8;
extern unsigned int lbl_821CC160;


void fn_8227AD00(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 in_r8;
  undefined4 in_r9;
  undefined4 in_r10;
  undefined4 in_stack_00000054;
  undefined4 in_stack_0000005c;
  undefined4 in_stack_00000064;
  undefined4 in_stack_0000006c;
  undefined1 auStack_328 [4];
  int iStack_324;
  undefined1 auStack_320 [4];
  int iStack_31c;
  undefined1 auStack_318 [4];
  int iStack_314;
  
  fn_822794D0(param_1,param_2,0,1,0);
  param_1[0x28d] = 0;
  uVar1 = lbl_821CC160;
  param_1[0x28e] = 0;
  param_1[0x28c] = uVar1;
  *param_1 = &lbl_821A86E8;
  param_1[0x293] = uVar1;
  param_1[0x28f] = 0;
  param_1[0x291] = in_stack_0000006c;
  param_1[0x290] = 0;
  param_1[0x292] = 0;
  param_1[0x294] = in_stack_00000064;
  param_1[0x295] = 0;
  param_1[0x296] = 0;
  param_1[0x297] = 0;
  param_1[0x298] = 0;
  param_1[0x299] = in_r8;
  param_1[0x29a] = in_r10;
  param_1[0x29b] = in_r9;
  param_1[0x29c] = in_stack_00000054;
  param_1[0x29d] = in_stack_0000005c;
  param_1[0x29e] = 0;
  param_1[0x29f] = 0xffffffff;
  param_1[0x2a0] = 0xffffffff;
  param_1[0x45a] = 0;
  param_1[0x460] = 0;
  puVar2 = (undefined4 *)fn_82279C58(auStack_318,param_1);
  fn_82671A40(*puVar2,param_1);
  if (iStack_314 != 0) {
    fn_822315A0();
  }
  puVar2 = (undefined4 *)fn_82279C58(auStack_320,param_1);
  fn_82673A28(*puVar2,0xffffffff8227bdc8,param_1);
  if (iStack_31c != 0) {
    fn_822315A0();
  }
  puVar2 = (undefined4 *)fn_82279C58(auStack_328,param_1);
  fn_8266F768(*puVar2,0x3c);
  if (iStack_324 != 0) {
    fn_822315A0();
  }
                    /* WARNING: Subroutine does not return */
  fn_82A1EFC0(param_1 + 0x2a2,0,0x6e0);
}

