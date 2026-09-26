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
extern int fn_8294B508();
extern int fn_82951FC8();
extern int fn_829636A8();
extern int fn_8297AE90();


undefined8
fn_82957C28(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,uint param_6,int param_7)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  if (param_6 != 0) {
    iVar5 = param_6 * 4;
    puVar1 = *(uint **)(*(int *)(param_1 + 0x18) + iVar5 + -4);
    iVar3 = fn_829636A8(puVar1);
    if ((iVar3 == 0) && (iVar3 = iVar5, uVar6 = param_6, (*puVar1 & 0xf0000000) != 0x60000000)) {
      while (uVar6 != 0) {
        iVar3 = iVar3 + -4;
        uVar6 = uVar6 - 1;
        puVar1 = *(uint **)(*(int *)(param_1 + 0x18) + iVar3);
        if ((puVar1[9] != param_6) && ((*puVar1 & 0xfff00000) != 0)) {
          if ((*puVar1 & 0xf0000000) == 0x60000000) {
            return 1;
          }
          iVar4 = fn_829636A8(puVar1);
          if (iVar4 != 0) {
            return 1;
          }
          fn_8294B508(param_1,param_5,puVar1,param_6);
          iVar2 = *(int *)(iVar3 + *(int *)(param_1 + 0x18));
          iVar4 = *(int *)(*(int *)(param_1 + 0x18) + iVar5 + -4);
          if ((*(int *)(iVar4 + 0xc) != 0) && (*(int *)(iVar2 + 0xc) != 0)) {
            iVar4 = *(int *)(**(int **)(iVar4 + 0x10) * 4 + *(int *)(param_1 + 0x14));
            iVar2 = *(int *)(**(int **)(iVar2 + 0x10) * 4 + *(int *)(param_1 + 0x14));
            if (*(int *)(iVar4 + 0x14) != *(int *)(iVar2 + 0x14)) {
              return 1;
            }
            if (*(int *)(iVar4 + 0x18) != *(int *)(iVar2 + 0x18)) {
              return 1;
            }
            fn_82951FC8(param_1,param_6 - 1,uVar6);
            if ((((*(uint *)(param_1 + 0x6c) & 4) != 0) ||
                (iVar4 = fn_8297AE90(param_1,param_2,0), -1 < iVar4)) &&
               ((param_7 == 0 || (iVar4 = fn_8297AE90(param_1,param_3,0), -1 < iVar4)))) {
              return 0;
            }
            fn_82951FC8(param_1,uVar6,param_6 - 1);
            fn_8294B508(param_1,param_5,puVar1,param_6);
          }
        }
      }
    }
  }
  return 1;
}

