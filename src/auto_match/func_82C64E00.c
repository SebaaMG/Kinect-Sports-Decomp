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
extern int fn_82C4E470();
extern int fn_82C4E5E8();


void fn_82C64E00(int param_1,undefined4 *param_2,int param_3,longlong param_4)

{
  byte bVar1;
  ulonglong *puVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  
  puVar2 = *(ulonglong **)(param_1 + 0x54);
  iVar7 = (int)((*puVar2 >> (0x40U - param_4 & 0x7f) & 0xffffffff) << 1);
  fn_82C4E470(puVar2,*(undefined1 *)(iVar7 + param_3));
  bVar1 = *(byte *)(iVar7 + param_3 + 1);
  if (bVar1 == 0xff) {
    *(undefined4 *)((int)puVar2 + 0x14) = 3;
  }
  puVar2 = *(ulonglong **)(param_1 + 0x54);
  if (*(int *)((int)puVar2 + 0x14) == 0) {
    uVar6 = (ulonglong)(char)bVar1;
    if (bVar1 == 0) {
      *param_2 = 0;
      **(undefined4 **)(param_1 + 0x6e4) = 0;
      return;
    }
    uVar4 = (ulonglong)*(uint *)(puVar2 + 1);
    iVar7 = 0;
    uVar5 = uVar4 + 0x10;
    if (bVar1 < 0x21) {
      iVar3 = 0;
      if ((uVar5 & 0xffffffff) < (ulonglong)(uint)(int)(char)bVar1) {
        do {
          iVar7 = iVar3;
          if ((uVar5 & 0xffffffff) == 0) break;
          uVar6 = uVar6 - uVar5;
          *(int *)(puVar2 + 1) = (int)(uVar4 - uVar5);
          iVar7 = ((int)(*puVar2 >> (0x40 - uVar5 & 0x7f)) << ((uint)uVar6 & 0x3f)) + iVar7;
          *puVar2 = *puVar2 << (uVar5 & 0x7f);
          if ((longlong)(uVar4 - uVar5) < 0) {
            fn_82C4E5E8(puVar2);
          }
          uVar4 = (ulonglong)*(uint *)(puVar2 + 1);
          uVar5 = uVar4 + 0x10;
          iVar3 = iVar7;
        } while ((uVar5 & 0xffffffff) < (uVar6 & 0xffffffff));
      }
      *(int *)(puVar2 + 1) = (int)(uVar4 - uVar6);
      uVar8 = (int)(*puVar2 >> (0x40 - uVar6 & 0x7f)) + iVar7;
      *puVar2 = *puVar2 << (uVar6 & 0x7f);
      if ((longlong)(uVar4 - uVar6) < 0) {
        fn_82C4E5E8(puVar2);
      }
    }
    else {
      uVar8 = 0;
    }
    uVar8 = uVar8 & 0xff;
    if (*(int *)(*(int *)(param_1 + 0x54) + 0x14) == 0) {
      *param_2 = 0;
      if ((1 << ((int)(char)bVar1 - 1U & 0x3f) & uVar8) != 0) {
        **(uint **)(param_1 + 0x6e4) = uVar8;
        return;
      }
      **(int **)(param_1 + 0x6e4) = (uVar8 - (1 << ((int)(char)bVar1 & 0x3fU))) + 1;
      return;
    }
  }
  *param_2 = 1;
  **(undefined4 **)(param_1 + 0x6e4) = 0;
  return;
}

