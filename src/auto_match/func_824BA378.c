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
extern int fn_824BA4F8();
extern int fn_82512508();
extern int fn_828EA5F8();
extern int fn_828EA610();
extern unsigned int lbl_824BABE8;


void fn_824BA378(int param_1,int param_2,ulonglong param_3,int param_4,int param_5)

{
  char cVar2;
  int iVar1;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  
  if (((param_2 != 0) && (cVar2 = fn_828EA610(param_2), cVar2 == '\0')) &&
     (cVar2 = fn_828EA5F8(param_2), cVar2 != '\0')) {
    uVar5 = 0;
    if (param_5 == 0) {
      if (param_4 == 0) {
        if ((param_3 & 0xffffffff) == 0) {
          iVar6 = 0x23d;
        }
        else if ((param_3 & 0xffffffff) == 1) {
          iVar6 = 0x242;
          uVar5 = 0x66;
        }
        else if ((param_3 & 0xffffffff) < 3) {
          iVar6 = 0x23e;
          uVar5 = 0x22;
        }
        else {
          if ((param_3 & 0xffffffff) != 3) {
            return;
          }
          iVar6 = 0x241;
          uVar5 = 0x44;
        }
      }
      else {
        iVar6 = 0x23f;
      }
    }
    else {
      iVar6 = 0x240;
    }
    if (*(int *)(*(int *)(param_2 + 0x100) + iVar6 * 4) != 1) {
      *(undefined4 *)(*(int *)(param_2 + 0x100) + iVar6 * 4) = 1;
    }
    RtlEnterCriticalSection(param_1);
    if (*(int *)(param_1 + 0x30) == 0) {
      RtlLeaveCriticalSection(param_1);
      cVar2 = fn_82512508(param_2);
      if (cVar2 != '\0') {
        if ((param_4 != 0) || (uVar3 = 0, param_5 != 0)) {
          uVar3 = 1;
        }
        iVar1 = fn_824BA4F8(param_1,param_2,param_3,uVar3,uVar5);
        if (iVar1 != 0) {
          *(int *)(param_1 + 0x20) = iVar6;
          *(int *)(param_1 + 0x1c) = param_2;
          *(int *)(param_1 + 0x24) = (int)param_3;
          if ((param_4 != 0) || (uVar4 = 0, param_5 != 0)) {
            uVar4 = 1;
          }
          *(undefined4 *)(param_1 + 0x28) = uVar4;
          *(undefined4 *)(param_1 + 0x30) = 1;
          *(undefined **)(param_1 + 0x2c) = &lbl_824BABE8;
          return;
        }
      }
      *(undefined4 *)(param_1 + 0x34) = 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x34) = 1;
      RtlLeaveCriticalSection(param_1);
    }
  }
  return;
}

