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
extern int fn_822C72E0();
extern int fn_822D6AB8();
extern int fn_8288B760();


undefined8 fn_822CE1C0(int param_1,undefined8 param_2)

{
  int *piVar1;
  uint uVar3;
  longlong lVar2;
  int iVar5;
  undefined8 uVar4;
  
  iVar5 = (int)param_2;
  if (iVar5 != 1) {
    if (iVar5 == 2) {
      uVar4 = 0xffffffff821ad26c;
      goto LAB_822ce214;
    }
    if ((iVar5 < 0x13) || (0x17 < iVar5)) {
      uVar4 = 0xffffffff821ad278;
      goto LAB_822ce214;
    }
  }
  uVar4 = 0xffffffff821ad25c;
LAB_822ce214:
  uVar4 = fn_822C72E0(*(undefined4 *)(*(int *)(param_1 + 0x114) + 0x20),uVar4);
  if ((int)uVar4 != 0) {
    if (*(int *)(param_1 + 0x168) == 0) {
      uVar3 = *(uint *)(param_1 + 0x16c);
    }
    else {
      uVar3 = fn_8288B760();
      uVar3 = uVar3 & 0xff;
    }
    if (uVar3 != 0) {
      piVar1 = *(int **)(param_1 + 0x168);
      if ((piVar1 != (int *)0x0) && (piVar1[0x2f] != 0)) {
        lVar2 = (**(code **)(*piVar1 + 0x50))();
        fn_822D6AB8(lVar2 + 0xb0,param_2);
      }
    }
  }
  return uVar4;
}

