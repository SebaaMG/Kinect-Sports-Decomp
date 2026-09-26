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
extern unsigned int *auStack_3c;
extern int fn_82F147C8();
extern unsigned int iStack_40;
extern unsigned int iStack_44;
extern unsigned int iStack_48;
extern unsigned int iStack_4c;
extern unsigned int uStack_50;


undefined8 fn_82F14A70(int param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  uint auStack_3c [15];
  
  uVar1 = *param_2;
  puVar2 = *(uint **)(*(int *)(param_1 + 0x48) + 0x58);
  if ((uVar1 & 4) == 0) {
    uVar3 = *(uint *)(*(int *)(param_1 + 0x48) + 0x24);
    iVar6 = (0x80 >> (uVar3 & 0x3f)) + 0x1e;
    iVar4 = (int)uVar1 >> 0x10;
    if ((((iVar4 <= iVar6) && (-iVar6 <= iVar4)) &&
        (iVar5 = (int)(uVar1 << 0x10) >> 0x14, iVar5 <= iVar6)) && (-iVar6 <= iVar5)) {
      fn_82F147C8(iVar4,&iStack_48,&iStack_44,&iStack_40);
      fn_82F147C8(iVar5,&iStack_4c,auStack_3c,&uStack_50);
      iStack_48 = iStack_4c * 6 + iStack_48;
      if (uVar3 != 0) {
        uStack_50 = uStack_50 - (iStack_4c == 5);
      }
      *puVar2 = (uStack_50 + iStack_40 & 0x3f) << 0x12 |
                ((iStack_44 << (uStack_50 & 0x3f) | auStack_3c[0]) & 0x1ffff) << 1 |
                *puVar2 & 0xff000001;
      goto LAB_82f14b8c;
    }
    iStack_48 = 0x23;
  }
  else {
    iStack_48 = 0x24;
  }
  *puVar2 = *puVar2 & 0xfffc0001;
LAB_82f14b8c:
  if (*(int *)(param_1 + 8) == 8) {
    if ((*param_2 & 8) != 0) {
      iStack_48 = iStack_48 + 0x25;
    }
    iStack_48 = iStack_48 + -1;
  }
  *(char *)puVar2 = (char)iStack_48;
  *(int *)(iStack_48 * 4 + *(int *)(param_1 + 0x30)) =
       *(int *)(iStack_48 * 4 + *(int *)(param_1 + 0x30)) + 1;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  return 0;
}

