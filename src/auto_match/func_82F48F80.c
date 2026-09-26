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
extern int fn_82F41CE0();
extern int fn_82F41D68();
extern unsigned int lbl_82164550;


undefined8 fn_82F48F80(ulonglong param_1,ulonglong param_2,undefined4 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  
  if (param_3 == (undefined4 *)0x0) {
    uVar2 = 0xffffffff8000ffff;
  }
  else {
    if (((param_1 & 0xffffffff) != 0) || ((param_2 & 0xffffffff) != 0)) {
      piVar3 = (int *)&lbl_82164550;
      do {
        if (*piVar3 == 0) {
          if ((piVar3[2] == 0) && (piVar3[3] == 0)) {
LAB_82f49068:
            if (((*piVar3 == 0) && (piVar3[2] == 0)) && (piVar3[3] == 0)) {
              return 1;
            }
            *param_3 = piVar3;
            return 0;
          }
        }
        else if (((param_1 & 0xffffffff) != 0) && (iVar1 = fn_82F41CE0(param_1), iVar1 != 0))
        goto LAB_82f49068;
        if ((((piVar3[2] != 0) && ((param_2 & 0xffffffff) != 0)) &&
            (iVar1 = fn_82F41D68(param_2), iVar1 != 0)) ||
           (((piVar3[3] != 0 && ((param_2 & 0xffffffff) != 0)) &&
            (iVar1 = fn_82F41D68(param_2), iVar1 != 0)))) goto LAB_82f49068;
        piVar3 = piVar3 + 6;
      } while( true );
    }
    uVar2 = 0xffffffff80070057;
  }
  return uVar2;
}

