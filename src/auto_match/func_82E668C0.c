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
extern int fn_82A1E650();
extern int fn_82A1E7D8();
extern int fn_82E664E8();
extern int fn_82E66750();
extern int fn_82E66868();
extern int fn_82EE86E0();
extern U64 storeWordConditionalIndexed();


void fn_82E668C0(longlong param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  char in_RESERVE;
  byte in_cr0;
  
  lVar5 = param_1 + 0x21c;
  fn_82E664E8(lVar5);
  iVar4 = (int)param_1;
  iVar1 = *(int *)(iVar4 + 0x234);
  if (iVar1 < 2) {
    if (iVar1 == 1) {
      fn_82A1E7D8(*(undefined4 *)(iVar4 + 0x224));
      fn_82E66750(0xffffffff8323ff68);
      *(undefined4 *)(iVar4 + 0x220) = 1;
      fn_82A1E650(*(undefined4 *)(iVar4 + 0x224),200);
      if (*(int *)(iVar4 + 0x210) != 0) {
        if (*(int *)(iVar4 + 0x204) != 0) {
          fn_82EE86E0();
          (**(code **)(**(int **)(iVar4 + 0x204) + 8))();
          *(undefined4 *)(iVar4 + 0x204) = 0;
        }
        if (*(int *)(iVar4 + 0x200) != 0) {
          fn_82EE86E0();
          (**(code **)(**(int **)(iVar4 + 0x200) + 8))();
          *(undefined4 *)(iVar4 + 0x200) = 0;
        }
        lVar7 = param_1 + -4;
        lVar6 = 0x80;
        do {
          piVar2 = *(int **)((int)lVar7 + 4);
          if (piVar2 != (int *)0x0) {
            fn_82EE86E0(piVar2);
            (**(code **)(*piVar2 + 8))(piVar2);
          }
          lVar6 = lVar6 + -1;
          in_cr0 = (lVar6 == 0) << 1;
          lVar7 = lVar7 + 4;
          *(undefined4 *)lVar7 = 0;
        } while (lVar6 != 0);
        if (*(int *)(iVar4 + 0x208) != 0) {
          fn_82EE86E0();
          (**(code **)(**(int **)(iVar4 + 0x208) + 8))();
          *(undefined4 *)(iVar4 + 0x208) = 0;
        }
        if (*(int *)(iVar4 + 0x20c) != 0) {
          fn_82EE86E0();
          (**(code **)(**(int **)(iVar4 + 0x20c) + 8))();
          *(undefined4 *)(iVar4 + 0x20c) = 0;
        }
        *(undefined4 *)(iVar4 + 0x210) = 0;
      }
      *(undefined4 *)(iVar4 + 0x234) = 0;
      *(undefined4 *)(iVar4 + 0x220) = 0;
      *(undefined4 *)(iVar4 + 0x218) = 0xffffffff;
      fn_82E66868(param_1);
    }
  }
  else {
    *(int *)(iVar4 + 0x234) = iVar1 + -1;
  }
  sync(1);
  do {
    if (in_RESERVE != '\0') {
      uVar3 = storeWordConditionalIndexed(0,0,lVar5);
      *(undefined4 *)lVar5 = uVar3;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  return;
}

