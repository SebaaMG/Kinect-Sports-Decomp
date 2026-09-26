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
extern int fn_82BBFFC8();
extern int fn_82BC0088();


void fn_82BC6018(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  iVar1 = *(int *)(param_1 + 0x38);
  uVar4 = 0;
  iVar6 = 0;
  for (uVar5 = 1; uVar5 <= *(uint *)(iVar1 + 4); uVar5 = uVar5 + 1) {
    if (*(int *)(*(int *)(iVar1 + 8) + iVar6) == param_2) {
      if (uVar4 < *(uint *)(iVar1 + 4)) {
        piVar2 = (int *)(*(int *)(iVar1 + 8) + uVar4 * 4);
      }
      else {
        piVar2 = (int *)fn_82BC0088();
      }
      *piVar2 = param_3;
      break;
    }
    uVar4 = uVar4 + 1;
    iVar6 = iVar6 + 4;
  }
  iVar1 = *(int *)(param_2 + 0x3c);
  lVar3 = 0;
  iVar6 = 0;
  uVar4 = 1;
  do {
    if (*(uint *)(iVar1 + 4) < uVar4) {
LAB_82bc6100:
      piVar2 = (int *)fn_82BC0088(*(int *)(param_3 + 0x3c),
                                        *(undefined4 *)(*(int *)(param_3 + 0x3c) + 4));
      *piVar2 = param_1;
      return;
    }
    if (*(int *)(*(int *)(iVar1 + 8) + iVar6) == param_1) {
      fn_82BBFFC8(iVar1,lVar3);
      goto LAB_82bc6100;
    }
    lVar3 = lVar3 + 1;
    uVar4 = uVar4 + 1;
    iVar6 = iVar6 + 4;
  } while( true );
}

