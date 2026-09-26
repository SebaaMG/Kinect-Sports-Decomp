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
extern int fn_82639030();
extern int fn_8263A120();
extern int fn_82640680();
extern int fn_82640F10();
extern unsigned int lbl_82015BE0;
extern unsigned int uStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;


void fn_82853048(int param_1,int param_2,int param_3)

{
  ulonglong *puVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uVar3 = 1 << (*(uint *)(param_1 + 0xfc) & 0x3f);
  if ((*(uint *)(param_2 + 0x10) & uVar3) == 0) {
    if ((*(uint *)(param_2 + 0x14) & uVar3) == 0) {
      uVar7 = (ulonglong)*(uint *)(param_2 + 8);
      uVar6 = (ulonglong)*(uint *)(param_2 + 0xc);
      uVar5 = *(undefined4 *)(param_2 + 4);
    }
    else {
      uVar5 = 1;
      uVar7 = (ulonglong)*(uint *)(param_2 + 8) / 3;
      uVar6 = (ulonglong)*(uint *)(param_2 + 0xc) / 3;
    }
    fn_82640680(*(undefined4 *)(param_1 + 4),uVar5,uVar6,uVar7);
  }
  else {
    iVar8 = *(int *)(*(int *)(param_3 + 0x48) + 0x40) + *(int *)(param_2 + 0x18) * 0x3c;
    fn_8263A120(*(undefined4 *)(param_1 + 4),
                      *(undefined4 *)(*(int *)(iVar8 + 0x38) * 8 + *(int *)(iVar8 + 0x30)));
    fn_82639030(*(undefined4 *)(param_1 + 4),2);
    fVar4 = lbl_82015BE0;
    uVar3 = *(uint *)(param_1 + 0xa0);
    puVar1 = *(ulonglong **)(param_1 + 4);
    uVar2 = *(uint *)(param_2 + 0xc);
    *(undefined4 *)((int)puVar1 + uVar3 * 0x10 + 0x784) = uStack_2c;
    *(undefined4 *)(puVar1 + uVar3 * 2 + 0xf1) = uStack_28;
    *(undefined4 *)((int)puVar1 + uVar3 * 0x10 + 0x78c) = uStack_24;
    *(float *)(puVar1 + (uVar3 + 0x78) * 2) = (float)uVar2 * fVar4;
    *puVar1 = 0x8000000000000000U >> ((ulonglong)(uVar3 >> 2) & 0x7f) | *puVar1;
    if (*(int *)(param_2 + 4) == 4) {
      fn_82640F10(*(undefined4 *)(param_1 + 4),0x11,0,*(undefined4 *)(param_2 + 0x1c),
                        (ulonglong)*(uint *)(param_2 + 8) / 3);
    }
  }
  return;
}

