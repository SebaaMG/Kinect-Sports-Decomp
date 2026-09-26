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
extern int fn_82AC86B0();


undefined8 fn_82AC87A0(int param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  
  uVar2 = (uint)param_2[2] >> 7 & 0x7f;
  if ((uVar2 < 0x5b) || (bVar5 = true, 0x5e < uVar2)) {
    bVar5 = false;
  }
  if ((bVar5) || (bVar5 = false, uVar2 == 0x7b)) {
    bVar5 = true;
  }
  if ((!bVar5) &&
     ((((iVar4 = fn_82AC86B0(param_2), iVar4 == 0 || (iVar4 == 4)) ||
       (*(int *)(param_1 + 0x28) == 0)) || (*(int *)(param_1 + 0x28) == iVar4)))) {
    if (iVar4 != 2) {
      return 0;
    }
    puVar1 = (uint *)*param_2;
    do {
      if (puVar1 == (uint *)0x0) {
        return 0;
      }
      uVar2 = *puVar1;
      if (((uVar2 & 0x40000000) == 0) || (bVar5 = true, (uVar2 & 0xe000000) != 0)) {
        bVar5 = false;
      }
      if (bVar5) {
        uVar3 = *(uint *)(puVar1[3] + 8) >> 7 & 0x7f;
        if ((uVar3 < 0x60) || (bVar5 = true, 0x66 < uVar3)) {
          bVar5 = false;
        }
        if ((bVar5) && ((1 << (uVar2 >> 0xd & 0x3f) & *(uint *)(param_1 + 0x30)) != 0)) {
          return 1;
        }
      }
      puVar1 = (uint *)puVar1[1];
    } while( true );
  }
  return 1;
}

