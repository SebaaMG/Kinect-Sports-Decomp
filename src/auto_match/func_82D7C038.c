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


void fn_82D7C038(double param_1,double param_2,undefined1 *param_3,undefined8 param_4,
                  undefined8 param_5,int *param_6)

{
  code *UNRECOVERED_JUMPTABLE_00;
  
  switch(*param_3) {
  case 2:
  case 6:
  case 10:
  case 0xe:
    UNRECOVERED_JUMPTABLE_00 = *(code **)((uint)(byte)param_3[1] * 0x50 + *param_6 + 0x16d4);
    if (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x82d7c0c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)(param_3,param_3 + 0x20);
      return;
    }
    return;
  case 3:
  case 5:
  case 7:
  case 8:
  case 9:
  case 0xb:
  case 0xd:
    return;
  case 4:
  case 0xc:
    break;
  default:
    return;
  }
  if ((double)*(float *)(param_3 + 0x18) == param_1) {
    *(float *)(param_3 + 0x18) = (float)param_2;
  }
  else {
    *(undefined4 *)(param_3 + 0x18) = lbl_8200133C;
  }
  UNRECOVERED_JUMPTABLE_00 = *(code **)((uint)(byte)param_3[1] * 0x50 + *param_6 + 0x16d4);
  if (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x82d7c114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(param_3,param_3 + 0x30);
    return;
  }
  return;
}

