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
extern int fn_827C5428();
extern int fn_827C5690();


void fn_827C5B00(int *param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  
  iVar5 = param_1[0xf];
  iVar6 = 0;
  iVar8 = 0;
  if (0 < iVar5) {
    puVar7 = (undefined4 *)(param_1[0x11] + -0x44);
    iVar6 = 0;
    do {
      puVar7 = puVar7 + 0x15;
      iVar2 = fn_827C5428(param_1,*puVar7);
      iVar5 = param_1[0xf];
      iVar8 = iVar8 + 1;
      iVar6 = iVar2 + iVar6;
    } while (iVar8 < iVar5);
  }
  if (*(char *)((int)param_1 + 0xb1) == '\0') {
    if ((*(char *)(param_1 + 0x35) == '\0') && (param_1[0xe] == 8)) {
      bVar1 = true;
      iVar8 = 0;
      if (0 < iVar5) {
        piVar4 = (int *)(param_1[0x11] + 0x18);
        do {
          if ((1 < piVar4[-1]) || (1 < *piVar4)) {
            bVar1 = false;
          }
          iVar8 = iVar8 + 1;
          piVar4 = piVar4 + 0x15;
        } while (iVar8 < iVar5);
      }
      if ((iVar6 != 0) && (bVar1)) {
        bVar1 = false;
        *(undefined4 *)(*param_1 + 0x14) = 0x4b;
        (**(code **)(*param_1 + 4))(param_1,0);
      }
      goto LAB_827c5bf4;
    }
  }
  bVar1 = false;
LAB_827c5bf4:
  if (*(char *)((int)param_1 + 0xb1) == '\0') {
    if (*(char *)(param_1 + 0x35) == '\0') {
      uVar3 = 0xc0;
      if (!bVar1) {
        uVar3 = 0xc1;
      }
    }
    else {
      uVar3 = 0xc2;
    }
  }
  else {
    uVar3 = 0xc9;
  }
  fn_827C5690(param_1,uVar3);
  return;
}

