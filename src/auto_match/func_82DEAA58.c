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
extern int fn_82D3DA40();
extern int fn_82D4D1C0();
extern int fn_82D4D580();
extern int fn_82D4D618();


void fn_82DEAA58(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  undefined1 auStack_50 [80];
  
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0x54);
  iVar3 = iVar1;
  if (*(int *)(iVar1 + 0xc) != 9) {
    if (*(int *)(iVar1 + 0xc) != 10) {
      return;
    }
    iVar3 = *(int *)(iVar1 + 0x34);
    fn_82D4D618(auStack_50,*(undefined4 *)(iVar1 + 0x14),param_2);
    fn_82D4D1C0(auStack_50,*(undefined4 *)(iVar1 + 0x14));
    if (*(int *)(iVar3 + 0xc) != 9) {
      fn_82D4D580(auStack_50);
      goto LAB_82deaacc;
    }
    fn_82D4D580(auStack_50);
  }
  fn_82D3DA40(iVar3,param_2);
LAB_82deaacc:
  if (iVar2 != 0) {
    uVar5 = (ulonglong)*(ushort *)(param_1 + 0x50);
    uVar4 = 0;
    if (*(ushort *)(param_1 + 0x50) != 0) {
      puVar6 = (undefined4 *)(iVar2 + 0x18);
      do {
        if ((*(uint *)(((int)uVar4 >> 5) * 4 + *param_2) >> (uVar4 & 0x1f) & 1) == 0) {
          puVar6[-5] = 0x7fff0000;
          puVar6[-4] = 0x7fff0000;
          puVar6[-3] = 0;
          puVar6[-1] = 0;
          *puVar6 = 0;
        }
        uVar4 = uVar4 + 1;
        puVar6 = puVar6 + 8;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
  }
  return;
}

