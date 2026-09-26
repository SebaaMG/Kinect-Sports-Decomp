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
extern int fn_8251FA58();
extern int fn_825604A0();
extern int fn_82566E58();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_83282244;


void fn_8255B0D8(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  undefined4 *puVar7;
  longlong lVar8;
  
  if (param_1[0xd6] != 0) {
    param_1[0xd6] = 0;
  }
  puVar1 = (undefined4 *)param_1[5];
  if (puVar1 != (undefined4 *)param_1[4]) {
    for (puVar7 = (undefined4 *)param_1[4]; puVar7 < puVar1; puVar7 = puVar7 + 4) {
      fn_82566E58(*puVar7,param_1);
    }
  }
  *(undefined2 *)(param_1 + 8) = 0;
  param_1[5] = param_1[4];
  param_1[1] = 0;
  if (param_1[0x6c] != 0) {
    fn_825604A0(param_1 + 0xc);
    param_1[0x6c] = 0;
  }
  if (param_1[0xd8] != 0) {
    fn_8251FA58();
    param_1[0xd8] = 0;
  }
  uVar4 = lbl_8218E8E8;
  uVar2 = param_1[0xd9];
  if (uVar2 != 0) {
    uVar5 = 1;
    puVar6 = (uint *)(*param_1 + 0x58);
    lVar8 = 4;
    do {
      if ((uVar5 & uVar2) != 0) {
        uVar3 = *puVar6;
        *puVar6 = (uint)((ulonglong)uVar3 - 1);
        if ((ulonglong)uVar3 - 1 == 0) {
          puVar6[4] = uVar4;
        }
      }
      puVar6 = puVar6 + 1;
      uVar5 = uVar5 << 1;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    param_1[0xd9] = 0;
  }
  lbl_83282244 = lbl_83282244 & 0xfffffffe;
  return;
}

