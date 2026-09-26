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
extern unsigned int *auStack_60;
extern int fn_8267C498();
extern int fn_8278B6F0();
extern int fn_8278BDD0();


void fn_8278CAE8(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  undefined1 auStack_60 [96];
  
  piVar1 = (int *)*param_1;
  uVar2 = param_1[1];
  iVar3 = *piVar1;
  uVar4 = *(undefined4 *)(uVar2 * 0xc + iVar3 + 0x10);
  uVar7 = fn_8278BDD0(auStack_60,uVar4);
  uVar7 = uVar7 & *(uint *)(iVar3 + 4);
  iVar9 = uVar7 * 0xc + iVar3;
  if ((*(int *)(iVar9 + 8) != -2) && (*(uint *)(iVar9 + 0xc) == uVar7)) {
    uVar5 = uVar7;
    uVar10 = 0xffffffff;
    while( true ) {
      uVar11 = uVar5;
      puVar12 = (uint *)(iVar9 + 8);
      if (*(uint *)(iVar9 + 0xc) == uVar7) {
        cVar8 = fn_8278B6F0(*(undefined4 *)(iVar9 + 0x10),uVar4);
        if (cVar8 != '\0') {
          if (uVar11 != uVar2) {
            return;
          }
          if (uVar7 == uVar11) {
            if (*puVar12 != 0xffffffff) {
              iVar3 = *puVar12 * 0xc + iVar3;
              if (*(int *)(iVar9 + 0x10) != 0) {
                fn_8267C498();
              }
              *puVar12 = 0xfffffffe;
              *puVar12 = *(uint *)(iVar3 + 8);
              *(undefined4 *)(iVar9 + 0xc) = *(undefined4 *)(iVar3 + 0xc);
              iVar6 = *(int *)(iVar3 + 0x10);
              if (iVar6 != 0) {
                *(int *)(iVar6 + 4) = *(int *)(iVar6 + 4) + 1;
              }
              *(int *)(iVar9 + 0x10) = *(int *)(iVar3 + 0x10);
              param_1[1] = param_1[1] + -1;
              puVar12 = (uint *)(iVar3 + 8);
            }
          }
          else {
            *(uint *)(uVar10 * 0xc + iVar3 + 8) = *puVar12;
          }
          if (puVar12[2] != 0) {
            fn_8267C498();
          }
          *puVar12 = 0xfffffffe;
          piVar1 = (int *)*piVar1;
          *piVar1 = *piVar1 + -1;
          return;
        }
      }
      uVar5 = *puVar12;
      if (uVar5 == 0xffffffff) break;
      iVar9 = uVar5 * 0xc + iVar3;
      uVar10 = uVar11;
    }
    return;
  }
  return;
}

