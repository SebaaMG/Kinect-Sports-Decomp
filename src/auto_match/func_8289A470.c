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
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern int fn_82240D08();
extern int fn_8240D928();
extern int fn_8288BB90();
extern int fn_82897BA8();
extern int fn_82898308();
extern int fn_82898A38();
extern int fn_828A1318();


void fn_8289A470(int param_1,undefined8 param_2,int param_3)

{
  int iVar2;
  int *piVar3;
  undefined8 uVar1;
  char cVar4;
  undefined4 *puVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [80];
  
  if ((*(int **)(param_1 + 0x20) == (int *)0x0) ||
     (iVar2 = (**(code **)(**(int **)(param_1 + 0x20) + 4))(), iVar2 == 0)) {
    if ((*(int **)(param_1 + 0x20) == (int *)0x0) ||
       (iVar2 = (**(code **)(**(int **)(param_1 + 0x20) + 0x10))(), iVar2 == 0)) {
      if ((*(int **)(param_1 + 0x20) != (int *)0x0) &&
         (iVar2 = (**(code **)(**(int **)(param_1 + 0x20) + 0x14))(), iVar2 != 0)) {
        if (*(int **)(param_1 + 0x20) == (int *)0x0) {
          lVar7 = 0;
        }
        else {
          lVar7 = (**(code **)(**(int **)(param_1 + 0x20) + 0x14))();
        }
        uVar1 = fn_8240D928(param_2);
        iVar2 = param_3 + 0xc;
        if (param_3 == 0) {
          iVar2 = param_1 + 4;
        }
        fn_8288BB90(auStack_70,iVar2);
        fn_82898308(lVar7 + 0x28,uVar1,auStack_70,0);
        fn_82898308(lVar7 + 0xc,uVar1,auStack_70,0);
        fn_82240D08(auStack_70);
      }
    }
    else {
      if (*(int **)(param_1 + 0x20) == (int *)0x0) {
        lVar7 = 0;
      }
      else {
        lVar7 = (**(code **)(**(int **)(param_1 + 0x20) + 0x10))();
      }
      uVar1 = fn_8240D928(param_2);
      iVar2 = param_3 + 0xc;
      if (param_3 == 0) {
        iVar2 = param_1 + 4;
      }
      fn_8288BB90(auStack_50,iVar2);
      fn_82898308(lVar7 + 8,uVar1,auStack_50,0);
      fn_82240D08(auStack_50);
    }
  }
  else {
    if (*(int **)(param_1 + 0x20) == (int *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0x20) + 4))();
    }
    uVar1 = fn_8240D928(param_2);
    iVar2 = param_3 + 0xc;
    if (param_3 == 0) {
      iVar2 = param_1 + 4;
    }
    fn_8288BB90(auStack_60,iVar2);
    (**(code **)(*piVar3 + 0x28))(piVar3,uVar1,auStack_60);
    cVar4 = (**(code **)(*piVar3 + 0x5c))(piVar3,uVar1,param_1 + 4);
    if (cVar4 == '\0') {
      cVar4 = fn_82897BA8(*(undefined4 *)(param_1 + 0x18));
      if (cVar4 == '\0') {
        fn_828A1318(*(undefined4 *)(param_1 + 0x28),param_1);
        fn_82240D08(auStack_60);
        return;
      }
      uVar1 = fn_8240D928(param_2);
      iVar2 = *(int *)(param_1 + 0x1c);
      iVar6 = 0;
      puVar5 = (undefined4 *)(iVar2 + 0x10);
      lVar7 = 4;
      do {
        puVar5 = puVar5 + 1;
        *puVar5 = 0;
        *(undefined1 *)(iVar2 + 0x34 + iVar6) = 1;
        iVar6 = iVar6 + 1;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
      fn_82898A38(param_1,uVar1);
    }
    fn_82240D08(auStack_60);
  }
  return;
}

