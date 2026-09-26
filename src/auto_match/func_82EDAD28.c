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
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82EDBF50();
extern int fn_82EDD308();
extern int fn_82EDD678();


undefined8 fn_82EDAD28(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if ((((0 < *(int *)(param_1 + 0x4ab0)) && (0 < *(int *)(param_1 + 0x4ab4))) &&
      (iVar3 = *(int *)(param_1 + 0x4ad8), 0 < iVar3)) &&
     (iVar1 = *(int *)(param_1 + 0x4adc), 0 < iVar1)) {
    piVar4 = (int *)(param_1 + 0x4b00);
    if (*(int *)(param_1 + 0x4b00) == 0) {
      if (*(int *)(param_1 + 0x77a0) == 0) {
        if (*(int *)(param_1 + 0x77a4) != 0) {
          iVar2 = *(int *)(param_1 + 0x4aa8);
          fn_82EDD678(iVar2,piVar4,iVar3,iVar1,0,0,*(undefined4 *)(iVar2 + 4),
                            *(undefined4 *)(iVar2 + 8));
        }
      }
      else {
        fn_82EDD678(param_1 + 0x4aac,piVar4,iVar3,iVar1,0,0);
      }
      if (*piVar4 == 0) {
        return 0xffffffffffffff9c;
      }
    }
    else {
      fn_82EDD308(*(int *)(param_1 + 0x4b00),*(int *)(param_1 + 0x4ab0),
                        *(int *)(param_1 + 0x4ab4),iVar3,iVar1);
    }
    if (*(int *)(param_1 + 0x4b04) == 0) {
      iVar3 = fn_8265C940(*(undefined4 *)(param_1 + 0x4ae8),0x248c8000);
      *(int *)(param_1 + 0x4b04) = iVar3;
      if (iVar3 == 0) {
        if (*piVar4 != 0) {
          fn_82EDBF50();
        }
        return 0xffffffffffffff9c;
      }
    }
    if (*(int *)(param_1 + 0x4b08) == 0) {
      iVar3 = fn_8265C940(*(undefined4 *)(param_1 + 0x4ac0),0x248c8000);
      *(int *)(param_1 + 0x4b08) = iVar3;
      if (iVar3 == 0) {
        if (*piVar4 != 0) {
          fn_82EDBF50();
        }
        if (*(int *)(param_1 + 0x4b04) != 0) {
          fn_8265C990(*(int *)(param_1 + 0x4b04),0x248c8000);
          *(undefined4 *)(param_1 + 0x4b04) = 0;
        }
        return 0xffffffffffffff9c;
      }
    }
  }
  return 0;
}

