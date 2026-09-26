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
extern int fn_82D94918();


byte * fn_82D82548(byte *param_1,int param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_2 + 0x2c);
  piVar3 = *(int **)(param_2 + 0x28);
  if (piVar3 != piVar3 + uVar1) {
    do {
      iVar2 = *piVar3;
      iVar5 = 0;
      if (0 < *(int *)(iVar2 + 0x4c)) {
        iVar4 = 0;
        do {
          fn_82D94918(param_3,*(undefined4 *)(*(int *)(iVar2 + 0x48) + iVar4));
          iVar5 = iVar5 + 1;
          iVar4 = iVar4 + 4;
        } while (iVar5 < *(int *)(iVar2 + 0x4c));
      }
      uVar1 = *(uint *)(param_2 + 0x2c);
      piVar3 = piVar3 + 1;
    } while (piVar3 != (int *)(uVar1 * 4 + *(int *)(param_2 + 0x28)));
  }
  *param_1 = (byte)((byte)(-(ulonglong)uVar1 >> 0x18) & ~(byte)(uVar1 >> 0x18)) >> 7;
  return param_1;
}

