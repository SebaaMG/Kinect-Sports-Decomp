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
extern unsigned int *auStack_60;
extern unsigned int *auStack_90;
extern int fn_822924C0();
extern int fn_822933E8();
extern int fn_822A8928();
extern int fn_828647C0();
extern int fn_828647D8();
extern int fn_82864848();
extern int fn_82864898();
extern int fn_82864E90();
extern unsigned int lbl_8327F878;


undefined8 fn_822A8BC0(int param_1,undefined8 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  char cVar6;
  int *piVar4;
  int iVar5;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_90 [48];
  undefined1 auStack_60 [96];
  
  if (*(char *)(param_1 + 0x5c) == '\0') {
    uVar1 = *(uint *)(param_1 + 0x48);
    for (uVar7 = (ulonglong)*(uint *)(param_1 + 0x44); (uVar7 & 0xffffffff) != (ulonglong)uVar1;
        uVar7 = uVar7 + 0x24) {
      cVar6 = fn_828647C0(uVar7,param_2);
      if (cVar6 != '\0') break;
    }
    if ((uVar7 & 0xffffffff) != (ulonglong)*(uint *)(param_1 + 0x48)) {
      piVar4 = (int *)fn_82864E90();
      piVar4 = (int *)(**(code **)(*piVar4 + 0x18))();
      (**(code **)(*piVar4 + 0x30))(auStack_60,piVar4,param_2);
      fn_82864848(auStack_90);
      uVar2 = lbl_8327F878;
      uVar3 = fn_828647D8(auStack_60);
      iVar5 = fn_822A8928(uVar2,0,uVar3,auStack_90);
      if (iVar5 < 0) {
        fn_82864898(auStack_90);
        fn_82864898(auStack_60);
        goto LAB_822a8be0;
      }
      piVar4 = (int *)fn_82864E90();
      piVar4 = (int *)(**(code **)(*piVar4 + 0x18))();
      (**(code **)(*piVar4 + 0x14))(piVar4,param_2);
      uVar9 = uVar7 + 0x24;
      uVar1 = *(uint *)(param_1 + 0x48);
      if ((uVar9 & 0xffffffff) != (ulonglong)uVar1) {
        lVar8 = uVar7 - uVar9;
        do {
          fn_822924C0(lVar8 + uVar9,uVar9);
          uVar9 = uVar9 + 0x24;
        } while ((uVar9 & 0xffffffff) != (ulonglong)uVar1);
      }
      fn_822933E8((ulonglong)*(uint *)(param_1 + 0x48) - 0x24);
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + -0x24;
      fn_82864898(auStack_90);
      fn_82864898(auStack_60);
    }
    uVar3 = 0;
  }
  else {
LAB_822a8be0:
    uVar3 = 0xffffffff80004005;
  }
  return uVar3;
}

