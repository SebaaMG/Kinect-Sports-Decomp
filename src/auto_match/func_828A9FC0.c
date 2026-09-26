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
extern int fn_828A9448();
extern int fn_828A94B0();
extern int fn_828ACC40();
extern int fn_828ACCE8();
extern int fn_828ACD00();


/* WARNING: Removing unreachable block (ram,0x828aa060) */
/* WARNING: Removing unreachable block (ram,0x828aa0e4) */

void fn_828A9FC0(int param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  
  cVar3 = fn_828ACD00();
  if (cVar3 == '\0') {
    cVar3 = fn_828ACC40(param_1);
    bVar1 = false;
    if (cVar3 != '\0') goto LAB_828a9ff8;
  }
  else {
LAB_828a9ff8:
    bVar1 = true;
  }
  cVar3 = fn_828ACCE8(param_1);
  if (cVar3 != '\0') {
    cVar3 = fn_828A9448(param_1);
    bVar2 = true;
    if (cVar3 == '\0') goto LAB_828aa030;
  }
  bVar2 = false;
LAB_828aa030:
  if (bVar1) {
    if (*(int *)(param_1 + 0x188) != *(int *)(param_1 + 0x18c)) {
      *(int *)(param_1 + 0x18c) = *(int *)(param_1 + 0x188);
    }
  }
  else if (bVar2) {
    uVar4 = (ulonglong)*(uint *)(param_1 + 0x188);
    if (uVar4 != *(uint *)(param_1 + 0x18c)) {
      do {
        fn_828A94B0(param_1,uVar4);
        uVar4 = uVar4 + 0x10;
      } while ((uVar4 & 0xffffffff) != (ulonglong)*(uint *)(param_1 + 0x18c));
    }
    if (*(int *)(param_1 + 0x188) != *(int *)(param_1 + 0x18c)) {
      *(int *)(param_1 + 0x18c) = *(int *)(param_1 + 0x188);
    }
  }
  return;
}

