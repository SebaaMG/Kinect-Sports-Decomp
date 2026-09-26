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
extern int fn_82C6FAD0();
extern int fn_82C70F58();
extern int fn_82C71518();
extern int fn_82C71868();
extern int fn_82C71E48();
extern int fn_82C72180();
extern int fn_82C72540();
extern int fn_82C73070();
extern unsigned int lbl_82005CCC;
extern unsigned int lbl_821AAD20;


undefined8
fn_82C73C88(int *param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5,
             float *param_6,int param_7,int param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  int iVar5;
  int in_stack_00000054;
  int in_stack_0000005c;
  int in_stack_00000064;
  int in_stack_0000006c;
  int in_stack_00000074;
  int in_stack_0000007c;
  int in_stack_00000084;
  
  if ((((((int)param_2 < 1) || ((int)param_3 < 1)) || ((0 < param_5 && (param_6 == (float *)0x0))))
      || (((((param_7 == 0 || (param_8 == 0)) || (in_stack_00000054 == 0)) ||
           ((in_stack_0000005c == 0 || (in_stack_00000064 == 0)))) || (in_stack_0000006c == 0)))) ||
     (((in_stack_00000074 == 0 || (in_stack_0000007c == 0)) || (in_stack_00000084 == 0)))) {
LAB_82c74214:
    return 0xfffffffffffffffd;
  }
  uVar4 = fn_82C6FAD0(param_1,param_2,param_3);
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  *param_1 = (int)param_2;
  param_1[1] = (int)param_3;
  fVar3 = lbl_821AAD20;
  fVar2 = lbl_82005CCC;
  switch(param_4 + -0xb) {
  case 0:
    fn_82C70F58((double)*param_6,(double)param_6[1],(double)param_6[2],(double)param_6[3],param_1)
    ;
    param_1[2] = (int)*param_6;
    param_1[3] = (int)param_6[1];
    fVar2 = param_6[4];
    break;
  case 1:
    fn_82C71518((double)*param_6,(double)param_6[1],(double)param_6[2],param_1);
    goto LAB_82c7401c;
  default:
    goto LAB_82c74214;
  case 3:
  case 4:
  case 6:
    fn_82C71868((double)*param_6,(double)param_6[1],(double)param_6[2],(double)param_6[3],param_1)
    ;
    param_1[2] = (int)*param_6;
    param_1[3] = (int)param_6[1];
    fVar2 = param_6[4];
    break;
  case 5:
    fVar1 = *param_6;
    if (lbl_821AAD20 <= fVar1) {
      if (fVar1 <= lbl_82005CCC) {
        iVar5 = (int)fVar1;
      }
      else {
        iVar5 = 0xff;
      }
    }
    else {
      iVar5 = 0;
    }
    param_1[9] = iVar5;
    fVar1 = param_6[1];
    if (fVar3 <= fVar1) {
      if (fVar1 <= fVar2) {
        iVar5 = (int)fVar1;
      }
      else {
        iVar5 = 0xff;
      }
    }
    else {
      iVar5 = 0;
    }
    param_1[10] = iVar5;
    fVar1 = param_6[2];
    if (fVar3 <= fVar1) {
      if (fVar1 <= fVar2) {
        iVar5 = (int)fVar1;
      }
      else {
        iVar5 = 0xff;
      }
    }
    else {
      iVar5 = 0;
    }
    param_1[0xb] = iVar5;
    param_1[0xc] = (int)param_6[3];
    param_1[4] = (int)param_6[4];
    goto LAB_82c7404c;
  case 7:
    param_1[2] = (int)*param_6;
    param_1[3] = (int)param_6[1];
    param_1[0xd] = (int)param_6[2];
    param_1[0xe] = (int)param_6[3];
    param_1[4] = (int)param_6[4];
    goto LAB_82c7404c;
  case 8:
  case 0xc:
  case 0xd:
  case 0x10:
  case 0x12:
    fn_82C72180((double)*param_6,(double)param_6[1],(double)param_6[2],(double)param_6[3],param_1)
    ;
    param_1[2] = (int)*param_6;
    param_1[3] = (int)param_6[1];
    fVar2 = param_6[4];
    break;
  case 9:
    fn_82C71E48((double)*param_6,(double)param_6[1],(double)param_6[2],(double)param_6[3],param_1)
    ;
    param_1[2] = (int)*param_6;
    param_1[3] = (int)param_6[1];
    fVar2 = param_6[4];
    break;
  case 0x13:
    fn_82C72540((double)*param_6,(double)param_6[1],(double)param_6[2],param_1);
    goto LAB_82c7401c;
  case 0x14:
    fn_82C73070((double)*param_6,(double)param_6[1],(double)param_6[2],param_1);
LAB_82c7401c:
    param_1[2] = (int)*param_6;
    param_1[3] = (int)param_6[1];
    fVar2 = param_6[3];
  }
  param_1[4] = (int)fVar2;
LAB_82c7404c:
                    /* WARNING: Could not recover jumptable at 0x82c74060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)((param_4 + -0xb) * 4 + -0x7d38bf9c))();
  return uVar4;
}

