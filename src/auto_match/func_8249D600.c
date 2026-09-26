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
extern int fn_82250A18();
extern int fn_8229E7D0();
extern int fn_8249ABC0();
extern int fn_8249D748();
extern int fn_82512C30();
extern int (*lbl_83276798)();
extern unsigned int lbl_832960A0;
extern unsigned int lbl_832975B0;


uint fn_8249D600(int param_1,uint param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = *(uint *)(param_1 + 0x28);
  piVar2 = (int *)fn_8229E7D0();
  uVar6 = piVar2[1] == *piVar2 & uVar6;
  iVar3 = fn_82512C30();
  for (iVar4 = *(int *)(iVar3 + 0x14); iVar4 != *(int *)(iVar3 + 0x18); iVar4 = iVar4 + 0xc) {
    if (*(int *)(iVar4 + 4) != 0) {
      iVar4 = lbl_832975B0;
      if (lbl_832975B0 == 0) {
        iVar4 = fn_82250A18();
      }
      bVar1 = false;
      if (*(char *)(iVar4 + 4) == '\0') goto LAB_8249d688;
      break;
    }
  }
  bVar1 = true;
LAB_8249d688:
  iVar4 = fn_8249ABC0();
  if (param_2 == 0) goto LAB_8249d730;
  if (param_2 == 1) {
    if (((!bVar1) || (*(int *)(iVar4 + 0x70) == 0)) || (lbl_832960A0 != 0)) goto LAB_8249d6f8;
    iVar3 = *(int *)(param_1 + 0x24);
LAB_8249d6bc:
    if (iVar3 != 0) goto LAB_8249d6f8;
    if (lbl_83276798 == (code *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (*lbl_83276798)();
    }
    uVar5 = 1;
    if (iVar4 == 0) goto LAB_8249d6f8;
  }
  else {
    if (2 < param_2) goto LAB_8249d730;
    if ((bVar1) && (iVar3 = lbl_832960A0, *(int *)(iVar4 + 0x70) != 0)) goto LAB_8249d6bc;
LAB_8249d6f8:
    uVar5 = 0;
  }
  uVar6 = uVar5 & uVar6;
LAB_8249d730:
  uVar5 = fn_8249D748(param_1);
  return uVar5 & uVar6;
}

