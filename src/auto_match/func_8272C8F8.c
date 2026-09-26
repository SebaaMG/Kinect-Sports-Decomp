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
extern int fn_82681728();
extern int fn_826944C8();
extern int fn_82695608();
extern int fn_82696330();


ulonglong fn_8272C8F8(int *param_1)

{
  ushort uVar1;
  int iVar2;
  bool bVar3;
  char cVar6;
  int iVar5;
  ulonglong uVar4;
  longlong lVar7;
  int aiStack_50 [4];
  char acStack_40 [64];
  
  cVar6 = (**(code **)(*param_1 + 8))();
  if (cVar6 != '\0') {
    if (*(int *)(param_1[0x28] + 0x114) == 0) {
      uVar1 = *(ushort *)(param_1[0x27] + 0x50) >> 3;
    }
    else {
      uVar1 = *(ushort *)(*(int *)(param_1[0x28] + 0x114) + 0x68);
    }
    if ((uVar1 & 1) == 0) {
      if (((param_1[0x23] & 0x60U) == 0) && (iVar2 = param_1[0x1b], iVar2 != 0)) {
        acStack_40[0] = '\0';
        iVar5 = (**(code **)(*param_1 + 0x58))(param_1);
        fn_82681728(aiStack_50,(ulonglong)*(uint *)(iVar5 + 0x78) + 0x254,0xffffffff8200670c);
        cVar6 = (**(code **)(*(int *)(iVar2 + 0x10) + 0x2c))
                          (iVar2 + 0x10,iVar5 + 0x78,aiStack_50,acStack_40);
        lVar7 = (ulonglong)*(uint *)(aiStack_50[0] + 8) - 1;
        *(int *)(aiStack_50[0] + 8) = (int)lVar7;
        if (lVar7 == 0) {
          fn_826944C8(aiStack_50[0]);
        }
        if (cVar6 != '\0') {
          if ((acStack_40[0] == '\0') || (bVar3 = false, acStack_40[0] == '\n')) {
            bVar3 = true;
          }
          if (!bVar3) {
            uVar4 = fn_82695608(acStack_40,iVar5);
            fn_82696330(acStack_40);
            return uVar4;
          }
        }
        fn_82696330(acStack_40);
      }
      if (((param_1[0x23] & 0x60U) == 0) || (bVar3 = true, (param_1[0x23] & 0x60U) == 0x60)) {
        bVar3 = false;
      }
      return (ulonglong)!bVar3;
    }
  }
  return 0;
}

