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
extern unsigned int *auStack_30;
extern int fn_828EF460();
extern int fn_82CE1C28();
extern int fn_82F68CC0();
extern unsigned int lbl_83214558;


void fn_828EF918(int *param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  longlong lVar5;
  undefined4 auStack_30 [12];
  
  if (param_1[2] == 0) {
    piVar1 = (int *)fn_828EF460(auStack_30,0xffffffff83214554);
    iVar2 = *piVar1;
    if (iVar2 == lbl_83214558) {
      auStack_30[0] = 0;
      fn_82CE1C28(*param_3,param_2,auStack_30,0,0);
      (**(code **)(*param_1 + 0x54))(param_1,auStack_30[0]);
      if (param_1[4] != 0) {
        piVar1 = param_1 + 4;
        lVar5 = 7;
        do {
          piVar1 = piVar1 + 1;
          *piVar1 = 0;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
        iVar2 = fn_82CE1C28(*param_3,param_2,auStack_30,param_1[4]);
        if (iVar2 == 0x3e5) {
          piVar1 = param_1 + 0x10e;
          *(undefined1 *)(param_1 + 0x10e) = 1;
          puVar3 = (undefined1 *)((int)param_3 + -1);
          lVar5 = 8;
          do {
            puVar3 = puVar3 + 1;
            piVar1 = (int *)((int)piVar1 + 1);
            *(undefined1 *)piVar1 = *puVar3;
            lVar5 = lVar5 + -1;
          } while (lVar5 != 0);
          param_1[2] = 1;
          *(undefined1 *)(param_1 + 3) = 0;
        }
        else {
          (**(code **)(*param_1 + 0x58))(param_1);
        }
      }
    }
    else {
      if (*(char *)(iVar2 + 0x14) == '\0') {
        (**(code **)(*param_1 + 0x54))(param_1,8);
        *(undefined4 *)param_1[4] = 0;
        *(undefined4 *)(param_1[4] + 4) = 0;
      }
      else {
        (**(code **)(*param_1 + 0x54))(param_1,100);
        puVar3 = (undefined1 *)((int)param_3 + -1);
        *(undefined4 *)param_1[4] = 1;
        lVar5 = 8;
        *(int *)(param_1[4] + 4) = param_1[4] + 8;
        puVar4 = (undefined1 *)(*(int *)(param_1[4] + 4) + -1);
        do {
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
          *puVar4 = *puVar3;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
        fn_82F68CC0((ulonglong)*(uint *)(param_1[4] + 4) + 8,iVar2 + 0x15,0x24);
        fn_82F68CC0((ulonglong)*(uint *)(param_1[4] + 4) + 0x2c,iVar2 + 0x39,0x10);
        *(undefined4 *)(*(int *)(param_1[4] + 4) + 0x3c) = 0;
        *(undefined4 *)(*(int *)(param_1[4] + 4) + 0x40) = 0;
        *(undefined4 *)(*(int *)(param_1[4] + 4) + 0x44) = 0;
        *(undefined4 *)(*(int *)(param_1[4] + 4) + 0x48) = 0;
        *(undefined4 *)(*(int *)(param_1[4] + 4) + 0x4c) = 0;
        *(undefined4 *)(*(int *)(param_1[4] + 4) + 0x50) = 0;
        *(undefined4 *)(*(int *)(param_1[4] + 4) + 0x54) = 0;
        *(undefined4 *)(*(int *)(param_1[4] + 4) + 0x58) = 0;
      }
      param_1[2] = 2;
      (**(code **)(*param_1 + 0x5c))(param_1);
    }
  }
  return;
}

