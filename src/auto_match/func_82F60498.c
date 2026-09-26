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


undefined8 fn_82F60498(int param_1,int *param_2)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  int iVar4;
  longlong lVar3;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  uVar7 = 0;
  RtlEnterCriticalSection(param_1 + 0xd4);
  if (*(char *)(param_1 + 4) != '\0') {
    uVar7 = 0xffffffff82240403;
    if ((param_2 == (int *)0x0) || ((ulonglong)*(uint *)(param_1 + 0xc) == 0)) {
      uVar7 = 0xffffffff82240404;
    }
    else {
      uVar2 = (ulonglong)*(uint *)(param_1 + 0xc) - 1;
      uVar5 = 0;
      iVar4 = 0;
      do {
        if (*(int **)(iVar4 + *(int *)(param_1 + 0x1c)) == param_2) {
          if ((uVar5 & 0xffffffff) < (uVar2 & 0xffffffff)) {
            lVar3 = uVar2 - uVar5;
            lVar6 = (uVar5 & 0x3fffffff) << 2;
            do {
              puVar1 = (undefined4 *)(*(int *)(param_1 + 0x1c) + (int)lVar6);
              lVar6 = lVar6 + 4;
              *puVar1 = puVar1[1];
              lVar3 = lVar3 + -1;
            } while (lVar3 != 0);
          }
          *(undefined4 *)((int)((uVar2 & 0xffffffff) << 2) + *(int *)(param_1 + 0x1c)) = 0;
          (**(code **)(*param_2 + 8))(param_2);
          uVar7 = 0;
          *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
          break;
        }
        uVar5 = uVar5 + 1;
        iVar4 = iVar4 + 4;
      } while ((uVar5 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0xc));
    }
  }
  RtlLeaveCriticalSection(param_1 + 0xd4);
  return uVar7;
}

