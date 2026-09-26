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
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82F68CC0();


void fn_82DDFB10(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined1 uVar4;
  int *piVar5;
  
  piVar5 = (int *)(param_1 + 0x34);
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x38)) {
    piVar3 = (int *)*piVar5;
    do {
      if (*piVar3 == param_2) {
        if (iVar2 != -1) goto LAB_82ddfc34;
        break;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x38));
  }
  if ((*(char *)(param_1 + 0xb8) == '\0') || (bVar1 = true, param_2 != *(int *)(param_1 + 0xbc))) {
    bVar1 = false;
  }
  if ((*(char *)(param_1 + 0xb8) == '\0') || (bVar1)) {
    iVar2 = *(int *)(param_1 + 0x40);
    *(undefined1 *)(iVar2 + 0x6d) = 1;
    *(int *)(iVar2 + 0x68) = param_2;
    *(char *)(iVar2 + 0x6c) = (char)*(undefined4 *)(param_1 + 0xac);
    fn_82F68CC0(iVar2,param_1 + 0x44,0x68);
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 0x70;
    if ((*(char *)(param_1 + 0xb0) != '\0') || (uVar4 = 0, bVar1)) {
      uVar4 = 1;
    }
    *(undefined1 *)(param_1 + 0xb0) = uVar4;
  }
  iVar2 = fn_82CE5410();
  if (*(uint *)(param_1 + 0x38) == (*(uint *)(param_1 + 0x3c) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
    fn_82CE63B0(*(undefined4 *)(iVar2 + 0x10),piVar5,4);
  }
  *(int *)(*(int *)(param_1 + 0x38) * 4 + *piVar5) = param_2;
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
LAB_82ddfc34:
  if (*(char *)(param_1 + 0xb0) != '\0') {
    *(undefined1 *)(param_1 + 0xc0) = 1;
  }
  return;
}

