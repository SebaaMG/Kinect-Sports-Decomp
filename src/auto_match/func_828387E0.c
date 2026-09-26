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
extern int fn_82A93C18();
extern int fn_82A93D70();
extern int fn_82A93DE0();


/* WARNING: Removing unreachable block (ram,0x82838848) */
/* WARNING: Removing unreachable block (ram,0x82838940) */
/* WARNING: Removing unreachable block (ram,0x82838988) */
/* WARNING: Removing unreachable block (ram,0x82838934) */
/* WARNING: Removing unreachable block (ram,0x82838840) */
/* WARNING: Removing unreachable block (ram,0x82838990) */

void fn_828387E0(int param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0x30) != '\0') {
    iVar3 = *(int *)(param_1 + 0x1c);
    if (iVar3 == 0) {
      fn_82A93C18(*(undefined2 *)(param_1 + 0x24),*(undefined2 *)(param_1 + 0x26),
                        *(undefined1 *)(param_2 + 0x30),0,*(undefined4 *)(param_1 + 0x18),0,uVar1,
                        *(undefined4 *)(param_2 + 0x2c));
    }
    else if (iVar3 == 2) {
      fn_82A93D70(*(undefined2 *)(param_1 + 0x24),*(undefined1 *)(param_2 + 0x30),0,
                        *(undefined4 *)(param_1 + 0x18),0,uVar1,*(undefined4 *)(param_2 + 0x2c),
                        *(undefined4 *)(param_1 + 0x34));
    }
    else if (iVar3 == 4) {
      uVar2 = 0;
      if (*(int *)(param_1 + 0x38) != 0) {
        iVar3 = 0;
        do {
          fn_82A93C18(*(undefined4 *)(iVar3 + *(int *)(param_1 + 0x44)),
                            *(undefined4 *)(*(int *)(param_1 + 0x48) + iVar3),
                            *(undefined4 *)(iVar3 + *(int *)(param_2 + 0x4c)),0,
                            *(undefined4 *)(param_1 + 0x18),0,
                            *(undefined4 *)(*(int *)(param_1 + 0x3c) + iVar3),
                            *(undefined4 *)(*(int *)(param_2 + 0x40) + iVar3));
          uVar2 = uVar2 + 1;
          *(undefined4 *)(*(int *)(param_1 + 0x4c) + iVar3) =
               *(undefined4 *)(iVar3 + *(int *)(param_2 + 0x4c));
          iVar3 = iVar3 + 4;
        } while (uVar2 < *(uint *)(param_1 + 0x38));
      }
    }
    else {
      if (iVar3 != 5) {
        return;
      }
      fn_82A93DE0(*(undefined2 *)(param_1 + 0x24),*(undefined2 *)(param_1 + 0x26),
                        *(undefined4 *)(param_1 + 0x38),*(undefined1 *)(param_2 + 0x30),0,
                        *(undefined4 *)(param_1 + 0x18),0,uVar1);
    }
    *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x30);
  }
  return;
}

