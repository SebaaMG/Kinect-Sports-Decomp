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
extern int fn_8281FDF0();
extern int fn_8281FE80();


void fn_82821F28(int param_1,int param_2,ulonglong param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char cVar6;
  int iVar4;
  int iVar5;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  
  cVar6 = fn_8281FDF0(param_1,0xffffffff8201ebd4);
  if ((param_3 & 0xffffffff) != 0) {
    puVar9 = (uint *)(param_2 + 8);
    do {
      uVar1 = puVar9[-1];
      iVar8 = uVar1 * 0xe;
      if (*(char *)(*(int *)(param_1 + 0x44) + iVar8 + -2) == cVar6) {
        param_4 = param_4 + *puVar9;
      }
      else {
        uVar2 = puVar9[-2];
        iVar4 = fn_8281FE80(param_1,uVar2);
        iVar5 = fn_8281FE80(param_1,uVar1);
        uVar7 = 0;
        uVar1 = *(uint *)(uVar2 * 0xe + *(int *)(param_1 + 0x44) + -6);
        uVar2 = *(uint *)(*(int *)(param_1 + 0x44) + iVar8 + -6);
        if (*puVar9 != 0) {
          do {
            uVar3 = *param_4;
            if ((uVar3 < uVar1) && (*(uint *)(uVar3 + iVar4) < uVar2)) {
              *(uint *)(uVar3 + iVar4) = *(uint *)(uVar3 + iVar4) + iVar5;
            }
            uVar7 = uVar7 + 1;
            param_4 = param_4 + 1;
          } while (uVar7 < *puVar9);
        }
      }
      param_3 = param_3 - 1;
      puVar9 = puVar9 + 3;
    } while (param_3 != 0);
  }
  return;
}

