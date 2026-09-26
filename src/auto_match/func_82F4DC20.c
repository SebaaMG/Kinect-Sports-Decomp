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
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_820145BC;
extern unsigned int lbl_82015D08;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_8326183C;


void fn_82F4DC20(void)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  longlong lVar8;
  
  iVar7 = lbl_8326183C;
  uVar4 = lbl_821AAD20;
  iVar5 = 1;
  puVar6 = (undefined4 *)(lbl_8326183C + 0x2cc0);
  lVar8 = 5;
  uVar1 = *(undefined4 *)(lbl_8326183C + 0x2d7c);
  *(undefined4 *)(lbl_8326183C + 0x2ca4) = 6;
  *(undefined4 *)(iVar7 + 0x2cb0) = uVar4;
  *(undefined4 *)(iVar7 + 0x2cc0) = 0x40000000;
  *(undefined4 *)(iVar7 + 0x2cb8) = uVar1;
  fVar3 = lbl_82015D08;
  uVar1 = lbl_820145BC;
  fVar2 = lbl_82002C5C;
  do {
    iVar7 = iVar5 + -1;
    puVar6[6] = uVar1;
    iVar5 = iVar5 + 1;
    puVar6[4] = (float)(longlong)iVar7 * fVar2 - fVar3;
    puVar6 = puVar6 + 8;
    *puVar6 = 0x80000000;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  return;
}

