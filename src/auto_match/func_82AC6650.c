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
extern int fn_82AA65B0();
extern int fn_82ABDAA0();
extern int fn_82AC65F0();


undefined8 fn_82AC6650(undefined8 param_1,int param_2,int param_3,int *param_4)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  
  iVar3 = 0;
  if ((*(uint *)(param_2 + 8) >> 0x11 & 1) != 0) {
    iVar3 = fn_82AC65F0(param_2);
    iVar3 = *(int *)(iVar3 + 0xc);
  }
  uVar1 = *(uint *)(param_3 + 8);
  uVar6 = 1;
  if (((uVar1 & 3) != 0) ||
     (((uVar5 = uVar1 >> 2 & 0xf, uVar5 != 1 && (uVar5 != 8)) && (uVar5 != 9)))) goto LAB_82ac6730;
  uVar7 = (~(ulonglong)uVar1 & 0xffffffff) >> 7 & 1;
  if ((uVar7 == 0) && ((uVar1 >> 8 & 1) == 0)) goto LAB_82ac6730;
  if (iVar3 == 0) {
LAB_82ac670c:
    if (uVar7 != 0) {
      fn_82AA65B0(param_1,0xe17);
    }
    *(uint *)(param_3 + 8) = *(uint *)(param_3 + 8) & 0xfffffe00 | 0xc0;
  }
  else {
    cVar4 = fn_82ABDAA0(iVar3);
    if (cVar4 != '\0') {
      uVar1 = *(uint *)(iVar3 + 8) >> 7 & 0x7f;
      if ((uVar1 < 0x15) || (bVar2 = true, 0x18 < uVar1)) {
        bVar2 = false;
      }
      if (!bVar2) goto LAB_82ac670c;
    }
    uVar6 = 0;
  }
LAB_82ac6730:
  *param_4 = iVar3;
  return uVar6;
}

