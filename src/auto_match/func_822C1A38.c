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
#define ZEXT48(x) ((U64)((U32)(x)))
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_82F63CA0();
extern U64 storeWordConditionalIndexed();


void fn_822C1A38(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  char cVar6;
  undefined4 *puVar5;
  longlong lVar7;
  uint *puVar8;
  longlong lVar9;
  char in_RESERVE;
  byte bVar10;
  
  iVar1 = param_1[1];
  iVar2 = *param_1;
  if (iVar1 != 0) {
    cVar6 = fn_8223AAC0(iVar1);
    bVar10 = (cVar6 == '\0') << 1;
    if (cVar6 != '\0') {
      if (iVar2 != 0) {
        for (puVar5 = *(undefined4 **)(iVar2 + 8);
            (puVar5 != *(undefined4 **)(iVar2 + 0xc) && ((int *)*puVar5 != param_1));
            puVar5 = puVar5 + 1) {
        }
        if (puVar5 != *(undefined4 **)(iVar2 + 0xc)) {
          fn_82F63CA0(puVar5,puVar5 + 1,(*(int *)(iVar2 + 0xc) - (int)(puVar5 + 1) >> 2) << 2);
          *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + -4;
        }
        piVar3 = (int *)param_1[1];
        if (ZEXT48(piVar3) != 0) {
          lVar7 = ZEXT48(piVar3) + 8;
          do {
            puVar8 = (uint *)lVar7;
            lVar9 = (ulonglong)*puVar8 - 1;
            if (in_RESERVE != '\0') {
              uVar4 = storeWordConditionalIndexed(lVar9,0,lVar7);
              *puVar8 = uVar4;
              bVar10 = 2;
            }
          } while (!(bool)(bVar10 >> 1 & 1));
          if ((int)lVar9 == 0) {
            (**(code **)(*piVar3 + 4))();
          }
        }
        param_1[1] = 0;
        *param_1 = 0;
      }
      fn_822315A0(iVar1);
    }
  }
  return;
}

