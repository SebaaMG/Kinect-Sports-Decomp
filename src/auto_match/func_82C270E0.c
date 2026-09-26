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
extern int fn_82C107F8();
extern int fn_82C108A8();
extern int fn_82C23380();
extern int fn_82C24CC8();
extern int fn_82C25F70();


undefined8 fn_82C270E0(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  uVar2 = 0;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff80070057;
  }
  else if (*(int *)(iVar1 + 0xe4) == 0) {
switchD_82c2714c_default:
    switch(*(undefined4 *)(iVar1 + 0x50)) {
    case 0:
    case 1:
    case 2:
    case 3:
      uVar2 = fn_82C24CC8(param_1);
      iVar3 = (int)uVar2;
      break;
    case 4:
      *(undefined4 *)(iVar1 + 0x50) = 5;
      uVar2 = fn_82C107F8(*(undefined4 *)(iVar1 + 0xe0),1,0,0);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      if ((int)uVar2 != 0x500006) {
        return 0;
      }
      *(undefined4 *)(iVar1 + 0x50) = 0xe;
      goto switchD_82c2714c_default;
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
      goto switchD_82c2714c_caseD_5;
    case 0xe:
    case 0xf:
    case 0x10:
      uVar2 = fn_82C23380(param_1);
      iVar3 = (int)uVar2;
      break;
    case 0x11:
      goto switchD_82c2714c_caseD_11;
    case 0x12:
      return 0x50000b;
    default:
      goto switchD_82c2714c_default;
    }
    if (iVar3 < 0) {
      return uVar2;
    }
    goto switchD_82c2714c_default;
  }
  return uVar2;
switchD_82c2714c_caseD_5:
  uVar2 = fn_82C25F70(param_1);
  if ((int)uVar2 < 0) {
    return uVar2;
  }
  if ((*(int *)(iVar1 + 0xe4) != 0) || (*(int *)(iVar1 + 0xe8) != 0)) {
    if (*(int *)(iVar1 + 0xe8) != 0) {
      *(undefined4 *)(iVar1 + 0xe8) = 0;
      return uVar2;
    }
    return uVar2;
  }
  goto switchD_82c2714c_default;
switchD_82c2714c_caseD_11:
  *(undefined4 *)(iVar1 + 0x50) = 5;
  uVar2 = fn_82C108A8(*(undefined4 *)(iVar1 + 0xe0),1,0x10010,0,0,0,4);
  if (-1 < (int)uVar2) {
    return 0;
  }
  return uVar2;
}

