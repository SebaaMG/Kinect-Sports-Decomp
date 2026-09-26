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
extern int fn_827C5E70();
extern int fn_827C74E8();
extern int fn_827C7680();
extern int fn_827C7888();
extern int fn_827C7988();
extern int fn_827C7BF0();
extern int fn_827C7C78();
extern int fn_82F691F0();


void fn_827C7D60(int *param_1,char param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined4 uVar4;
  code *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  
  iVar1 = param_1[0x57];
  *(int **)(iVar1 + 0x20) = param_1;
  *(char *)(iVar1 + 0xc) = param_2;
  bVar3 = param_1[0x4b] == 0;
  if (param_1[0x4d] == 0) {
    if (!bVar3) {
      pcVar5 = fn_827C7680;
    }
    else {
      pcVar5 = fn_827C74E8;
    }
  }
  else {
    if (!bVar3) {
      *(code **)(iVar1 + 4) = fn_827C7988;
      if (*(int *)(iVar1 + 0x40) == 0) {
        uVar4 = (**(code **)param_1[1])(param_1,1,1000);
        *(undefined4 *)(iVar1 + 0x40) = uVar4;
      }
      goto LAB_827c7e04;
    }
    pcVar5 = fn_827C7888;
  }
  *(code **)(iVar1 + 4) = pcVar5;
LAB_827c7e04:
  if (param_2 == '\0') {
    pcVar5 = fn_827C7BF0;
  }
  else {
    pcVar5 = fn_827C7C78;
  }
  *(code **)(iVar1 + 8) = pcVar5;
  iVar6 = 0;
  if (0 < param_1[0x39]) {
    puVar7 = (undefined4 *)(iVar1 + 0x24);
    piVar8 = param_1 + 0x3a;
    do {
      iVar2 = *piVar8;
      *puVar7 = 0;
      if (bVar3) {
        if (param_1[0x4d] == 0) {
          iVar2 = *(int *)(iVar2 + 0x14);
          goto LAB_827c7e6c;
        }
      }
      else {
        iVar2 = *(int *)(iVar2 + 0x18);
        *(int *)(iVar1 + 0x34) = iVar2;
LAB_827c7e6c:
        if (param_2 != '\0') {
          if ((iVar2 < 0) || (3 < iVar2)) {
            *(undefined4 *)(*param_1 + 0x14) = 0x32;
            *(int *)(*param_1 + 0x18) = iVar2;
            (**(code **)*param_1)(param_1);
          }
          iVar6 = (iVar2 + 0x17) * 4;
          if (*(int *)(iVar6 + iVar1) == 0) {
            uVar4 = (**(code **)param_1[1])(param_1,1,0x404);
            *(undefined4 *)(iVar6 + iVar1) = uVar4;
          }
                    /* WARNING: Subroutine does not return */
          fn_82F691F0(*(undefined4 *)(iVar6 + iVar1),0,0x404);
        }
        fn_827C5E70(param_1,bVar3,iVar2,(iVar2 + 0x13) * 4 + iVar1);
      }
      iVar6 = iVar6 + 1;
      piVar8 = piVar8 + 1;
      puVar7 = puVar7 + 1;
    } while (iVar6 < param_1[0x39]);
  }
  *(undefined4 *)(iVar1 + 0x3c) = 0;
  *(undefined4 *)(iVar1 + 0x38) = 0;
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  iVar6 = param_1[0x2f];
  *(undefined4 *)(iVar1 + 0x48) = 0;
  *(int *)(iVar1 + 0x44) = iVar6;
  return;
}

