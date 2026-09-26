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
extern int fn_827C86F0();
extern int fn_827C8838();


void fn_827C8A48(int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined1 uVar3;
  
  iVar1 = param_1[0x4f];
  uVar2 = *(uint *)(iVar1 + 0x10);
  if (uVar2 == 0) {
    fn_827C86F0(param_1);
    fn_827C8838(param_1);
    if (*(char *)(param_1 + 0x2c) == '\0') {
      (**(code **)param_1[0x54])(param_1);
      (**(code **)param_1[0x55])(param_1);
      (**(code **)param_1[0x51])(param_1,0);
    }
    (**(code **)param_1[0x56])(param_1);
    (**(code **)param_1[0x57])(param_1,*(undefined1 *)((int)param_1 + 0xb2));
    (**(code **)param_1[0x52])
              (param_1,-(uint)(1 < *(uint *)(iVar1 + 0x18)) - ((int)*(uint *)(iVar1 + 0x18) >> 0x1f)
                       & 3);
    (**(code **)param_1[0x50])(param_1,0);
    uVar3 = 0;
    if (*(char *)((int)param_1 + 0xb2) == '\0') {
      uVar3 = 1;
    }
  }
  else {
    if (uVar2 == 1) {
      fn_827C86F0(param_1);
      fn_827C8838(param_1);
      if (((param_1[0x4b] == 0) && (param_1[0x4d] != 0)) && (*(char *)((int)param_1 + 0xb1) == '\0')
         ) {
        *(undefined4 *)(iVar1 + 0x10) = 2;
        *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
        goto LAB_827c8ae4;
      }
      (**(code **)param_1[0x57])(param_1,1);
      (**(code **)param_1[0x52])(param_1,2);
    }
    else {
      if (2 < uVar2) {
        *(undefined4 *)(*param_1 + 0x14) = 0x30;
        (**(code **)*param_1)();
        goto LAB_827c8c8c;
      }
LAB_827c8ae4:
      if (*(char *)((int)param_1 + 0xb2) == '\0') {
        fn_827C86F0(param_1);
        fn_827C8838(param_1);
      }
      (**(code **)param_1[0x57])(param_1,0);
      (**(code **)param_1[0x52])(param_1,2);
      if (*(int *)(iVar1 + 0x1c) == 0) {
        (**(code **)(param_1[0x53] + 4))(param_1);
      }
      (**(code **)(param_1[0x53] + 8))(param_1);
    }
    uVar3 = 0;
  }
  *(undefined1 *)(iVar1 + 0xc) = uVar3;
LAB_827c8c8c:
  *(bool *)(iVar1 + 0xd) = *(int *)(iVar1 + 0x18) + -1 == *(int *)(iVar1 + 0x14);
  if (param_1[2] != 0) {
    *(int *)(param_1[2] + 0xc) = *(int *)(iVar1 + 0x14);
    *(undefined4 *)(param_1[2] + 0x10) = *(undefined4 *)(iVar1 + 0x18);
  }
  return;
}

