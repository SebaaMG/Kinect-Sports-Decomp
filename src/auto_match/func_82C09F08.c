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
extern int fn_8265C990();
extern int fn_82C16C90();


undefined8 fn_82C09F08(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if ((param_1 != (int *)0x0) && (iVar1 = *param_1, iVar1 != 0)) {
    fn_82C16C90(*(undefined4 *)(iVar1 + 0x248));
    *(undefined4 *)(iVar1 + 0x248) = 0;
    if (*(int *)(iVar1 + 0xe0) != 0) {
      fn_8265C990(*(int *)(iVar1 + 0xe0),0x248c8000);
      *(undefined4 *)(iVar1 + 0xe0) = 0;
    }
    iVar4 = *(int *)(iVar1 + 0xcc);
    if (iVar4 != 0) {
      fn_8265C990(*(undefined4 *)(iVar4 + 0xc),0x248c8000);
      fn_8265C990(*(undefined4 *)(iVar4 + 0x10),0x248c8000);
      fn_8265C990(*(undefined4 *)(iVar4 + 0x14),0x248c8000);
      fn_8265C990(*(undefined4 *)(iVar4 + 0x18),0x248c8000);
      fn_8265C990(*(undefined4 *)(iVar4 + 0x1c),0x248c8000);
      fn_8265C990(iVar4,0x248c8000);
      *(undefined4 *)(iVar1 + 0xcc) = 0;
    }
    if (*(short **)(iVar1 + 0xd0) != (short *)0x0) {
      if (**(short **)(iVar1 + 0xd0) != 0) {
        uVar3 = 0;
        iVar4 = 0;
        do {
          fn_8265C990(*(undefined4 *)(*(int *)(*(int *)(iVar1 + 0xd0) + 4) + iVar4 + 0xc),
                            0x248c8000);
          fn_8265C990(*(undefined4 *)(*(int *)(*(int *)(iVar1 + 0xd0) + 4) + iVar4 + 4),
                            0x248c8000);
          uVar3 = uVar3 + 1;
          *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0xd0) + 4) + iVar4 + 0xc) = 0;
          *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0xd0) + 4) + iVar4 + 4) = 0;
          iVar4 = iVar4 + 0x10;
        } while (uVar3 < **(ushort **)(iVar1 + 0xd0));
        fn_8265C990(*(undefined4 *)(*(ushort **)(iVar1 + 0xd0) + 2),0x248c8000);
        *(undefined4 *)(*(int *)(iVar1 + 0xd0) + 4) = 0;
      }
      fn_8265C990(*(undefined4 *)(iVar1 + 0xd0),0x248c8000);
      *(undefined4 *)(iVar1 + 0xd0) = 0;
    }
    if (*(short **)(iVar1 + 0xe8) != (short *)0x0) {
      if (**(short **)(iVar1 + 0xe8) != 0) {
        uVar3 = 0;
        iVar4 = 0;
        do {
          iVar2 = *(int *)(*(int *)(iVar1 + 0xe8) + 4);
          if (iVar2 != 0) {
            iVar2 = *(int *)(iVar4 + iVar2 + 0xc);
            if (iVar2 != 0) {
              fn_8265C990(iVar2,0x248c8000);
            }
            *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0xe8) + 4) + iVar4 + 0xc) = 0;
            iVar2 = *(int *)(*(int *)(*(int *)(iVar1 + 0xe8) + 4) + iVar4 + 0x10);
            if (iVar2 != 0) {
              fn_8265C990(iVar2,0x248c8000);
            }
            *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0xe8) + 4) + iVar4 + 0x10) = 0;
          }
          uVar3 = uVar3 + 1;
          iVar4 = iVar4 + 0x14;
        } while (uVar3 < **(ushort **)(iVar1 + 0xe8));
        fn_8265C990(*(undefined4 *)(*(ushort **)(iVar1 + 0xe8) + 2),0x248c8000);
        *(undefined4 *)(*(int *)(iVar1 + 0xe8) + 4) = 0;
      }
      fn_8265C990(*(undefined4 *)(iVar1 + 0xe8),0x248c8000);
      *(undefined4 *)(iVar1 + 0xe8) = 0;
    }
    if (*(int *)(iVar1 + 0x264) != 0) {
      fn_8265C990(*(int *)(iVar1 + 0x264),0x248c8000);
    }
    iVar4 = *(int *)(iVar1 + 0x268);
    *(undefined4 *)(iVar1 + 0x264) = 0;
    if (iVar4 != 0) {
      if (*(int *)(iVar4 + 4) != 0) {
        fn_8265C990(*(int *)(iVar4 + 4),0x248c8000);
      }
      fn_8265C990(iVar4,0x248c8000);
    }
    *(undefined4 *)(iVar1 + 0x268) = 0;
    fn_8265C990(iVar1,0x248c8000);
    *param_1 = 0;
    return 0;
  }
  return 2;
}

