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
extern int fn_8268AF70();
extern int fn_827246F8();
extern int fn_82724770();


void fn_827264B0(int *param_1,uint *param_2)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  
  if (*param_1 != 0) {
    uVar4 = fn_8268AF70(((ulonglong)*param_2 & 0xfffffffc) + 8,
                         *(uint *)(*param_2 & 0xfffffffc) & 0x7fffffff,0x1505);
    iVar10 = *param_1;
    uVar4 = *(uint *)(iVar10 + 4) & uVar4;
    iVar7 = uVar4 * 0x10 + iVar10;
    if ((*(int *)(iVar7 + 8) != -2) && (*(uint *)(iVar7 + 0xc) == uVar4)) {
      uVar5 = 0xffffffff;
      uVar9 = uVar4;
      do {
        puVar11 = (uint *)(iVar7 + 8);
        if (*(uint *)(iVar7 + 0xc) == uVar4) {
          pcVar6 = (char *)((*param_2 & 0xfffffffc) + 8);
          pcVar8 = (char *)((*(uint *)(iVar7 + 0x10) & 0xfffffffc) + 8);
          do {
            cVar1 = *pcVar8;
            cVar2 = *pcVar6;
            if (cVar1 == '\0') break;
            pcVar8 = pcVar8 + 1;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 == cVar2);
          if (cVar1 == cVar2) {
            if (uVar4 == uVar9) {
              if (*puVar11 != 0xffffffff) {
                iVar10 = *puVar11 * 0x10 + iVar10;
                fn_827246F8(iVar7 + 0x10);
                *puVar11 = 0xfffffffe;
                *puVar11 = *(uint *)(iVar10 + 8);
                *(undefined4 *)(iVar7 + 0xc) = *(undefined4 *)(iVar10 + 0xc);
                fn_82724770(iVar7 + 0x10,iVar10 + 0x10);
                puVar11 = (uint *)(iVar10 + 8);
              }
            }
            else {
              *(uint *)(uVar5 * 0x10 + iVar10 + 8) = *puVar11;
            }
            fn_827246F8(puVar11 + 2);
            *puVar11 = 0xfffffffe;
            *(int *)*param_1 = *(int *)*param_1 + -1;
            return;
          }
        }
        uVar3 = *puVar11;
        if (uVar3 == 0xffffffff) {
          return;
        }
        iVar7 = uVar3 * 0x10 + iVar10;
        uVar5 = uVar9;
        uVar9 = uVar3;
      } while( true );
    }
  }
  return;
}

