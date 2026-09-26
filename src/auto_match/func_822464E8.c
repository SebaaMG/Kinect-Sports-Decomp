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
extern int fn_82246748();
extern int fn_822467D8();
extern int fn_82246970();
extern int fn_82246C58();
extern int fn_82247000();
extern int fn_82250A18();
extern int fn_823AB470();
extern int fn_82512B08();
extern int fn_82512B70();
extern int fn_82513668();
extern int fn_8289F0B8();
extern int fn_828ACC40();
extern int fn_828ACCB0();
extern int fn_828ACCE8();
extern int fn_828ACD00();
extern int fn_828AD740();
extern int fn_828ADBB8();
extern unsigned int lbl_83265988;
extern unsigned int lbl_832659CC;
extern unsigned int lbl_832659CD;
extern unsigned int lbl_832960A4;
extern unsigned int lbl_832975B0;


void fn_822464E8(int param_1)

{
  bool bVar1;
  char cVar4;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar5;
  
  fn_82513668();
  if (lbl_832960A4 != 0) {
    return;
  }
  if (*(char *)(param_1 + 0x50) != '\0') {
    fn_82246C58(param_1);
    *(undefined1 *)(param_1 + 0x50) = 0;
  }
  if (*(char *)(param_1 + 0x3c) != '\0') {
    fn_82246748(param_1,*(undefined4 *)(param_1 + 0x40));
    *(undefined1 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  cVar4 = fn_828ACC40(*(undefined4 *)(param_1 + 8));
  if ((cVar4 != '\0') || (cVar4 = fn_828ACCB0(*(undefined4 *)(param_1 + 8)), cVar4 != '\0'))
  goto LAB_82246694;
  cVar4 = fn_828ACCE8(*(undefined4 *)(param_1 + 8));
  if (cVar4 == '\0') {
    fn_828ACD00(*(undefined4 *)(param_1 + 8));
    goto LAB_82246694;
  }
  cVar4 = fn_828ADBB8();
  if (cVar4 != '\0') goto LAB_82246694;
  if (lbl_832659CD == '\0') {
    (**(code **)(**(int **)(param_1 + 8) + 0x60))();
    uVar5 = 0x19;
  }
  else if (lbl_832659CC == '\0') {
    if (lbl_83265988 == 0) {
LAB_82246600:
      bVar1 = false;
    }
    else {
      iVar2 = fn_823AB470();
      bVar1 = true;
      if (iVar2 != 2) goto LAB_82246600;
    }
    if (bVar1) {
      if (*(int *)(param_1 + 0x38) == 0) goto LAB_82246694;
      if (*(char *)(param_1 + 0x44) == '\0') {
        fn_822467D8(param_1);
      }
      else {
        fn_82246970();
      }
      cVar4 = fn_828AD740(*(undefined4 *)(param_1 + 8));
      if (((cVar4 == '\0') ||
          (iVar2 = fn_82247000(*(undefined4 *)(param_1 + 0x38)), iVar2 != 4)) ||
         (iVar2 = fn_8289F0B8(*(undefined4 *)(param_1 + 8)), iVar2 == 2)) goto LAB_82246694;
      (**(code **)(**(int **)(param_1 + 8) + 0x60))();
      uVar5 = 0x22;
    }
    else {
      uVar5 = 0x1b;
    }
  }
  else {
    (**(code **)(**(int **)(param_1 + 8) + 0x60))();
    uVar5 = 0x1a;
  }
  fn_82246748(param_1,uVar5);
LAB_82246694:
  iVar2 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar2 = fn_82250A18();
  }
  if ((*(char *)(iVar2 + 4) != '\0') &&
     (((cVar4 = fn_828ACCE8(*(undefined4 *)(param_1 + 8)), cVar4 != '\0' ||
       (cVar4 = fn_828ACCB0(*(undefined4 *)(param_1 + 8)), cVar4 != '\0')) ||
      (cVar4 = fn_828ACD00(*(undefined4 *)(param_1 + 8)), cVar4 != '\0')))) {
    iVar2 = lbl_832975B0;
    if (lbl_832975B0 == 0) {
      iVar2 = fn_82250A18();
    }
    if (*(int *)(iVar2 + 0x58) == 0) {
      if (*(int *)(param_1 + 0x48) != 0) {
        return;
      }
      uVar3 = fn_82512B08(1,0);
      *(undefined4 *)(param_1 + 0x48) = uVar3;
      return;
    }
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    fn_82512B70();
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  return;
}

