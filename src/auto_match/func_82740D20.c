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
extern int fn_8267B890();
extern int fn_826824B0();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82696BC8();
extern int fn_826AE1D8();
extern int fn_8273FF78();
extern int fn_827403B0();


void fn_82740D20(int param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar5;
  char cVar6;
  ulonglong uVar4;
  
  if (0 < *(int *)(param_1 + 0x1c)) {
    uVar2 = fn_826957D0(param_1,0);
    lVar3 = fn_826AE1D8(*(undefined4 *)(param_1 + 0x18),uVar2);
    if (lVar3 == 0) {
      puVar1 = *(undefined1 **)(param_1 + 4);
      fn_826959C8(puVar1);
      *puVar1 = 0;
    }
    else {
      if (((*(int **)(param_1 + 8) == (int *)0x0) ||
          (iVar5 = (**(code **)(**(int **)(param_1 + 8) + 8))(), iVar5 != 0x14)) ||
         (cVar6 = (**(code **)(**(int **)(param_1 + 8) + 0x40))(), cVar6 != '\0')) {
        uVar4 = fn_8267B890(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x288)
                                  ,0x44,0);
        if ((uVar4 & 0xffffffff) == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = fn_827403B0(uVar4,*(undefined4 *)(param_1 + 0x18),0);
        }
      }
      else {
        iVar5 = *(int *)(param_1 + 8) + -0x10;
        if (*(int *)(param_1 + 8) == 0) {
          iVar5 = 0;
        }
        if (iVar5 != 0) {
          *(uint *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1U & 0x8fffffff;
        }
      }
      fn_8273FF78(iVar5,lVar3);
      fn_82696BC8(*(undefined4 *)(param_1 + 4),iVar5);
      if (iVar5 != 0) {
        fn_826824B0(iVar5);
      }
    }
  }
  return;
}

