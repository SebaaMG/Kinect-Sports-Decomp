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
extern int fn_828202C8();
extern int fn_82820368();
extern int fn_828204F8();
extern int fn_82820680();
extern int fn_82820718();


undefined8 fn_82820880(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  
  iVar1 = *(int *)(param_1 + 0x20);
  iVar6 = 0;
  iVar7 = 0;
  lVar8 = 2;
  **(undefined4 **)(iVar1 + 0x2c) = *(undefined4 *)(param_1 + 0x1c);
  do {
    iVar2 = *(int *)(param_1 + 0x1c) + iVar7;
    iVar3 = iVar6 + *(int *)(iVar1 + 0x2c);
    iVar7 = iVar7 + 0x14;
    iVar6 = iVar6 + 4;
    *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar2 + 0x5c);
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  uVar5 = 0;
  if (*(char *)(*(int *)(param_1 + 0x1c) + 0x51) != '\0') {
    iVar7 = 0;
    iVar6 = 0xc;
    do {
      uVar5 = uVar5 + 1;
      iVar2 = iVar7 + *(int *)(param_1 + 0x30);
      iVar7 = iVar7 + 0x21;
      *(undefined4 *)(iVar6 + *(int *)(iVar1 + 0x2c)) = *(undefined4 *)(iVar2 + 0xd);
      iVar6 = iVar6 + 4;
    } while (uVar5 < *(byte *)(*(int *)(param_1 + 0x1c) + 0x51));
  }
  fn_82820680(param_1);
  fn_82820718(param_1);
  fn_828202C8(param_1);
  uVar4 = fn_82820368(param_1);
  if ((int)uVar4 == 0) {
    fn_828204F8(param_1);
    uVar4 = 0;
  }
  return uVar4;
}

