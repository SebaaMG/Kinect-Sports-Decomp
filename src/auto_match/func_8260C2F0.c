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
extern int fn_82230040();
extern int fn_8256BE68();
extern int fn_82587028();
extern int fn_8260D2A8();
extern int fn_8265C9E0();
extern int fn_827D9980();
extern int fn_827DA0D0();
extern int fn_827DDEE8();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CAAD0;
extern unsigned int uStack_54;
extern unsigned int uStack_60;


undefined4 *
fn_8260C2F0(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  uint in_stack_00000054;
  undefined1 uStack_60;
  undefined **ppuStack_58;
  undefined4 uStack_54;
  
  lVar3 = (ulonglong)in_stack_00000054 + 4;
  if ((ulonglong)in_stack_00000054 == 0) {
    lVar3 = 0;
  }
  fn_827D9980(param_1,lVar3,param_5,param_6,1);
  param_1[0xe] = in_stack_00000054;
  param_1[0xf] = param_7;
  param_1[0xd] = 0;
  *param_1 = &lbl_821CAAD0;
  param_1[0x10] = param_8;
  param_1[0x11] = param_4;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  fn_8256BE68(param_1 + 0x12,0);
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  fn_8256BE68(param_1 + 0x14,0);
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  fn_8256BE68(param_1 + 0x16,0);
  fn_827DA0D0(param_1 + 0x18,param_3);
  fn_827DDEE8(param_1 + 0x32);
  *(undefined1 *)(param_1 + 0x50) = uStack_60;
  param_1[0x52] = 0;
  iVar2 = fn_8265C9E0(0x10);
  if (iVar2 != 0) {
    param_1[0x51] = iVar2;
    *(int *)iVar2 = iVar2;
    *(undefined4 *)(param_1[0x51] + 4) = param_1[0x51];
    uVar1 = lbl_821CA460;
    param_1[0x54] = 0;
    param_1[0x55] = 0;
    param_1[0x56] = 0;
    param_1[0x5a] = uVar1;
    fn_82587028(param_1 + 0x50,8);
    fn_8260D2A8(param_1 + 0x5b,param_2);
    RtlInitializeCriticalSection(param_1 + 0x68);
    return param_1;
  }
  uStack_54 = 0;
  ppuStack_58 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_58);
}

