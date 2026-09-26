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
extern int fn_8265C9E0();
extern int fn_8265CA20();


undefined8 fn_82B64808(int *param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  iVar6 = *param_1;
  iVar1 = param_1[1];
  uVar2 = *(uint *)(iVar1 + 0x68);
  if (((uVar2 == *(uint *)(iVar6 + 0x68)) && (*(int *)(iVar1 + 0x6c) == *(int *)(iVar6 + 0x6c))) &&
     (*(int *)(iVar1 + 0x70) == *(int *)(iVar6 + 0x70))) {
    lVar3 = ((ulonglong)uVar2 & 0xfffffff) << 4;
    if (0xfffffff < uVar2) {
      lVar3 = -1;
    }
    uVar4 = fn_8265C9E0(lVar3);
    if ((uVar4 & 0xffffffff) != 0) {
      if ((*(int *)(param_1[1] + 0x10) != 0) && (*(int *)(*param_1 + 0x10) != 0)) {
        *(undefined4 *)(param_1[1] + 0x10) = 0;
        *(undefined4 *)(*param_1 + 0x10) = 0;
      }
      iVar6 = param_1[1];
      uVar7 = 0;
      if (*(int *)(iVar6 + 0x70) != 0) {
        uVar5 = (ulonglong)*(uint *)(iVar6 + 0x6c);
        do {
          uVar8 = 0;
          if (uVar5 != 0) {
            do {
              (**(code **)(*(int *)*param_1 + 4))((int *)*param_1,uVar8,uVar7,uVar4);
              (**(code **)(*(int *)param_1[1] + 8))((int *)param_1[1],uVar8,uVar7,uVar4);
              iVar6 = param_1[1];
              uVar8 = uVar8 + 1;
              uVar5 = (ulonglong)*(uint *)(iVar6 + 0x6c);
            } while ((uVar8 & 0xffffffff) < uVar5);
          }
          uVar7 = uVar7 + 1;
        } while ((uVar7 & 0xffffffff) < (ulonglong)*(uint *)(iVar6 + 0x70));
      }
      fn_8265CA20(uVar4);
      return 0;
    }
  }
  return 0xffffffff80004005;
}

