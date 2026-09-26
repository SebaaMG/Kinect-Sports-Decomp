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


char fn_82C5D578(int param_1)

{
  ulonglong *puVar1;
  int iVar2;
  char cVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  
  puVar1 = *(ulonglong **)(param_1 + 0x54);
  uVar8 = 1;
  lVar6 = 0;
  uVar4 = (ulonglong)*(uint *)(puVar1 + 1);
  uVar5 = uVar4 + 0x10;
  if ((uVar5 & 0xffffffff) == 0) {
    do {
      if ((uVar5 & 0xffffffff) == 0) break;
      uVar8 = uVar8 - uVar5;
      *(int *)(puVar1 + 1) = (int)(uVar4 - uVar5);
      lVar6 = (ulonglong)(uint)((int)(*puVar1 >> (0x40 - uVar5 & 0x7f)) << ((uint)uVar8 & 0x3f)) +
              lVar6;
      *puVar1 = *puVar1 << (uVar5 & 0x7f);
      if ((longlong)(uVar4 - uVar5) < 0) {
        fn_82C4E5E8(puVar1);
      }
      uVar4 = (ulonglong)*(uint *)(puVar1 + 1);
      uVar5 = uVar4 + 0x10;
    } while ((uVar5 & 0xffffffff) < (uVar8 & 0xffffffff));
  }
  uVar5 = *puVar1;
  *(int *)(puVar1 + 1) = (int)(uVar4 - uVar8);
  *puVar1 = uVar5 << (uVar8 & 0x7f);
  if ((longlong)(uVar4 - uVar8) < 0) {
    fn_82C4E5E8(puVar1);
  }
  if (((uVar5 >> (0x40 - uVar8 & 0x7f) & 0xffffffff) + lVar6 & 0xffffffff) == 0) {
    cVar3 = '\x01';
  }
  else {
    puVar1 = *(ulonglong **)(param_1 + 0x54);
    uVar8 = 1;
    lVar6 = 0;
    uVar4 = (ulonglong)*(uint *)(puVar1 + 1);
    uVar5 = uVar4 + 0x10;
    if ((uVar5 & 0xffffffff) == 0) {
      do {
        if ((uVar5 & 0xffffffff) == 0) break;
        uVar8 = uVar8 - uVar5;
        *(int *)(puVar1 + 1) = (int)(uVar4 - uVar5);
        lVar6 = (ulonglong)(uint)((int)(*puVar1 >> (0x40 - uVar5 & 0x7f)) << ((uint)uVar8 & 0x3f)) +
                lVar6;
        *puVar1 = *puVar1 << (uVar5 & 0x7f);
        if ((longlong)(uVar4 - uVar5) < 0) {
          fn_82C4E5E8(puVar1);
        }
        uVar4 = (ulonglong)*(uint *)(puVar1 + 1);
        uVar5 = uVar4 + 0x10;
      } while ((uVar5 & 0xffffffff) < (uVar8 & 0xffffffff));
    }
    uVar5 = *puVar1;
    *(int *)(puVar1 + 1) = (int)(uVar4 - uVar8);
    *puVar1 = uVar5 << (uVar8 & 0x7f);
    if ((longlong)(uVar4 - uVar8) < 0) {
      fn_82C4E5E8(puVar1);
    }
    if (((uVar5 >> (0x40 - uVar8 & 0x7f) & 0xffffffff) + lVar6 & 0xffffffff) == 0) {
      cVar3 = '\x02';
    }
    else {
      puVar1 = *(ulonglong **)(param_1 + 0x54);
      uVar8 = 1;
      lVar6 = 0;
      uVar4 = (ulonglong)*(uint *)(puVar1 + 1);
      uVar5 = uVar4 + 0x10;
      if ((uVar5 & 0xffffffff) == 0) {
        do {
          if ((uVar5 & 0xffffffff) == 0) break;
          uVar8 = uVar8 - uVar5;
          *(int *)(puVar1 + 1) = (int)(uVar4 - uVar5);
          lVar6 = (ulonglong)(uint)((int)(*puVar1 >> (0x40 - uVar5 & 0x7f)) << ((uint)uVar8 & 0x3f))
                  + lVar6;
          *puVar1 = *puVar1 << (uVar5 & 0x7f);
          if ((longlong)(uVar4 - uVar5) < 0) {
            fn_82C4E5E8(puVar1);
          }
          uVar4 = (ulonglong)*(uint *)(puVar1 + 1);
          uVar5 = uVar4 + 0x10;
        } while ((uVar5 & 0xffffffff) < (uVar8 & 0xffffffff));
      }
      uVar5 = *puVar1;
      *(int *)(puVar1 + 1) = (int)(uVar4 - uVar8);
      *puVar1 = uVar5 << (uVar8 & 0x7f);
      if ((longlong)(uVar4 - uVar8) < 0) {
        fn_82C4E5E8(puVar1);
      }
      if (((uVar5 >> (0x40 - uVar8 & 0x7f) & 0xffffffff) + lVar6 & 0xffffffff) == 0) {
        cVar3 = '\0';
        *(undefined4 *)(param_1 + 0x5714) = 1;
      }
      else {
        puVar1 = *(ulonglong **)(param_1 + 0x54);
        uVar8 = 1;
        iVar7 = 0;
        uVar4 = (ulonglong)*(uint *)(puVar1 + 1);
        uVar5 = uVar4 + 0x10;
        iVar2 = 0;
        if ((uVar5 & 0xffffffff) == 0) {
          do {
            iVar7 = iVar2;
            if ((uVar5 & 0xffffffff) == 0) break;
            uVar8 = uVar8 - uVar5;
            *(int *)(puVar1 + 1) = (int)(uVar4 - uVar5);
            iVar7 = ((int)(*puVar1 >> (0x40 - uVar5 & 0x7f)) << ((uint)uVar8 & 0x3f)) + iVar7;
            *puVar1 = *puVar1 << (uVar5 & 0x7f);
            if ((longlong)(uVar4 - uVar5) < 0) {
              fn_82C4E5E8(puVar1);
            }
            uVar4 = (ulonglong)*(uint *)(puVar1 + 1);
            uVar5 = uVar4 + 0x10;
            iVar2 = iVar7;
          } while ((uVar5 & 0xffffffff) < (uVar8 & 0xffffffff));
        }
        uVar5 = *puVar1;
        *(int *)(puVar1 + 1) = (int)(uVar4 - uVar8);
        *puVar1 = uVar5 << (uVar8 & 0x7f);
        if ((longlong)(uVar4 - uVar8) < 0) {
          fn_82C4E5E8(puVar1);
        }
        cVar3 = ((int)(uVar5 >> (0x40 - uVar8 & 0x7f)) + iVar7 != 0) + '\x04';
      }
    }
  }
  return cVar3;
}

