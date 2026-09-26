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
extern int fn_8289F020();
extern int fn_8289F0B8();
extern int fn_828ACCE8();
extern int fn_828D2DB8();
extern int fn_828D2EE0();
extern int fn_828D2F28();


/* WARNING: Removing unreachable block (ram,0x828db1c0) */

void fn_828DB128(int param_1)

{
  bool bVar1;
  char cVar5;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  cVar5 = fn_828ACCE8(*(undefined4 *)(param_1 + 8));
  if (cVar5 != '\0') {
    uVar2 = fn_828D2EE0(param_1);
    bVar1 = false;
    if (uVar2 < 0x2711) goto LAB_828db16c;
  }
  bVar1 = true;
LAB_828db16c:
  if (bVar1) {
    fn_828D2F28(param_1);
  }
  else {
    iVar3 = fn_8289F020(*(undefined4 *)(param_1 + 8));
    iVar4 = fn_8289F0B8(*(undefined4 *)(param_1 + 8));
    if (iVar3 == iVar4) {
      if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x1c)) {
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x18);
      }
      fn_828D2DB8(param_1,4);
    }
  }
  return;
}

