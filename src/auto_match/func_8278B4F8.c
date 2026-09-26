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
extern int fn_8268ACE8();
extern int fn_8278AFF0();
extern int fn_8278B348();


undefined8 fn_8278B4F8(int param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (*(ushort *)(param_1 + 0x2a) != *(ushort *)(param_2 + 0x2a)) {
    return 0;
  }
  if (*(char *)(param_1 + 0x28) != *(char *)(param_2 + 0x28)) {
    return 0;
  }
  if (*(int *)(param_1 + 0x20) != *(int *)(param_2 + 0x20)) {
    return 0;
  }
  if (*(short *)(param_1 + 0x26) != *(short *)(param_2 + 0x26)) {
    return 0;
  }
  uVar1 = *(ushort *)(param_1 + 0x2a) >> 2;
  if ((uVar1 & 1) != (*(ushort *)(param_2 + 0x2a) >> 2 & 1)) {
    return 0;
  }
  if (((uVar1 & 1) != 0) &&
     (iVar4 = thunk_FUN_82f65ac0(((ulonglong)*(uint *)(param_1 + 8) & 0xfffffffc) + 8,
                                 ((ulonglong)*(uint *)(param_2 + 8) & 0xfffffffc) + 8), iVar4 != 0))
  {
    return 0;
  }
  if (*(short *)(param_1 + 0x24) != *(short *)(param_2 + 0x24)) {
    return 0;
  }
  uVar1 = *(ushort *)(param_1 + 0x2a);
  uVar2 = uVar1 >> 0xb;
  if ((uVar2 & 1) != (*(ushort *)(param_2 + 0x2a) >> 0xb & 1)) {
    return 0;
  }
  if ((uVar2 & 1) != 0) {
    if (*(int *)(param_1 + 0x1c) != *(int *)(param_2 + 0x1c)) {
      if (*(int *)(param_1 + 0x1c) == 0) {
        return 0;
      }
      if (*(int *)(param_2 + 0x1c) == 0) {
        return 0;
      }
      cVar5 = fn_8278B348();
      if (cVar5 == '\0') {
        return 0;
      }
    }
  }
  if ((uVar1 & 0x100) == 0) {
LAB_8278b618:
    lVar7 = 0;
  }
  else {
    iVar4 = fn_8268ACE8(param_1 + 0x10);
    lVar7 = 1;
    if (iVar4 == 0) goto LAB_8278b618;
  }
  if ((*(ushort *)(param_2 + 0x2a) & 0x100) == 0) {
LAB_8278b63c:
    lVar6 = 0;
  }
  else {
    iVar4 = fn_8268ACE8(param_2 + 0x10);
    lVar6 = 1;
    if (iVar4 == 0) goto LAB_8278b63c;
  }
  if (lVar7 != lVar6) {
    return 0;
  }
  if ((*(ushort *)(param_1 + 0x2a) & 0x100) != 0) {
    iVar4 = fn_8268ACE8(param_1 + 0x10);
    bVar3 = true;
    if (iVar4 != 0) goto LAB_8278b674;
  }
  bVar3 = false;
LAB_8278b674:
  if (((!bVar3) ||
      (iVar4 = thunk_FUN_82f65ac0(((ulonglong)*(uint *)(param_1 + 0x10) & 0xfffffffc) + 8,
                                  ((ulonglong)*(uint *)(param_2 + 0x10) & 0xfffffffc) + 8),
      iVar4 == 0)) &&
     (((iVar4 = *(int *)(param_1 + 0x18), iVar4 != 0 &&
       ((*(int *)(param_2 + 0x18) != 0 && (cVar5 = fn_8278AFF0(iVar4), cVar5 != '\0')))) ||
      (iVar4 == *(int *)(param_2 + 0x18))))) {
    return 1;
  }
  return 0;
}

