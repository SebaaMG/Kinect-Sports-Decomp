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
extern int fn_82AA64F8();
extern int fn_82AA66A8();
extern unsigned int stack0x00000020;
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;
extern unsigned int uStack00000040;
extern unsigned int uStack00000048;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
fn_82B457D8(int param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int in_r11;
  undefined8 uStack00000020;
  undefined8 uStack00000028;
  undefined8 uStack00000030;
  undefined8 uStack00000038;
  undefined8 uStack00000040;
  ulonglong uStack00000048;
  
  while (in_r11 == 1) {
    if (*(int *)(param_2 + 0xc) != 0) {
      return 0;
    }
    param_2 = *(int *)(param_2 + 8);
    in_r11 = *(int *)(param_2 + 4);
  }
  puVar2 = (undefined4 *)param_3;
  if (*(int *)(param_2 + 4) == 0xe) {
    *puVar2 = *(undefined4 *)(param_2 + 0x14);
    uVar3 = *(undefined4 *)(param_2 + 0x18);
  }
  else {
    if (*(int *)(param_2 + 4) != 0xf) {
      return 0;
    }
    if (*(uint *)(param_2 + 0x10) < 4) {
      uVar3 = 1;
    }
    else {
      if (*(uint *)(param_2 + 0x10) != 6) {
        return 0;
      }
      uVar3 = 0;
      if (*(int *)(param_2 + 0x1c) != 0) {
        uStack00000048 = (ulonglong)*(uint *)(param_1 + 0xc);
        for (iVar1 = *(int *)(*(int *)(param_2 + 0x18) * 0x28 + *(uint *)(param_1 + 0xc) + 0x14);
            *(int *)(iVar1 + 4) == 1; iVar1 = *(int *)(iVar1 + 0x30)) {
          if (*(int *)(iVar1 + 0xc) != 0) {
            return 0;
          }
          iVar1 = *(int *)(iVar1 + 8);
          if ((((iVar1 == 0) ||
               (uStack00000048 = (ulonglong)*(uint *)(iVar1 + 4), *(uint *)(iVar1 + 4) != 6)) ||
              (uStack00000048 = (ulonglong)*(uint *)(iVar1 + 0x10), *(uint *)(iVar1 + 0x10) != 1))
             || ((iVar1 = *(int *)(iVar1 + 0x18), iVar1 == 0 ||
                 (uStack00000048 = (ulonglong)*(uint *)(iVar1 + 4), *(uint *)(iVar1 + 4) != 0xb))))
          goto fn_82AA66A8;
        }
        if (*(int *)(iVar1 + 4) == 9) {
          *puVar2 = *(undefined4 *)(iVar1 + 0x1c);
          *(undefined4 *)param_4 = *(undefined4 *)(iVar1 + 0x20);
          return 1;
        }
fn_82AA66A8:
        uStack00000020 = param_3;
        uStack00000028 = param_4;
        uStack00000030 = param_5;
        uStack00000038 = param_6;
        uStack00000040 = param_7;
                    /* WARNING: Subroutine does not return */
        fn_82AA64F8(param_1,0x12c1,&stack0x00000020);
      }
    }
    *puVar2 = uVar3;
  }
  *(undefined4 *)param_4 = uVar3;
  return 1;
}

