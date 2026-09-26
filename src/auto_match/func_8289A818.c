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
extern int fn_8236D750();
extern int fn_82899478();
extern unsigned int lbl_820239B4;
extern unsigned int lbl_82023A58;
extern unsigned int lbl_82023B40;


undefined4 * fn_8289A818(undefined4 *param_1,undefined8 param_2,char param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  
  *param_1 = &lbl_82023A58;
  lVar4 = 4;
  *(undefined1 *)(param_1 + 1) = 0;
  iVar3 = 0;
  puVar2 = param_1 + 2;
  do {
    *(bool *)((int)param_1 + iVar3 + 5) = param_3 == '\0';
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 1;
    *puVar2 = 0;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  *param_1 = &lbl_82023B40;
  param_1[7] = &lbl_820239B4;
  param_1[8] = 9;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  uVar1 = fn_8236D750(param_2);
  fn_82899478(param_1 + 7,uVar1,0);
  return param_1;
}

