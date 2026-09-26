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
extern int fn_828ACA08();
extern int fn_828D47D0();
extern int fn_828E0EE0();


void fn_828E0FD0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5,char *param_6,undefined8 param_7,undefined1 *param_8)

{
  undefined4 uVar2;
  longlong lVar1;
  undefined1 uVar3;
  char *in_stack_00000054;
  undefined4 *in_stack_0000005c;
  char *in_stack_00000064;
  char *in_stack_0000006c;
  
  fn_828E0EE0(param_1,0,param_2,0x24);
  fn_828E0EE0(param_1,1,param_3,8);
  fn_828E0EE0(param_1,2,param_4,0x10);
  uVar2 = fn_828D47D0(param_1,5,0);
  *param_5 = uVar2;
  lVar1 = fn_828D47D0(param_1,6,0);
  *param_6 = '\x01' - (lVar1 == 0);
  uVar2 = fn_828D47D0(param_1,7,0);
  fn_828ACA08(param_7,uVar2);
  uVar3 = fn_828D47D0(param_1,8,0);
  *param_8 = uVar3;
  lVar1 = fn_828D47D0(param_1,9,0);
  *in_stack_00000054 = '\x01' - (lVar1 == 0);
  uVar2 = fn_828D47D0(param_1,10,0);
  *in_stack_0000005c = uVar2;
  lVar1 = fn_828D47D0(param_1,0xb,0);
  *in_stack_00000064 = '\x01' - (lVar1 == 0);
  lVar1 = fn_828D47D0(param_1,0xc,0);
  *in_stack_0000006c = '\x01' - (lVar1 == 0);
  return;
}

