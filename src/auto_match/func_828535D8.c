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
extern int fn_82631920();
extern int fn_82639F78();


void fn_828535D8(int param_1,int param_2,longlong param_3)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  longlong lVar6;
  int aiStack_230 [140];
  
  puVar5 = (undefined4 *)0x0;
  thunk_FUN_82838b18(aiStack_230,(ulonglong)*(uint *)(param_2 + 0x14) + param_3,param_1 + 0xa4,
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
              puVar5 = (undefined4 *)
                       ((uint)*(byte *)(*(int *)(param_2 + 4) + *piVar4) * 0x10 +
                       *(int *)(param_2 + 8));
            }
            iVar3 = iVar3 + 1;
            piVar4 = piVar4 + 1;
          } while (iVar3 < (int)(uint)uVar1);
        }
      }
      if (!bVar2) {
        puVar5 = (undefined4 *)
                 ((uint)*(byte *)(*(int *)(param_2 + 0xc) + (int)lVar6) * 0x10 +
                 *(int *)(param_2 + 8));
      }
      fn_82639F78(*(undefined4 *)(param_1 + 4),lVar6,puVar5[1],0,*puVar5,
                        0x8000000000000000 >>
                        ((((0x5f - lVar6) * 0x5556 & 0xffffffffU) >> 0x10) + 0x20 & 0x7f));
      lVar6 = lVar6 + 1;
    } while ((int)lVar6 < (int)(uint)*(ushort *)(param_2 + 0x18));
  }
  fn_82631920(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_2 + 0x24));
  return;
}

