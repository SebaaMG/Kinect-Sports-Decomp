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
extern int fn_82639F78();


void fn_82853498(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  longlong lVar6;
  int aiStack_230 [140];
  
  iVar5 = 0;
  thunk_FUN_82838b18(aiStack_230,*(int *)(param_2 + 0x14) + param_3,param_1 + 0xa4,
                     *(undefined2 *)(param_2 + 0x1a),*(undefined2 *)(param_2 + 0x1c));
  lVar6 = 0;
  if (*(short *)(param_2 + 0x18) != 0) {
    do {
      uVar1 = *(ushort *)(param_2 + 0x1a);
      bVar2 = false;
      if (uVar1 < *(ushort *)(param_2 + 0x1c)) {
        iVar3 = 0;
        if (uVar1 != 0) {
          piVar4 = aiStack_230;
          do {
            if (*(char *)(*(int *)(param_2 + 0x10) + iVar3) ==
                *(char *)(*(int *)(param_2 + 0xc) + (int)lVar6)) {
              bVar2 = true;
              iVar5 = *(int *)(*(int *)((uint)*(byte *)(*(int *)(param_2 + 4) + *piVar4) * 4 +
                                       *(int *)(param_2 + 8)) * 4 + *(int *)(param_3 + 0x34));
            }
            iVar3 = iVar3 + 1;
            piVar4 = piVar4 + 1;
          } while (iVar3 < (int)(uint)uVar1);
        }
      }
      if (!bVar2) {
        iVar5 = *(int *)(*(int *)((uint)*(byte *)(*(int *)(param_2 + 0xc) + (int)lVar6) * 4 +
                                 *(int *)(param_2 + 8)) * 4 + *(int *)(param_3 + 0x34));
      }
      if (iVar5 != 0) {
        fn_82639F78(*(undefined4 *)(param_1 + 4),lVar6,*(undefined4 *)(iVar5 + 0x20),0,
                          *(undefined4 *)(iVar5 + 0x2c),
                          0x8000000000000000 >>
                          ((((0x5f - lVar6) * 0x5556 & 0xffffffffU) >> 0x10) + 0x20 & 0x7f));
      }
      lVar6 = lVar6 + 1;
    } while ((int)lVar6 < (int)(uint)*(ushort *)(param_2 + 0x18));
  }
  return;
}

