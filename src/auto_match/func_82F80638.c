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
extern int fn_82F69860();
extern int fn_82F698B8();
extern int fn_82F6FA38();
extern int fn_82F80590();
extern int fn_82F86930();
extern unsigned int uStack_54;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


undefined8
fn_82F80638(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 *param_6,int *param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar4;
  undefined8 uVar3;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int *piStack_58;
  undefined4 uStack_54;
  
  iVar4 = fn_82F6FA38();
  uVar1 = *(undefined4 *)(iVar4 + 0x7c);
  iVar4 = fn_82F6FA38();
  uVar2 = *(undefined4 *)(iVar4 + 0x80);
  iVar4 = fn_82F6FA38();
  *(int *)(iVar4 + 0x7c) = (int)param_1;
  iVar4 = fn_82F6FA38();
  *(undefined4 *)(iVar4 + 0x80) = param_3;
  uStack_54 = *param_6;
  uStack_5c = (undefined4)param_2;
  uStack_60 = 0xfffffffe;
  piStack_58 = param_7;
  uVar3 = fn_82F86930(param_5,param_2,0x100,&uStack_60);
  fn_82F698B8(param_7);
  iVar4 = fn_82F6FA38();
  *(undefined4 *)(iVar4 + 0x7c) = uVar1;
  iVar4 = fn_82F6FA38();
  *(undefined4 *)(iVar4 + 0x80) = uVar2;
  if ((*param_7 != 0) && (iVar4 = fn_82F69860(), iVar4 != 0)) {
    fn_82F80590(param_1,1);
    *param_7 = 0;
  }
  return uVar3;
}

