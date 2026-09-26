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
extern int fn_82543078();
extern int fn_82543198();
extern int fn_82543308();
extern int fn_825437D8();
extern int fn_82543940();
extern int fn_82639F78();


void fn_82542F28(undefined4 *param_1,int param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  piVar2 = (int *)(param_3 * 8 + *(int *)(param_2 + 0x14));
  uVar4 = 0;
  if (piVar2[1] != 0) {
    iVar5 = 0;
    do {
      iVar6 = iVar5 + *piVar2;
      iVar1 = fn_82543078(param_1,param_2,iVar6);
      if ((iVar1 != 0) && (uVar3 = 0, *(int *)(iVar6 + 8) != 0)) {
        iVar1 = 0;
        do {
          iVar7 = *(int *)(iVar6 + 0xc) + iVar1;
          if (*(int *)(*(int *)(iVar6 + 0xc) + iVar1) == -1) {
            if (param_1[6] != *(int *)(iVar7 + 0x10)) {
              fn_825437D8(param_1,param_2,*(int *)(iVar7 + 0x10),param_3,param_4);
              param_1[6] = *(undefined4 *)(iVar7 + 0x10);
            }
            if (param_1[5] != *(int *)(iVar7 + 8)) {
              fn_82543308(param_1,param_2);
              param_1[5] = *(undefined4 *)(iVar7 + 8);
            }
            fn_82639F78(*param_1,0,**(undefined4 **)(iVar7 + 4),0,
                              (*(undefined4 **)(iVar7 + 4))[1],1);
            fn_82543940(param_1,*(undefined4 *)(iVar7 + 0xc));
          }
          else {
            fn_82543198(param_1,param_2,iVar7,param_3);
          }
          uVar3 = uVar3 + 1;
          iVar1 = iVar1 + 0x20;
        } while (uVar3 < *(uint *)(iVar6 + 8));
      }
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 0x10;
      piVar2 = (int *)(param_3 * 8 + *(int *)(param_2 + 0x14));
    } while (uVar4 < (uint)piVar2[1]);
  }
  return;
}

