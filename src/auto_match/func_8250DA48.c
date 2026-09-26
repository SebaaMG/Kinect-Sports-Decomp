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
extern int fn_82424AD0();
extern int fn_8250E250();
extern int fn_827F3EB0();
extern int fn_827F5AF8();
extern unsigned int lbl_821C2378;


undefined4 * fn_8250DA48(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  char cVar5;
  undefined4 *puVar6;
  int *piVar7;
  ulonglong uVar8;
  
  fn_827F5AF8();
  *param_1 = &lbl_821C2378;
  uVar4 = fn_827F3EB0(*(undefined4 *)(param_2 + 4));
  param_1[0x3a] = 0;
  piVar7 = param_1 + 0x3a;
  param_1[0x3c] = 0;
  param_1[0x3b] = 0;
  cVar5 = fn_82424AD0(piVar7,uVar4);
  if (cVar5 != '\0') {
    iVar2 = *piVar7;
    if ((uVar4 & 0xffffffff) != 0) {
      puVar6 = (undefined4 *)(iVar2 + -4);
      uVar8 = uVar4;
      uVar3 = uVar4 & 0xffffffff;
      while (uVar3 != 0) {
        puVar6 = puVar6 + 1;
        *puVar6 = 0x3f800000;
        uVar8 = uVar8 - 1;
        uVar3 = uVar8;
      }
    }
    param_1[0x3b] = (int)((uVar4 & 0xffffffff) << 2) + iVar2;
  }
  fn_8250E250(param_1 + 0x3e,piVar7);
  param_1[0x42] = *(undefined4 *)(param_2 + 0x30);
  uVar1 = *(undefined4 *)(param_2 + 0x30);
  param_1[0x44] = 0;
  param_1[0x43] = uVar1;
  param_1[0x45] = 0;
  return param_1;
}

