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
extern int fn_82BA02A8();
extern int fn_82BE5B80();
extern int fn_82BE5C30();
extern int fn_82BE5CC0();
extern int fn_82BE5F40();
extern int fn_82BE68A0();
extern int fn_82BE68F0();


bool fn_82BEBB18(int param_1)

{
  int iVar3;
  char cVar6;
  uint uVar4;
  ulonglong uVar1;
  int iVar5;
  longlong lVar2;
  char cVar8;
  uint uVar7;
  
  cVar8 = '\0';
  *(undefined4 *)(param_1 + 0x20) = 0;
  iVar3 = fn_82BE68A0();
  if ((iVar3 != 0) && (cVar6 = fn_82BE5C30(param_1), cVar6 == -0x2e)) {
    uVar4 = fn_82BE5CC0(param_1);
    iVar3 = *(int *)(param_1 + 0x20);
    uVar7 = 0;
    while (uVar7 < uVar4) {
      uVar1 = fn_82BE5C30(param_1);
      if ((uVar1 & 0xff) == 0x1e) {
        fn_82BE68F0(param_1,uVar1);
        fn_82BA02A8(param_1,*(undefined4 *)(param_1 + 0x30),0x14);
        uVar4 = uVar4 - 0x16;
        cVar8 = cVar8 + '\x01';
      }
      else {
        iVar5 = fn_82BE5F40();
        if (iVar5 == 0) {
          return false;
        }
      }
      uVar7 = *(int *)(param_1 + 0x20) - iVar3;
    }
    if (cVar8 == '\x01') {
      lVar2 = fn_82BE5B80(param_1);
      return lVar2 != 0;
    }
  }
  return false;
}

