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
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_821916FC;
extern unsigned int lbl_821954E8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_8320A898;
extern unsigned int lbl_8326B350;
extern unsigned int lbl_8326B430;
extern unsigned int lbl_8326B434;


void fn_82547240(void)

{
  float fVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  undefined4 *puVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  iVar3 = fn_82F6A548();
  puVar5 = (undefined4 *)(&lbl_8326B350 + iVar3 * 8);
  lVar4 = 2;
  fVar1 = (float)((longlong)*(float *)(lbl_8320A898 + 0x321c) & 0xffffffff) / (float)lbl_8326B434;
  fVar2 = (float)((longlong)*(float *)(lbl_8320A898 + 0x3218) & 0xffffffff) / (float)lbl_8326B430;
  dVar8 = (double)(fVar1 * lbl_821954E8 + lbl_821CA460);
  dVar9 = (double)(fVar2 * lbl_821916FC - lbl_821CA460);
  dVar6 = (double)(((float)((longlong)*(float *)(lbl_8320A898 + 0x3224) & 0xffffffff) /
                    (float)lbl_8326B434 + fVar1) * lbl_821954E8 + lbl_821CA460);
  dVar7 = (double)(((float)((longlong)*(float *)(lbl_8320A898 + 0x3220) & 0xffffffff) /
                    (float)lbl_8326B430 + fVar2) * lbl_821916FC - lbl_821CA460);
  do {
    if ((code *)*puVar5 != (code *)0x0) {
      (*(code *)*puVar5)(dVar9,dVar7,dVar8,dVar6,puVar5[1]);
    }
    lVar4 = lVar4 + -1;
    puVar5 = puVar5 + 4;
  } while (lVar4 != 0);
  fn_82F6A594();
  return;
}

