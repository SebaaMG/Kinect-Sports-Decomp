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
extern int fn_827C1B78();
extern int fn_827C1C40();
extern int fn_827C1EC0();
extern int fn_827C3578();
extern int fn_827C4368();
extern int fn_827C5128();
extern int fn_827C9818();
extern int fn_827C9BB0();
extern int fn_827CA008();
extern int fn_827CA648();
extern int fn_827CAD40();
extern int fn_827CB520();
extern int fn_827CC900();
extern int fn_827CD708();


void fn_827C1F78(int *param_1)

{
  int iVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar1 = param_1[0x60];
  fn_827C1C40();
  fn_827C1EC0(param_1);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  uVar2 = fn_827C1B78(param_1);
  *(undefined1 *)(iVar1 + 0x10) = uVar2;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  if ((*(char *)((int)param_1 + 0x4a) == '\0') || (*(char *)(param_1 + 0x10) == '\0')) {
    *(undefined1 *)(param_1 + 0x16) = 0;
    *(undefined1 *)((int)param_1 + 0x59) = 0;
    *(undefined1 *)((int)param_1 + 0x5a) = 0;
  }
  if (*(char *)((int)param_1 + 0x4a) == '\0') goto LAB_827c2070;
  if (*(char *)((int)param_1 + 0x41) != '\0') {
    *(undefined4 *)(*param_1 + 0x14) = 0x2f;
    (**(code **)*param_1)(param_1);
  }
  if (param_1[0x19] == 3) {
    if (param_1[0x1d] == 0) {
      if (*(char *)(param_1 + 0x14) == '\0') goto LAB_827c2028;
      *(undefined1 *)((int)param_1 + 0x5a) = 1;
    }
    else {
      *(undefined1 *)((int)param_1 + 0x59) = 1;
    }
  }
  else {
    *(undefined1 *)((int)param_1 + 0x59) = 0;
    *(undefined1 *)((int)param_1 + 0x5a) = 0;
    param_1[0x1d] = 0;
LAB_827c2028:
    *(undefined1 *)(param_1 + 0x16) = 1;
  }
  if (*(char *)(param_1 + 0x16) != '\0') {
    fn_827CD708(param_1);
    *(int *)(iVar1 + 0x14) = param_1[0x6a];
  }
  if ((*(char *)((int)param_1 + 0x5a) != '\0') || (*(char *)((int)param_1 + 0x59) != '\0')) {
    fn_827CC900(param_1);
    *(int *)(iVar1 + 0x18) = param_1[0x6a];
  }
LAB_827c2070:
  if (*(char *)((int)param_1 + 0x41) == '\0') {
    if (*(char *)(iVar1 + 0x10) == '\0') {
      fn_827CAD40(param_1);
      fn_827CA648(param_1);
    }
    else {
      fn_827CB520();
    }
    fn_827CA008(param_1,*(undefined1 *)((int)param_1 + 0x5a));
  }
  fn_827C9BB0(param_1);
  if (*(char *)((int)param_1 + 0xc9) == '\0') {
    if (*(char *)(param_1 + 0x32) == '\0') {
      fn_827C4368(param_1);
    }
    else {
      fn_827C5128();
    }
  }
  else {
    *(undefined4 *)(*param_1 + 0x14) = 1;
    (**(code **)*param_1)(param_1);
  }
  if ((*(char *)(param_1[100] + 0x10) != '\0') || (uVar3 = 0, *(char *)(param_1 + 0x10) != '\0')) {
    uVar3 = 1;
  }
  fn_827C3578(param_1,uVar3);
  if (*(char *)((int)param_1 + 0x41) == '\0') {
    fn_827C9818(param_1,0);
  }
  (**(code **)(param_1[1] + 0x18))(param_1);
  (**(code **)(param_1[100] + 8))(param_1);
  if (((param_1[2] != 0) && (*(char *)(param_1 + 0x10) == '\0')) &&
     (*(char *)(param_1[100] + 0x10) != '\0')) {
    iVar4 = param_1[9];
    if (*(char *)(param_1 + 0x32) != '\0') {
      iVar4 = iVar4 * 3 + 2;
    }
    *(undefined4 *)(param_1[2] + 4) = 0;
    *(int *)(param_1[2] + 8) = param_1[0x47] * iVar4;
    *(undefined4 *)(param_1[2] + 0xc) = 0;
    *(uint *)(param_1[2] + 0x10) =
         ((uint)LZCOUNT((uint)*(byte *)((int)param_1 + 0x5a)) >> 5 ^ 1) + 2;
    *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 1;
  }
  return;
}

