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
extern int fn_82D94A38();


void fn_82D82658(int param_1,undefined8 param_2)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x4c)) {
    iVar6 = 0;
    do {
      iVar7 = 0;
      iVar3 = *(int *)(iVar6 + *(int *)(param_1 + 0x48));
      if (*(short *)(iVar3 + 0xb0) != 0) {
        iVar8 = 0;
        do {
          puVar4 = (undefined4 *)(*(int *)(iVar3 + 0xac) + iVar8);
          puVar2 = (ushort *)puVar4[3];
          uVar1 = *puVar2;
          while (0x16 < uVar1) {
            puVar2 = *(ushort **)(puVar2 + 10);
            uVar1 = *puVar2;
          }
          if (uVar1 != 0x16) {
            fn_82D94A38(param_2,*puVar4);
          }
          iVar7 = iVar7 + 1;
          iVar8 = iVar8 + 0x30;
        } while (iVar7 < (int)(uint)*(ushort *)(iVar3 + 0xb0));
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 4;
    } while (iVar5 < *(int *)(param_1 + 0x4c));
  }
  return;
}

