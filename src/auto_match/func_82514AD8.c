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
extern int fn_82248B90();
extern int fn_823AA2A8();
extern int fn_823AB158();
extern int fn_823AB478();
extern int fn_8288F9A0();
extern int fn_828A12E8();
extern int fn_828A9288();
extern int fn_828A9948();
extern int fn_828EA610();
extern int fn_828EB518();
extern int fn_82AB8588();
extern unsigned int lbl_83265988;
extern unsigned int lbl_832659AC;


void fn_82514AD8(longlong param_1,char param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  int iVar5;
  ulonglong uVar3;
  char cVar7;
  undefined8 uVar4;
  int iVar6;
  uint uVar8;
  uint *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int aiStack_5c [23];
  
  uVar10 = 0;
  do {
    iVar5 = fn_828A9948(param_1,uVar10);
    uVar11 = 0;
    iVar6 = 0;
    uVar3 = fn_828EB518(uVar10);
    if ((uVar3 & 0xffffffff) == 0) {
LAB_82514c30:
      uVar4 = fn_828A12E8(param_1);
      iVar6 = fn_8288F9A0(uVar4,1);
      aiStack_5c[0] = **(int **)(iVar6 + 4);
      while( true ) {
        iVar6 = aiStack_5c[0];
        uVar4 = fn_828A12E8((int)param_1);
        iVar5 = fn_8288F9A0(uVar4,1);
        if (iVar6 == *(int *)(iVar5 + 4)) break;
        puVar1 = *(undefined4 **)(iVar6 + 0x14);
        fn_823AB158(puVar1);
        uVar11 = fn_823AB478();
        if ((uVar11 & 0xffffffff) == (uVar10 & 0xffffffff)) {
          if (puVar1 != (undefined4 *)0x0) {
            (**(code **)*puVar1)(puVar1,1);
          }
          break;
        }
        fn_82248B90(aiStack_5c);
      }
    }
    else {
      uVar8 = 0;
      puVar9 = &lbl_83265988;
      if (lbl_832659AC != 0) {
        do {
          if ((ulonglong)*puVar9 == (uVar3 & 0xffffffff)) {
            bVar2 = 1;
            goto LAB_82514b58;
          }
          uVar8 = uVar8 + 1;
          puVar9 = puVar9 + 1;
        } while (uVar8 < lbl_832659AC);
      }
      bVar2 = 0;
LAB_82514b58:
      uVar3 = -(ulonglong)bVar2 & uVar3;
      if ((uVar3 & 0xffffffff) == 0) goto LAB_82514c30;
      cVar7 = fn_828EA610(uVar3);
      if (cVar7 != '\0') {
        fn_82AB8588(uVar3);
        uVar11 = fn_828EB518();
        uVar4 = fn_82AB8588(uVar3);
        iVar6 = fn_828A9948(param_1,uVar4);
        if (((uVar11 & 0xffffffff) == 0) || (iVar6 == 0)) goto LAB_82514c30;
      }
      if (((cVar7 != '\0') && (iVar6 == 0)) && (param_2 != '\0')) {
        iVar6 = fn_823AA2A8(param_1 + 0x60);
        fn_828A9288(param_1,uVar11,iVar6 == 0);
      }
      if ((iVar5 == 0) && (param_2 != '\0')) {
        iVar6 = fn_823AA2A8(param_1 + 0x60);
        fn_828A9288(param_1,uVar3,iVar6 == 0);
      }
    }
    uVar10 = uVar10 + 1;
    if (3 < (uVar10 & 0xffffffff)) {
      return;
    }
  } while( true );
}

