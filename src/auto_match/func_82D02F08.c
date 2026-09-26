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
extern int fn_82D02880();


uint fn_82D02F08(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  uVar3 = *(uint *)(param_1 + 0x14);
  iVar2 = fn_82D02880(uVar3);
  iVar4 = 0x1f;
  if (iVar2 < 0x20) {
    piVar5 = (int *)(param_1 + 0x94);
    do {
      iVar6 = *piVar5;
      if (iVar6 != 0) {
        do {
          uVar1 = *(uint *)(iVar6 + 4) & 0xfffffffc;
          if (uVar3 < uVar1) {
            uVar3 = uVar1;
          }
          iVar2 = *(int *)(iVar6 + 0x14);
          if (*(int *)(iVar6 + 0x14) == 0) {
            iVar2 = *(int *)(iVar6 + 0x10);
          }
          iVar6 = iVar2;
        } while (iVar6 != 0);
        return uVar3;
      }
      iVar4 = iVar4 + -1;
      piVar5 = piVar5 + -1;
    } while (iVar2 <= iVar4);
  }
  return uVar3;
}

