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
extern int fn_82837D98();
extern unsigned int iStack00000014;
extern unsigned int iStack0000001c;
extern unsigned int iStack00000024;
extern unsigned int iStack_10;
extern unsigned int iStack_20;
extern unsigned int iStack_c;
extern unsigned int uStack_18;


void fn_82840000(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iStack00000014;
  int iStack0000001c;
  int iStack00000024;
  int iStack_20;
  uint uStack_18;
  int iStack_10;
  int iStack_c;
  
  iStack_20 = param_3;
  if (param_3 == 0) {
    if (*(int *)(param_1 + 0x28) == 0) {
      return;
    }
    if (*(int *)(param_1 + 0x2c) == 0) {
      return;
    }
    iStack_20 = *(int *)(param_1 + 0x28);
  }
  iStack00000014 = param_1;
  iStack0000001c = param_2;
  iStack00000024 = param_3;
  for (uStack_18 = 0; uStack_18 < *(uint *)(iStack00000014 + 0x20); uStack_18 = uStack_18 + 1) {
    iVar1 = *(int *)(*(int *)(*(int *)(iStack00000014 + 0x24) + uStack_18 * 0xc) + 4);
    for (iStack_10 = 0; iStack_10 < (int)(uint)*(ushort *)(iVar1 + 0x12); iStack_10 = iStack_10 + 1)
    {
      if (*(int *)(*(int *)(iVar1 + 4) + iStack_10 * 0x34 + 0xc) == 0) {
        iVar2 = iStack0000001c + *(int *)(*(int *)(iVar1 + 4) + iStack_10 * 0x34);
        if (*(int *)(iStack_20 + *(int *)(*(int *)(iVar1 + 4) + iStack_10 * 0x34 + 4) * 4) != 0) {
          fn_82837D98(*(undefined4 *)
                         (iStack_20 + *(int *)(*(int *)(iVar1 + 4) + iStack_10 * 0x34 + 4) * 4),0,
                        iVar2 + 4);
        }
        *(undefined4 *)(iVar2 + 8) =
             *(undefined4 *)(iStack_20 + *(int *)(*(int *)(iVar1 + 4) + iStack_10 * 0x34 + 4) * 4);
      }
    }
    for (iStack_c = 0; iStack_c < (int)(uint)*(ushort *)(iVar1 + 0x14); iStack_c = iStack_c + 1) {
      if (*(int *)(*(int *)(iVar1 + 8) + iStack_c * 0x34 + 0xc) == 0) {
        fn_82837D98(*(undefined4 *)
                       (iStack_20 + *(int *)(*(int *)(iVar1 + 8) + iStack_c * 0x34 + 4) * 4),0,
                      iStack0000001c + *(int *)(*(int *)(iVar1 + 8) + iStack_c * 0x34) + 4);
      }
    }
  }
  return;
}

