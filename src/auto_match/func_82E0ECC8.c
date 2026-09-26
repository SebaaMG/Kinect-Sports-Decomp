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
extern int fn_82CEAC20();
extern int fn_82CFBBF0();
extern int fn_82CFD5A8();
extern int fn_82CFD5B0();
extern int fn_82E181D8();


undefined8 fn_82E0ECC8(undefined8 param_1,int param_2,int param_3)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar8;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar9;
  bool bVar10;
  
  cVar1 = *(char *)(param_2 + 0xc);
  cVar2 = *(char *)(param_3 + 0xc);
  if ((cVar1 == cVar2) || ((cVar1 == '\x1a' && (cVar2 == '\x16')))) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  if ((cVar1 != '\x1d') || (bVar9 = true, cVar2 != '!')) {
    bVar9 = false;
  }
  if ((((cVar1 == '\x1c') && (cVar2 == '\x14')) && (*(char *)(param_3 + 0xd) == '\x19')) &&
     (iVar8 = fn_82CFD5B0(param_3), iVar8 != 0)) {
    fn_82CFD5A8(param_3);
    uVar6 = fn_82CEAC20();
    uVar7 = fn_82CEAC20(0xffffffff8323ab38);
    iVar8 = fn_82CFBBF0(uVar7,uVar6);
    bVar4 = true;
    if (iVar8 != 0) goto LAB_82e0ed8c;
  }
  else {
LAB_82e0ed8c:
    bVar4 = false;
  }
  cVar1 = *(char *)(param_2 + 0xd);
  cVar2 = *(char *)(param_3 + 0xd);
  if ((cVar1 == cVar2) || ((cVar1 == '\x1d' && (cVar2 == '!')))) {
    bVar10 = true;
  }
  else {
    bVar10 = false;
  }
  if (((cVar1 == '\x1c') && (cVar2 == '\x14')) && (iVar8 = fn_82CFD5B0(param_3), iVar8 != 0)) {
    fn_82CFD5A8(param_3);
    uVar6 = fn_82CEAC20();
    uVar7 = fn_82CEAC20(0xffffffff8323ab38);
    iVar8 = fn_82CFBBF0(uVar7,uVar6);
    bVar3 = true;
    if (iVar8 == 0) goto LAB_82e0ee14;
  }
  bVar3 = false;
LAB_82e0ee14:
  iVar8 = fn_82E181D8(param_1,param_2,param_3);
  if ((((iVar8 != 0) || (bVar9)) || (bVar4)) || ((bVar5 && ((bVar10 || (bVar3)))))) {
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}

