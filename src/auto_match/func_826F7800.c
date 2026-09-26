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
extern int fn_826944C8();
extern int fn_82694700();
extern int fn_82696330();
extern int fn_82696958();
extern int fn_826B44A0();


undefined4 fn_826F7800(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  char cVar4;
  int iVar3;
  longlong lVar5;
  int aiStack_40 [4];
  char acStack_30 [24];
  
  if (*(int **)(param_1 + 0x68) != (int *)0x0) {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x68) + 0x5c))();
    aiStack_40[0] = fn_82694700((ulonglong)*(uint *)(iVar2 + 0x78) + 0x254,param_2);
    *(int *)(aiStack_40[0] + 8) = *(int *)(aiStack_40[0] + 8) + 1;
    acStack_30[0] = '\0';
    cVar4 = fn_826B44A0(iVar2,aiStack_40,acStack_30,0,0,0,0);
    if ((((cVar4 != '\0') && (acStack_30[0] == '\x06')) &&
        (iVar2 = fn_82696958(acStack_30,iVar2), iVar2 != 0)) &&
       (iVar3 = (**(code **)(*(int *)(iVar2 + 0x10) + 8))(iVar2 + 0x10), iVar3 == 7)) {
      uVar1 = *(undefined4 *)(iVar2 + 0x38);
      fn_82696330(acStack_30);
      lVar5 = (ulonglong)*(uint *)(aiStack_40[0] + 8) - 1;
      *(int *)(aiStack_40[0] + 8) = (int)lVar5;
      if (lVar5 != 0) {
        return uVar1;
      }
      fn_826944C8(aiStack_40[0]);
      return uVar1;
    }
    fn_82696330(acStack_30);
    lVar5 = (ulonglong)*(uint *)(aiStack_40[0] + 8) - 1;
    *(int *)(aiStack_40[0] + 8) = (int)lVar5;
    if (lVar5 == 0) {
      fn_826944C8(aiStack_40[0]);
    }
  }
  return 0;
}

