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
extern unsigned int *auStack_28;
extern unsigned int *auStack_30;
extern int fn_822315A0();
extern int fn_82250A18();
extern int fn_822EFBF0();
extern int fn_823831D8();
extern int fn_8288B760();
extern unsigned int iStack_24;
extern unsigned int iStack_2c;
extern unsigned int lbl_82192510;
extern unsigned int lbl_832975B0;


undefined4 fn_823A5188(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  bool bVar6;
  int iVar7;
  undefined1 auStack_30 [4];
  int iStack_2c;
  undefined1 auStack_28 [4];
  int iStack_24;
  
  iVar3 = *(int *)(*(int *)(param_1 + 8) + 0x1f8);
  if ((*(int *)(param_1 + 0x50) == 0) && (iVar3 != 0)) {
    iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x84);
    if (*(int *)(iVar3 + 0x168) == 0) {
      uVar2 = *(uint *)(iVar3 + 0x16c);
    }
    else {
      uVar2 = fn_8288B760();
      uVar2 = uVar2 & 0xff;
    }
    if (uVar2 == 0) {
      if (iVar1 == 0) goto LAB_823a52d0;
      piVar5 = (int *)fn_822EFBF0(auStack_28,iVar1);
      *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(*piVar5 + 0x40);
    }
    else {
      iVar3 = lbl_832975B0;
      if (lbl_832975B0 == 0) {
        iVar3 = fn_82250A18();
      }
      iVar7 = *(int *)(*(int *)(param_1 + 8) + 0x1f8);
      if ((iVar7 == 0) || (*(int *)(iVar7 + 0x24) == 0)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (((*(float *)(*(int *)(param_1 + 8) + 0x208) < lbl_82192510) || (!bVar6)) ||
         (iVar7 = 1, *(char *)(iVar3 + 4) == '\0')) {
        iVar7 = 0;
      }
      *(int *)(param_1 + 0x50) = iVar7;
      if ((iVar1 == 0) || (iVar7 == 0)) goto LAB_823a52d0;
      puVar4 = (undefined4 *)fn_822EFBF0(auStack_30,iVar1);
      fn_823831D8((ulonglong)*(uint *)*puVar4 + 0x278);
      iStack_24 = iStack_2c;
    }
    if (iStack_24 != 0) {
      fn_822315A0(iStack_24);
    }
  }
LAB_823a52d0:
  return *(undefined4 *)(param_1 + 0x50);
}

