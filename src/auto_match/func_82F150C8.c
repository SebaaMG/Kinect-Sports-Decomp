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
extern int fn_82F02410();
extern int fn_82F146D0();


undefined4 fn_82F150C8(int param_1,undefined8 param_2)

{
  byte bVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = 0;
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x54);
  if (0 < *(int *)(param_1 + 0x5c)) {
    do {
      uVar5 = **(uint **)(param_1 + 0x58) >> 0x12 & 0x3f;
      if ((uVar5 == 8) || (uVar5 == 10)) {
        iVar3 = *(int *)((uVar5 + 10) * 4 + param_1);
        puVar2 = *(uint **)(*(int *)(iVar3 + 0x48) + 0x58);
        bVar1 = *(byte *)puVar2;
        if (*(int *)(iVar3 + 8) != 10) {
          iVar4 = (uint)bVar1 * 4;
          fn_82F02410(param_2,*(undefined4 *)(*(int *)(iVar3 + 0x3c) + iVar4),
                            *(undefined4 *)(*(int *)(iVar3 + 0x38) + iVar4));
          if (*(int *)(iVar3 + 8) == 8) {
            fn_82F02410(param_2,*puVar2 >> 1 & 0x1ffff,
                              *(undefined1 *)(*(int *)(iVar3 + 4) + (uint)bVar1));
          }
        }
      }
      else {
        fn_82F146D0(*(undefined4 *)((uVar5 + 10) * 4 + param_1),param_2);
      }
      iVar6 = iVar6 + 1;
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 4;
    } while (iVar6 < *(int *)(param_1 + 0x5c));
  }
  return *(undefined4 *)(param_1 + 0x5c);
}

