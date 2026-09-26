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
extern int fn_822A5A40();
extern int fn_822A5B48();
extern int fn_8265CA20();


void fn_822A85C8(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  iVar6 = *param_2;
  while (iVar6 != param_2[1]) {
    iVar4 = *(int *)(iVar6 + 0x24);
    if (*(int *)(iVar4 + 0x54c) == 0) {
      fn_822A5B48(param_1,iVar4);
      iVar6 = iVar6 + 0x30;
    }
    else {
      if (iVar4 != 0) {
        fn_822A5A40(iVar4);
        fn_8265CA20(iVar4);
      }
      *(undefined4 *)(iVar6 + 0x24) = 0;
      iVar4 = param_2[1];
      iVar5 = iVar6;
      iVar1 = iVar6;
      while (iVar1 + 0x30 != iVar4) {
        puVar3 = (undefined8 *)(iVar1 + 0x28);
        puVar2 = (undefined8 *)(iVar5 + -8);
        lVar7 = 6;
        do {
          puVar3 = puVar3 + 1;
          puVar2 = puVar2 + 1;
          *puVar2 = *puVar3;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
        iVar5 = iVar5 + 0x30;
        iVar1 = iVar1 + 0x30;
      }
      iVar5 = param_2[1] + -0x30;
      for (iVar4 = iVar5; iVar4 != param_2[1]; iVar4 = iVar4 + 0x30) {
      }
      param_2[1] = iVar5;
    }
  }
  return;
}

