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
extern unsigned int *auStack_50;
extern int fn_8267C4F0();
extern int fn_826DAA10();
extern int fn_8278B4F8();
extern int fn_8278BA98();


void fn_8278C980(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  undefined1 auStack_50 [80];
  
  piVar1 = (int *)*param_1;
  iVar7 = param_1[1] * 0xc + *piVar1;
  uVar3 = fn_8278BA98(auStack_50,*(undefined4 *)(iVar7 + 0x10));
  uVar3 = *(uint *)(*piVar1 + 4) & uVar3;
  iVar5 = uVar3 * 0xc + *piVar1;
  if ((*(int *)(iVar5 + 8) != -2) && (*(uint *)(iVar5 + 0xc) == uVar3)) {
    uVar2 = uVar3;
    uVar6 = 0xffffffff;
    while( true ) {
      uVar8 = uVar2;
      puVar9 = (uint *)(iVar5 + 8);
      if (*(uint *)(iVar5 + 0xc) == uVar3) {
        cVar4 = fn_8278B4F8(*(undefined4 *)(iVar5 + 0x10),*(undefined4 *)(iVar7 + 0x10));
        if (cVar4 != '\0') {
          if (uVar8 != param_1[1]) {
            return;
          }
          if (uVar3 == uVar8) {
            if (*puVar9 != 0xffffffff) {
              iVar7 = *puVar9 * 0xc + *piVar1;
              if (*(int *)(iVar5 + 0x10) != 0) {
                fn_8267C4F0();
              }
              *puVar9 = 0xfffffffe;
              *puVar9 = *(uint *)(iVar7 + 8);
              *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(iVar7 + 0xc);
              fn_826DAA10((int *)(iVar5 + 0x10),iVar7 + 0x10);
              param_1[1] = param_1[1] + -1;
              puVar9 = (uint *)(iVar7 + 8);
            }
          }
          else {
            *(uint *)(uVar6 * 0xc + *piVar1 + 8) = *puVar9;
          }
          if (puVar9[2] != 0) {
            fn_8267C4F0();
          }
          *puVar9 = 0xfffffffe;
          *(int *)*piVar1 = *(int *)*piVar1 + -1;
          return;
        }
      }
      uVar2 = *puVar9;
      if (uVar2 == 0xffffffff) break;
      iVar5 = uVar2 * 0xc + *piVar1;
      uVar6 = uVar8;
    }
    return;
  }
  return;
}

