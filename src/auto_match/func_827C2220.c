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


void fn_827C2220(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = param_1[0x60];
  if (*(char *)(iVar1 + 8) == '\0') {
    if ((*(char *)((int)param_1 + 0x4a) != '\0') && (param_1[0x1d] == 0)) {
      if ((*(char *)(param_1 + 0x14) == '\0') || (*(char *)((int)param_1 + 0x5a) == '\0')) {
        if (*(char *)(param_1 + 0x16) == '\0') {
          *(undefined4 *)(*param_1 + 0x14) = 0x2e;
          (**(code **)*param_1)(param_1);
        }
        else {
          param_1[0x6a] = *(int *)(iVar1 + 0x14);
        }
      }
      else {
        param_1[0x6a] = *(int *)(iVar1 + 0x18);
        *(undefined1 *)(iVar1 + 8) = 1;
      }
    }
    (**(code **)param_1[0x67])(param_1);
    (**(code **)(param_1[0x62] + 8))(param_1);
    if (*(char *)((int)param_1 + 0x41) != '\0') goto LAB_827c23cc;
    if (*(char *)(iVar1 + 0x10) == '\0') {
      (**(code **)param_1[0x69])(param_1);
    }
    (**(code **)param_1[0x68])(param_1);
    if (*(char *)((int)param_1 + 0x4a) != '\0') {
      (**(code **)param_1[0x6a])(param_1,*(undefined1 *)(iVar1 + 8));
    }
    (**(code **)param_1[99])(param_1,-(*(char *)(iVar1 + 8) != '\0') & 3);
    uVar2 = 0;
  }
  else {
    *(undefined1 *)(iVar1 + 8) = 0;
    (**(code **)param_1[0x6a])(param_1,0);
    (**(code **)param_1[99])(param_1,2);
    uVar2 = 2;
  }
  (**(code **)param_1[0x61])(param_1,uVar2);
LAB_827c23cc:
  if (param_1[2] != 0) {
    *(undefined4 *)(param_1[2] + 0xc) = *(undefined4 *)(iVar1 + 0xc);
    *(uint *)(param_1[2] + 0x10) =
         ((uint)LZCOUNT((uint)*(byte *)(iVar1 + 8)) >> 5 ^ 1) + 1 + *(int *)(iVar1 + 0xc);
    if ((*(char *)(param_1 + 0x10) != '\0') && (*(char *)(param_1[100] + 0x11) == '\0')) {
      *(uint *)(param_1[2] + 0x10) =
           ((uint)LZCOUNT((uint)*(byte *)((int)param_1 + 0x5a)) >> 5 ^ 1) + 1 +
           *(int *)(param_1[2] + 0x10);
    }
  }
  return;
}

