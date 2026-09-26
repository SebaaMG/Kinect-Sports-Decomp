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
extern int fn_829C90F0();
extern int fn_829C9100();
extern int fn_829C9110();
extern int fn_82F5E290();
extern int fn_82F5E2E8();
extern int fn_82F5E3B8();
extern unsigned int lbl_821AAD20;


void fn_82F5E4D8(int *param_1)

{
  int iVar2;
  int iVar3;
  ulonglong uVar1;
  int iVar4;
  undefined8 uVar5;
  
  if (0 < param_1[2]) {
    param_1[2] = param_1[2] + -1;
    return;
  }
  switch(*param_1) {
  case 1:
    *param_1 = 2;
  case 2:
    iVar4 = fn_829C90F0(0,0,1);
    iVar2 = fn_829C90F0(0,2,0);
    iVar3 = fn_829C9100((double)lbl_821AAD20,0,5);
    uVar5 = 3;
    uVar1 = (ulonglong)(iVar3 == 0 && (iVar2 == 0 && iVar4 == 0));
    goto LAB_82f5e660;
  case 3:
    uVar1 = fn_82F5E290(param_1,param_1 + 0x10);
    uVar5 = 7;
    goto LAB_82f5e660;
  default:
    goto switchD_82f5e53c_caseD_4;
  case 7:
    iVar4 = fn_829C9110(0,param_1 + 0x17);
    uVar5 = 8;
    break;
  case 8:
    uVar1 = fn_82F5E290(param_1,param_1 + 5);
    uVar5 = 0xc;
    goto LAB_82f5e660;
  case 0xc:
    iVar4 = fn_829C9110(0,param_1 + 0xc);
    uVar5 = 0xd;
    break;
  case 0xd:
    uVar1 = fn_82F5E3B8(param_1,param_1 + 5);
    uVar5 = 0;
    goto LAB_82f5e660;
  case 0xf:
    iVar4 = fn_829C90F0(0,0,0);
    uVar5 = 0x10;
    break;
  case 0x10:
    iVar4 = fn_829C90F0(0,0,1);
    uVar5 = 0x11;
    break;
  case 0x11:
    iVar4 = fn_829C90F0(0,0,0);
    uVar5 = 0;
  }
  uVar1 = (ulonglong)(iVar4 == 0);
LAB_82f5e660:
  fn_82F5E2E8(param_1,uVar1,uVar5);
switchD_82f5e53c_caseD_4:
  if ((*param_1 == 0xe) && (0 < param_1[4])) {
    param_1[4] = param_1[4] + -1;
    *param_1 = 3;
  }
  return;
}

