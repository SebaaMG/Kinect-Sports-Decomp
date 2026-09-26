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
extern int fn_828AC508();
extern int fn_828CF9E8();
extern unsigned int lbl_821AAD20;


void fn_828B9020(int param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  double dVar4;
  
  if (*(char *)(param_1 + 0x9c) == '\0') {
    iVar1 = *(int *)(param_1 + 0x94);
    if (iVar1 == 0) {
      *(undefined1 *)(param_1 + 0x9d) = 0;
      *(undefined1 *)(param_1 + 0x9e) = 0;
      *(undefined1 *)(param_1 + 0x9c) = 1;
      *(undefined4 *)(param_1 + 0xa0) = lbl_821AAD20;
      return;
    }
    iVar2 = *(int *)(iVar1 + 0x7c);
    if ((((iVar2 - 1U < 5) && (iVar2 != 1)) && (iVar2 != 2)) && (iVar2 != 3)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      *(undefined1 *)(param_1 + 0x9c) = 1;
      if (*(int *)(iVar1 + 0x80) != 1) {
        *(undefined1 *)(param_1 + 0x9d) = 0;
        return;
      }
      *(undefined1 *)(param_1 + 0x9d) = 1;
      *(undefined1 *)(param_1 + 0x9e) = 1;
      dVar4 = (double)fn_828CF9E8();
      iVar1 = *(int *)(param_1 + 0x94);
      *(float *)(param_1 + 0xa0) = (float)dVar4;
      *(undefined2 *)(param_1 + 0xa8) = *(undefined2 *)(iVar1 + 0x5c);
      *(char *)(param_1 + 0xa4) = *(char *)(iVar1 + 0x58);
      if (*(char *)(iVar1 + 0x58) != '\0') {
        *(undefined1 *)(param_1 + 0xa5) = *(undefined1 *)(iVar1 + 0x59);
        *(undefined1 *)(param_1 + 0xa6) = *(undefined1 *)(iVar1 + 0x5a);
        fn_828AC508(param_1 + 0xb8,iVar1 + 0x60);
        return;
      }
    }
    else if ((iVar2 == 3) && (*(char *)(param_1 + 0x9e) == '\0')) {
      *(undefined1 *)(param_1 + 0x9e) = 1;
    }
  }
  return;
}

