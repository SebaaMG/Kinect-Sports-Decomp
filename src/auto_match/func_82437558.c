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
extern unsigned int *auStack_230;
extern unsigned int *auStack_270;
extern int fn_822A3E40();
extern int fn_822A3EC0();
extern int fn_822A4830();
extern int fn_822A4C18();
extern int fn_82358FD8();
extern int fn_82528EE0();


void fn_82437558(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_270 [64];
  undefined1 auStack_230 [560];
  
  piVar1 = *(int **)(param_1 + 0x40);
  lVar7 = (ulonglong)*(uint *)(*piVar1 + 0xd4) + 0x48;
  if (piVar1[0x52] + 1U < (uint)piVar1[0x55]) {
    fn_82358FD8(**(undefined4 **)(param_1 + 0x40),auStack_270,0x20,0xffffffff821b92dc);
    fn_82528EE0(auStack_270,0x20,0xffffffff821b92f0,auStack_270,
                      (ulonglong)*(uint *)(*(int *)(param_1 + 0x40) + 0x148) + 1);
  }
  else {
    fn_82358FD8(**(undefined4 **)(param_1 + 0x40),auStack_270,0x20,0xffffffff821b9300);
  }
  iVar2 = *(int *)(param_1 + 0x40);
  if ((*(int *)(iVar2 + 0x13c) - *(int *)(iVar2 + 0x138)) / 0x18 != 0) {
    uVar3 = *(uint *)(iVar2 + 0x138);
    if (((uint)((int)(*(int *)(iVar2 + 0x13c) - uVar3) / 0x18) < 2) ||
       (*(int *)(iVar2 + 0x148) + 1U < 2)) {
      lVar6 = 0;
    }
    else {
      lVar6 = (ulonglong)uVar3 + 0x18;
    }
    uVar3 = *(uint *)(iVar2 + 0x138);
    if (((uint)((int)(*(int *)(iVar2 + 0x13c) - uVar3) / 0x18) < 3) ||
       (*(int *)(iVar2 + 0x148) + 1U < 3)) {
      lVar8 = 0;
    }
    else {
      lVar8 = (ulonglong)uVar3 + 0x30;
    }
    uVar5 = 2;
    if (*(int *)(iVar2 + 0xf8) == 0) {
      uVar5 = 1;
    }
    fn_822A4830(lVar7,uVar5,*(undefined4 *)(iVar2 + 0x114));
    fn_82528EE0(auStack_230,0x100,0xffffffff821b9314,(ulonglong)*(uint *)(param_1 + 0x40) + 10
                      ,auStack_270);
    fn_822A4C18(lVar7,1);
    fn_822A3E40(lVar7,auStack_230);
    puVar4 = *(undefined4 **)(param_1 + 0x40);
    fn_822A3EC0(lVar7,*puVar4,puVar4 + 0x48,puVar4[0x4e],lVar6,lVar8,puVar4[0x3e] == 0);
  }
  return;
}

