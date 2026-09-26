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
extern int fn_8267B890();
extern int fn_826824B0();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_826964E0();
extern int fn_82697700();
extern int fn_826C35B8();
extern unsigned int iStack_3c;
extern unsigned int uStack_40;


void fn_826AC370(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar5;
  int iVar6;
  ulonglong uVar4;
  uint uVar7;
  uint uStack_40;
  int iStack_3c;
  byte bStack_38;
  
  puVar1 = *(undefined1 **)(param_1 + 4);
  fn_826959C8(puVar1);
  *puVar1 = 0;
  if (1 < *(int *)(param_1 + 0x1c)) {
    uVar2 = *(undefined4 *)(param_1 + 0x18);
    uVar3 = fn_826957D0(param_1,0);
    iVar5 = fn_82697700(uVar3,uVar2);
    uVar2 = *(undefined4 *)(param_1 + 0x18);
    uVar3 = fn_826957D0(param_1,1);
    iVar6 = fn_82697700(uVar3,uVar2);
    if ((iVar5 == 800) && (iVar6 == 2)) {
      uVar4 = fn_8267B890(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x288),
                                0x34,0);
      if ((uVar4 & 0xffffffff) == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = fn_826C35B8(uVar4,(ulonglong)*(uint *)(param_1 + 0x18) + 0x78,
                                  0xffffffff826a7b88);
      }
      bStack_38 = 0;
      if (uVar7 != 0) {
        *(uint *)(uVar7 + 8) = *(int *)(uVar7 + 8) + 1U & 0x8fffffff;
      }
      iStack_3c = 0;
      uStack_40 = uVar7;
      fn_826964E0(*(undefined4 *)(param_1 + 4),&uStack_40);
      if (((bStack_38 & 2) == 0) && (uStack_40 != 0)) {
        fn_826824B0();
      }
      uStack_40 = 0;
      if (((bStack_38 & 1) == 0) && (iStack_3c != 0)) {
        fn_826824B0();
      }
      iStack_3c = 0;
      if (uVar7 != 0) {
        fn_826824B0(uVar7);
      }
    }
  }
  return;
}

