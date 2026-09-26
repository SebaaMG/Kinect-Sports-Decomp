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
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C2C;
extern unsigned int lbl_8200D898;
extern unsigned int lbl_82021544;
extern unsigned int lbl_8216C658;


undefined8 fn_82FBC3B0(int *param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  
  iVar5 = lbl_8216C658;
  iVar4 = lbl_82021544;
  iVar3 = lbl_8200D898;
  if ((param_4 & 0xffffffff) == 0) {
    *(undefined1 *)(param_1 + 6) = 1;
    iVar2 = lbl_82002C2C;
    *(undefined1 *)((int)param_1 + 0x19) = 1;
    iVar1 = lbl_82002AE0;
    param_1[1] = iVar5;
    param_1[2] = iVar3;
    param_1[3] = iVar4;
    param_1[4] = iVar2;
    param_1[5] = iVar1;
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x82fbc424. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar6 = (**(code **)(*param_1 + 0x14))(param_1,param_3,param_4);
  return uVar6;
}

