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
extern unsigned int lbl_8200133C;


void fn_82D7BF58(byte *param_1,int *param_2)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 in_register_000100d0;
  undefined4 in_register_000100d4;
  undefined4 in_register_000100d8;
  undefined4 in_vr13;
  
  uVar3 = *param_1 - 2;
  if (0xc < uVar3) {
    return;
  }
  iVar1 = *(int *)(uVar3 * 4 + -0x7d28407c);
  switch(*param_1) {
  case 2:
  case 6:
  case 10:
  case 0xe:
    break;
  default:
    return;
  case 4:
  case 0xc:
    *(undefined4 *)(param_1 + 0x18) = lbl_8200133C;
    puVar2 = (undefined4 *)((uint)(param_1 + iVar1 + 0x20) & 0xfffffff0);
    *puVar2 = in_register_000100d0;
    puVar2[1] = in_register_000100d4;
    puVar2[2] = in_register_000100d8;
    puVar2[3] = in_vr13;
    UNRECOVERED_JUMPTABLE_00 = *(code **)((param_1[1] + 0x49) * 0x50 + *param_2);
    if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x82d7c030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(param_1,param_1 + 0x30);
    return;
  }
  UNRECOVERED_JUMPTABLE_00 = *(code **)((param_1[1] + 0x49) * 0x50 + *param_2);
  if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x82d7bfe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(param_1,param_1 + 0x20);
  return;
}

