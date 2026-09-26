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
extern int fn_82ABDD90();
extern int fn_82B356B8();
extern int fn_82B837F8();


void fn_82B37E70(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  ulonglong uVar7;
  bool bVar8;
  int iVar9;
  bool bVar10;
  uint *puVar11;
  
  do {
    bVar8 = false;
    for (uVar1 = *(uint *)(param_1 + 4); ((uVar1 & 1) == 0 && (uVar1 != 0));
        uVar1 = *(uint *)((uVar1 & 0xfffffffe) + 4)) {
      if (((*(uint *)(uVar1 + 0x44) & 0x80000000) != 0) &&
         ((*(uint *)(*(int *)(uVar1 + 0x28) + 4) & 1) == 0)) {
        uVar2 = uVar1;
        uVar3 = *(uint *)(uVar1 + 0x4c);
        while ((uVar3 & 0x100000) == 0) {
          uVar2 = *(uint *)(uVar2 + 0x34);
          if (uVar2 == 0) goto LAB_82b38074;
          uVar3 = *(uint *)(uVar2 + 0x4c);
        }
        if ((*(uint *)(uVar2 + 0x4c) & 0x7ffff) == (*(uint *)(uVar1 + 0x4c) & 0x7ffff) - 1) {
          for (uVar3 = *(uint *)(uVar2 + 0x1c); ((uVar3 & 1) == 0 && (uVar3 != 0));
              uVar3 = *(uint *)((uVar3 & 0xfffffffe) + 0x28)) {
            if ((*(uint *)(uVar3 + 8) & 0x3f80) == 0x3400) {
              uVar4 = *(uint *)(uVar3 + 8);
              iVar9 = fn_82ABDD90(param_1,uVar4 >> 7 & 0x7f,uVar4 >> 0x13 & 7,uVar4 >> 0xe & 7);
              if (((*(uint *)(iVar9 + (uVar3 - 4)) & 0x200000) == 0) &&
                 (puVar5 = *(uint **)(uVar3 + 0x2c), (*(uint *)(puVar5[3] + 8) & 0x3f80) == 16000))
              {
                puVar11 = (uint *)(uVar3 + 4);
                while (puVar6 = (uint *)*puVar11, puVar6 != (uint *)0x0) {
                  if ((puVar6[4] != 0) && ((*puVar6 & 0xe000000) != 0)) {
                    uVar4 = *(uint *)(puVar6[4] + 0x1c);
                    if ((uVar2 == uVar4) ||
                       (uVar7 = (ulonglong)*(uint *)(uVar2 + 0x30) & 0x7ffff, bVar10 = true,
                       (*(uint *)(((int)(uVar7 >> 5) + 1) * 4 + *(int *)(uVar4 + 0x28)) &
                       1 << ((uint)uVar7 & 0x1f)) == 0)) {
                      bVar10 = false;
                    }
                    if (bVar10) {
                      if ((uVar1 == uVar4) ||
                         (uVar7 = (ulonglong)*(uint *)(uVar1 + 0x30) & 0x7ffff, bVar10 = true,
                         (*(uint *)(((int)(uVar7 >> 5) + 1) * 4 + *(int *)(uVar4 + 0x28)) &
                         1 << ((uint)uVar7 & 0x1f)) == 0)) {
                        bVar10 = false;
                      }
                      if (!bVar10) {
                        fn_82B837F8(param_1,uVar3,puVar6,puVar5[3],*puVar5 >> 5 & 0xff,
                                          *puVar5 & 0x1f);
                        bVar8 = true;
                      }
                    }
                  }
                  if ((uint *)*puVar11 == puVar6) {
                    puVar11 = puVar6 + 2;
                  }
                }
              }
            }
          }
        }
      }
LAB_82b38074:;}
    if (!bVar8) {
      return;
    }
    fn_82B356B8(param_1);
  } while( true );
}

