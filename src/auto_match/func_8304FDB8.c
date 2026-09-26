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
extern int fn_82F66368();
extern int fn_82FA5060();
extern unsigned int lbl_831BC978;


undefined8 fn_8304FDB8(int param_1,char *param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  char *pcVar6;
  longlong lVar7;
  
  *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) & 0xfbffffff;
  iVar2 = fn_82FA5060(lbl_831BC978,0x24);
  *(int *)(param_1 + 0x10) = iVar2;
  if (iVar2 != 0) {
    *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) | 0x80000000;
    *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x18) = param_4;
    **(undefined4 **)(param_1 + 0x10) = 0;
    pcVar6 = param_2;
    if (param_3 == 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x20) = 0;
    }
    else {
      puVar5 = (undefined4 *)(param_3 + -4);
      *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x20) = 1;
      lVar7 = 5;
      puVar4 = *(undefined4 **)(param_1 + 0x10);
      do {
        puVar5 = puVar5 + 1;
        puVar4 = puVar4 + 1;
        *puVar4 = *puVar5;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    iVar2 = (int)pcVar6 - (int)param_2;
    uVar3 = fn_82FA5060(lbl_831BC978,iVar2);
    **(undefined4 **)(param_1 + 0x10) = uVar3;
    if (**(int **)(param_1 + 0x10) != 0) {
      fn_82F66368(**(int **)(param_1 + 0x10),iVar2,param_2,iVar2 + -1);
      return 1;
    }
  }
  return 2;
}

