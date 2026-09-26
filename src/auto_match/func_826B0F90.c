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
extern int fn_826824B0();
extern int fn_826A18A8();
extern int fn_826AF698();
extern int fn_826BF098();


ulonglong fn_826B0F90(int param_1,undefined8 param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  ulonglong uVar6;
  
  if ((*(int *)(param_1 + 0xcc) != 0) &&
     (iVar2 = *(int *)(*(int *)(param_1 + 0xcc) * 4 + *(int *)(param_1 + 200) + -4), iVar2 != 0)) {
    *(uint *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1U & 0x8fffffff;
    do {
      if (*(byte *)(param_1 + 0x7c) < 7) {
        uVar6 = fn_826AF698(iVar2 + 0x10,param_2);
      }
      else {
        lVar4 = fn_826BF098();
        uVar6 = -(ulonglong)(lVar4 != 0) & lVar4 + 8U;
      }
      if ((uVar6 & 0xffffffff) != 0) {
        fn_826824B0(iVar2);
        return uVar6;
      }
      bVar1 = *(byte *)(param_1 + 0x7c);
      if (((4 < bVar1) &&
          (cVar5 = fn_826A18A8((ulonglong)*(uint *)(param_1 + 0x78) + 0x110,param_2,
                                     -(6 < bVar1) & 1), cVar5 != '\0')) ||
         ((5 < bVar1 &&
          (cVar5 = fn_826A18A8((ulonglong)*(uint *)(param_1 + 0x78) + 0xf8,param_2,
                                     -(6 < *(byte *)(param_1 + 0x7c)) & 1), cVar5 != '\0')))) {
        fn_826824B0(iVar2);
        return 0;
      }
      iVar3 = *(int *)(iVar2 + 0x14);
      if (iVar3 != 0) {
        *(uint *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1U & 0x8fffffff;
      }
      fn_826824B0(iVar2);
      iVar2 = *(int *)(iVar2 + 0x14);
    } while (iVar2 != 0);
  }
  return 0;
}

