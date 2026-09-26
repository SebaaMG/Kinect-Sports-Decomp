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
extern int fn_828865A0();
extern int fn_828ACC40();
extern int fn_828AD740();
extern int fn_828AE818();
extern int fn_828D45F8();
extern int fn_828D47D0();
extern int fn_828E09C8();
extern int fn_828E0DE0();


void fn_828E0B48(int param_1)

{
  bool bVar1;
  char cVar4;
  undefined8 uVar2;
  int iVar3;
  
  cVar4 = fn_828AD740(*(undefined4 *)(param_1 + 0x14));
  if ((cVar4 != '\0') && (cVar4 = fn_828865A0(param_1), cVar4 != '\0')) {
    uVar2 = fn_828D45F8(param_1);
    iVar3 = fn_828D47D0(uVar2,3,0);
    if (iVar3 != 0) {
      fn_828D45F8(param_1);
      fn_828E09C8();
    }
  }
  cVar4 = fn_828AD740(*(undefined4 *)(param_1 + 0x14));
  if ((cVar4 == '\0') && (cVar4 = fn_828865A0(param_1), cVar4 != '\0')) {
    uVar2 = fn_828D45F8(param_1);
    iVar3 = fn_828D47D0(uVar2,3,0);
    if (iVar3 == 0) goto LAB_828e0c20;
    uVar2 = fn_828D45F8(param_1);
    iVar3 = fn_828D47D0(uVar2,4,0);
    if ((iVar3 != 0) || (bVar1 = true, *(char *)(param_1 + 0x20) == '\0')) goto LAB_828e0c20;
  }
  else {
LAB_828e0c20:
    bVar1 = false;
  }
  if (bVar1) {
    if (*(char *)(param_1 + 0x21) != '\0') goto LAB_828e0cac;
    iVar3 = (**(code **)(**(int **)(param_1 + 0x14) + 0x34))();
    if (iVar3 == 0) {
      *(undefined1 *)(param_1 + 0x22) = 1;
      *(undefined1 *)(param_1 + 0x21) = 1;
      goto LAB_828e0cac;
    }
    if (iVar3 != 1) goto LAB_828e0cac;
    *(undefined1 *)(param_1 + 0x21) = 1;
  }
  else {
    cVar4 = fn_828865A0(param_1);
    if (cVar4 != '\0') {
      uVar2 = fn_828D45F8(param_1);
      iVar3 = fn_828D47D0(uVar2,3,0);
      if (iVar3 != 0) goto LAB_828e0cac;
    }
    *(undefined1 *)(param_1 + 0x21) = 0;
  }
  *(undefined1 *)(param_1 + 0x22) = 0;
LAB_828e0cac:
  if (bVar1) {
    if (*(char *)(param_1 + 0x22) != '\0') {
      cVar4 = fn_828ACC40(*(undefined4 *)(param_1 + 0x18));
      if (cVar4 == '\0') {
        fn_828AE818(*(undefined4 *)(param_1 + 0x18),0x15);
      }
      if (*(int *)(param_1 + 8) != 1) {
        fn_828E0DE0(param_1,0);
        *(undefined4 *)(param_1 + 8) = 1;
      }
      *(undefined8 *)(param_1 + 0x30) = 0;
      fn_828E0DE0(param_1,4);
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x22) = 0;
    *(undefined1 *)(param_1 + 0x21) = 0;
  }
  return;
}

