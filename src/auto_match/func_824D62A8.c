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
extern unsigned int lbl_82191118;
extern unsigned int lbl_831D426C;


undefined8 fn_824D62A8(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  double dVar4;
  double dVar5;
  
  if (*(float *)(param_1 + 0x160) < lbl_831D426C) {
LAB_824d647c:
    uVar2 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x110) == 0) {
LAB_824d641c:
      dVar5 = (double)lbl_82191118;
      if ((*(int **)(param_1 + 0xf4) == (int *)0x0) ||
         (dVar4 = (double)(**(code **)(**(int **)(param_1 + 0xf4) + 0x14))(), dVar4 <= dVar5)) {
        if ((*(int **)(param_1 + 0xf8) != (int *)0x0) &&
           (dVar4 = (double)(**(code **)(**(int **)(param_1 + 0xf8) + 0x14))(), dVar5 < dVar4)) {
          return 1;
        }
        goto LAB_824d647c;
      }
    }
    else {
      iVar1 = *(int *)(*(int *)(param_1 + 0x110) + 0x3c);
      if (*(char *)(iVar1 + 0x1d) == '\0') {
        cVar3 = *(char *)(iVar1 + 0x1c);
      }
      else {
        cVar3 = '\x01';
        *(undefined1 *)(iVar1 + 0x1d) = 0;
      }
      if (cVar3 == '\0') goto LAB_824d641c;
      if (*(int *)(param_1 + 0x114) != 0) {
        iVar1 = *(int *)(*(int *)(param_1 + 0x114) + 0x3c);
        if (*(char *)(iVar1 + 0x1d) == '\0') {
          cVar3 = *(char *)(iVar1 + 0x1c);
        }
        else {
          cVar3 = '\x01';
          *(undefined1 *)(iVar1 + 0x1d) = 0;
        }
        if (cVar3 == '\0') goto LAB_824d641c;
      }
      if (*(int *)(param_1 + 0x118) != 0) {
        iVar1 = *(int *)(*(int *)(param_1 + 0x118) + 0x3c);
        if (*(char *)(iVar1 + 0x1d) == '\0') {
          cVar3 = *(char *)(iVar1 + 0x1c);
        }
        else {
          cVar3 = '\x01';
          *(undefined1 *)(iVar1 + 0x1d) = 0;
        }
        if (cVar3 == '\0') goto LAB_824d641c;
      }
      if (*(int *)(param_1 + 0x11c) != 0) {
        iVar1 = *(int *)(*(int *)(param_1 + 0x11c) + 0x3c);
        if (*(char *)(iVar1 + 0x1d) == '\0') {
          cVar3 = *(char *)(iVar1 + 0x1c);
        }
        else {
          cVar3 = '\x01';
          *(undefined1 *)(iVar1 + 0x1d) = 0;
        }
        if (cVar3 == '\0') goto LAB_824d641c;
      }
      if (*(int *)(param_1 + 0x120) != 0) {
        iVar1 = *(int *)(*(int *)(param_1 + 0x120) + 0x3c);
        if (*(char *)(iVar1 + 0x1d) == '\0') {
          cVar3 = *(char *)(iVar1 + 0x1c);
        }
        else {
          cVar3 = '\x01';
          *(undefined1 *)(iVar1 + 0x1d) = 0;
        }
        if (cVar3 == '\0') goto LAB_824d641c;
      }
      if (*(int *)(param_1 + 0x124) != 0) {
        iVar1 = *(int *)(*(int *)(param_1 + 0x124) + 0x3c);
        if (*(char *)(iVar1 + 0x1d) == '\0') {
          cVar3 = *(char *)(iVar1 + 0x1c);
        }
        else {
          cVar3 = '\x01';
          *(undefined1 *)(iVar1 + 0x1d) = 0;
        }
        if (cVar3 == '\0') goto LAB_824d641c;
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}

