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
extern unsigned int lbl_82005758;


void fn_827BAFF8(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  
  iVar1 = param_1[9];
  if (iVar1 == 1) {
    param_1[10] = 1;
    param_1[0xb] = 1;
    goto LAB_827bb184;
  }
  if (iVar1 != 3) {
    if (iVar1 == 4) {
      if ((*(char *)(param_1 + 0x42) == '\0') || (*(char *)((int)param_1 + 0x109) == '\0')) {
        param_1[10] = 4;
      }
      else {
        if (*(char *)((int)param_1 + 0x109) != '\x02') {
          *(undefined4 *)(*param_1 + 0x14) = 0x72;
          *(uint *)(*param_1 + 0x18) = (uint)*(byte *)((int)param_1 + 0x109);
          (**(code **)(*param_1 + 4))(param_1,0xffffffffffffffff);
        }
        param_1[10] = 5;
      }
      param_1[0xb] = 4;
    }
    else {
      param_1[10] = 0;
      param_1[0xb] = 0;
    }
    goto LAB_827bb184;
  }
  if (*(char *)(param_1 + 0x40) == '\0') {
    if (*(char *)(param_1 + 0x42) == '\0') {
      piVar2 = (int *)param_1[0x31];
      iVar1 = *piVar2;
      iVar3 = piVar2[0x15];
      iVar4 = piVar2[0x2a];
      if (iVar1 == 1) {
        if ((iVar3 == 2) && (iVar4 == 3)) goto LAB_827bb14c;
      }
      else if (((iVar1 == 0x52) && (iVar3 == 0x47)) && (iVar4 == 0x42)) goto LAB_827bb174;
      iVar5 = *param_1;
      uVar6 = 1;
      *(int *)(iVar5 + 0x1c) = iVar3;
      *(int *)(iVar5 + 0x20) = iVar4;
      *(int *)(iVar5 + 0x18) = iVar1;
      *(undefined4 *)(*param_1 + 0x14) = 0x6f;
LAB_827bb138:
      (**(code **)(*param_1 + 4))(param_1,uVar6);
      goto LAB_827bb14c;
    }
    if (*(char *)((int)param_1 + 0x109) != '\0') {
      if (*(char *)((int)param_1 + 0x109) == '\x01') goto LAB_827bb14c;
      uVar6 = 0xffffffffffffffff;
      *(undefined4 *)(*param_1 + 0x14) = 0x72;
      *(uint *)(*param_1 + 0x18) = (uint)*(byte *)((int)param_1 + 0x109);
      goto LAB_827bb138;
    }
LAB_827bb174:
    param_1[10] = 2;
  }
  else {
LAB_827bb14c:
    param_1[10] = 3;
  }
  param_1[0xb] = 2;
LAB_827bb184:
  param_1[0xc] = 1;
  param_1[0xd] = 1;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)((int)param_1 + 0x41) = 0;
  param_1[0x11] = 0;
  uVar6 = lbl_82005758;
  *(undefined1 *)(param_1 + 0x12) = 1;
  *(undefined8 *)(param_1 + 0xe) = uVar6;
  *(undefined1 *)((int)param_1 + 0x49) = 1;
  *(undefined1 *)((int)param_1 + 0x4a) = 0;
  param_1[0x13] = 2;
  *(undefined1 *)(param_1 + 0x14) = 1;
  param_1[0x15] = 0x100;
  param_1[0x1d] = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined1 *)((int)param_1 + 0x59) = 0;
  *(undefined1 *)((int)param_1 + 0x5a) = 0;
  return;
}

