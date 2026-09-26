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
extern int fn_82791560();
extern int fn_82791758();
extern int fn_82791850();
extern int fn_827918F8();


undefined4 fn_82792710(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  
  uVar4 = *(uint *)(param_1 + 4);
  if (uVar4 == 1) {
    return 1;
  }
  if ((uVar4 & 0x8000) == 0) {
    if (uVar4 == 2) {
      fn_82791758(param_1);
LAB_82792880:
      while ((*(int *)(param_1 + 4) == 7 || (*(int *)(param_1 + 4) == 8))) {
        fn_827918F8(param_1);
      }
LAB_8279276c:
      if (*(int *)(param_1 + 0x14) != 0x3e) goto LAB_8279278c;
      fn_82791560(param_1 + 8);
      uVar3 = 0x8002;
    }
    else if (uVar4 == 3) {
      uVar4 = *(uint *)(param_1 + 8);
      uVar2 = *(uint *)(param_1 + 0x10);
      while ((uVar4 < uVar2 && (*(int *)(param_1 + 0x14) != 0x3c))) {
        fn_82791560((uint *)(param_1 + 8));
        uVar4 = *(uint *)(param_1 + 8);
        uVar2 = *(uint *)(param_1 + 0x10);
      }
      uVar3 = 0x8003;
    }
    else {
      if (uVar4 != 4) {
        if (6 < (int)uVar4) {
          if ((int)uVar4 < 9) goto LAB_82792880;
          if (uVar4 == 9) goto LAB_8279276c;
        }
        goto LAB_8279278c;
      }
      uVar4 = *(uint *)(param_1 + 8);
      puVar5 = (uint *)(param_1 + 8);
      uVar2 = *(uint *)(param_1 + 0x10);
      while ((uVar4 < uVar2 && (*(int *)(param_1 + 0x14) != 0x3e))) {
        fn_82791560(puVar5);
        uVar4 = *puVar5;
        uVar2 = *(uint *)(param_1 + 0x10);
      }
      if (*(int *)(param_1 + 0x14) == 0x3e) {
        fn_82791560(puVar5);
        uVar3 = 0x8004;
      }
      else {
        uVar3 = 1;
      }
    }
    *(undefined4 *)(param_1 + 4) = uVar3;
  }
LAB_8279278c:
  if (*(int *)(param_1 + 4) == 1) {
    return 1;
  }
  puVar5 = (uint *)(param_1 + 8);
  iVar6 = 0;
  if (*(uint *)(param_1 + 8) < *(uint *)(param_1 + 0x10)) {
    do {
      if (iVar6 != 0) goto LAB_82792948;
      iVar1 = *(int *)(param_1 + 0x14);
      if (iVar1 == 0) {
LAB_8279291c:
        iVar6 = 1;
      }
      else if (iVar1 == 0x2f) {
        if ((*(int *)(param_1 + 4) != 9) && (*(int *)(param_1 + 4) != 6)) goto LAB_827927d4;
        fn_82791560(puVar5);
        if (*(int *)(param_1 + 0x14) != 0x3e) goto LAB_8279291c;
        fn_82791560(puVar5);
        iVar6 = 0x8005;
      }
      else if (iVar1 == 0x3c) {
        fn_82791560(puVar5);
        if (*(int *)(param_1 + 0x14) == 0x21) {
          fn_82791850(param_1);
        }
        else if (*(int *)(param_1 + 0x14) == 0x2f) {
          fn_82791560(puVar5);
          iVar6 = 4;
        }
        else {
          iVar6 = 2;
        }
      }
      else {
LAB_827927d4:
        iVar6 = 3;
      }
    } while (*puVar5 < *(uint *)(param_1 + 0x10));
    if (iVar6 != 0) {
LAB_82792948:
      *(int *)(param_1 + 4) = iVar6;
      goto LAB_8279294c;
    }
  }
  *(undefined4 *)(param_1 + 4) = 0x8000;
LAB_8279294c:
  return *(undefined4 *)(param_1 + 4);
}

