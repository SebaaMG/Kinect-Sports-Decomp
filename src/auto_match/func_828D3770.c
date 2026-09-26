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
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_82F68CC0();


undefined4 * fn_828D3770(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  longlong lVar10;
  
  if (param_1 != param_2) {
    iVar5 = param_1 - (int)param_3;
    puVar9 = (undefined4 *)(param_1 + 8);
    do {
      iVar1 = puVar9[-1];
      uVar2 = *(undefined4 *)(iVar5 + (int)param_3);
      uVar7 = 0;
      iVar8 = 0;
      if ((iVar1 != 0) && (cVar3 = fn_8223AAC0(iVar1), cVar3 != '\0')) {
        uVar7 = uVar2;
        iVar8 = iVar1;
      }
      iVar1 = param_3[1];
      param_3[1] = iVar8;
      *param_3 = uVar7;
      if (iVar1 != 0) {
        fn_822315A0();
      }
      param_3[2] = *puVar9;
      param_3[3] = puVar9[1];
      param_3[4] = puVar9[2];
      fn_82F68CC0(param_3 + 5,puVar9 + 3,0x24);
      puVar6 = (undefined1 *)((int)puVar9 + 0x2f);
      puVar4 = (undefined1 *)((int)param_3 + 0x37);
      lVar10 = 8;
      do {
        puVar6 = puVar6 + 1;
        puVar4 = puVar4 + 1;
        *puVar4 = *puVar6;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      fn_82F68CC0(param_3 + 0x10,puVar9 + 0xe,0x10);
      param_3 = param_3 + 0x14;
      puVar9 = puVar9 + 0x14;
    } while (iVar5 + (int)param_3 != param_2);
  }
  return param_3;
}

