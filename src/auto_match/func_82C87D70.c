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
extern int fn_82C4E5E8();
extern unsigned int lbl_820FD7A8;
extern unsigned int lbl_820FD7C8;


bool fn_82C87D70(int param_1,int param_2)

{
  ulonglong *puVar1;
  int iVar2;
  bool bVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  puVar1 = *(ulonglong **)(param_1 + 0x54);
  uVar7 = 3;
  lVar6 = 0;
  uVar4 = (ulonglong)*(uint *)(puVar1 + 1);
  uVar5 = uVar4 + 0x10;
  if ((uVar5 & 0xffffffff) < 3) {
    do {
      if ((uVar5 & 0xffffffff) == 0) break;
      uVar7 = uVar7 - uVar5;
      *(int *)(puVar1 + 1) = (int)(uVar4 - uVar5);
      lVar6 = (ulonglong)(uint)((int)(*puVar1 >> (0x40 - uVar5 & 0x7f)) << ((uint)uVar7 & 0x3f)) +
              lVar6;
      *puVar1 = *puVar1 << (uVar5 & 0x7f);
      if ((longlong)(uVar4 - uVar5) < 0) {
        fn_82C4E5E8(puVar1);
      }
      uVar4 = (ulonglong)*(uint *)(puVar1 + 1);
      uVar5 = uVar4 + 0x10;
    } while ((uVar5 & 0xffffffff) < (uVar7 & 0xffffffff));
  }
  uVar5 = *puVar1;
  *(int *)(puVar1 + 1) = (int)(uVar4 - uVar7);
  *puVar1 = uVar5 << (uVar7 & 0x7f);
  if ((longlong)(uVar4 - uVar7) < 0) {
    fn_82C4E5E8(puVar1);
  }
  iVar2 = (int)(((uVar5 >> (0x40 - uVar7 & 0x7f) & 0xffffffff) + lVar6 & 0x3fffffff) << 2);
  if (param_2 == 0) {
    bVar3 = *(int *)(param_1 + 0x5514) != *(int *)(&lbl_820FD7C8 + iVar2) ||
            *(int *)(param_1 + 0x5510) != *(int *)(&lbl_820FD7A8 + iVar2);
  }
  else {
    bVar3 = false;
    *(undefined4 *)(param_1 + 0x5510) = *(undefined4 *)(&lbl_820FD7A8 + iVar2);
    *(undefined4 *)(param_1 + 0x5514) = *(undefined4 *)(&lbl_820FD7C8 + iVar2);
  }
  return bVar3;
}

