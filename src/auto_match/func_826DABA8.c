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
extern int fn_8267C4F0();
extern int fn_826DAA10();


void fn_826DABA8(int *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  
  iVar6 = *param_1;
  if (iVar6 != 0) {
    uVar2 = *(uint *)(iVar6 + 4) & *param_2;
    iVar4 = uVar2 * 0xc + iVar6;
    if ((*(int *)(iVar4 + 8) != -2) && (*(uint *)(iVar4 + 0xc) == uVar2)) {
      uVar1 = uVar2;
      uVar3 = 0xffffffff;
      while ((uVar5 = uVar1, puVar7 = (uint *)(iVar4 + 8), *(uint *)(iVar4 + 0xc) != uVar2 ||
             (*(uint *)(*(int *)(iVar4 + 0x10) + 8) != *param_2))) {
        uVar1 = *puVar7;
        if (uVar1 == 0xffffffff) {
          return;
        }
        iVar4 = uVar1 * 0xc + iVar6;
        uVar3 = uVar5;
      }
      if (uVar2 == uVar5) {
        if (*puVar7 != 0xffffffff) {
          iVar6 = *puVar7 * 0xc + iVar6;
          if (*(int *)(iVar4 + 0x10) != 0) {
            fn_8267C4F0();
          }
          *puVar7 = 0xfffffffe;
          *puVar7 = *(uint *)(iVar6 + 8);
          *(undefined4 *)(iVar4 + 0xc) = *(undefined4 *)(iVar6 + 0xc);
          fn_826DAA10((int *)(iVar4 + 0x10),iVar6 + 0x10);
          puVar7 = (uint *)(iVar6 + 8);
        }
      }
      else {
        *(uint *)(uVar3 * 0xc + iVar6 + 8) = *puVar7;
      }
      if (puVar7[2] != 0) {
        fn_8267C4F0();
      }
      *puVar7 = 0xfffffffe;
      *(int *)*param_1 = *(int *)*param_1 + -1;
      return;
    }
  }
  return;
}

