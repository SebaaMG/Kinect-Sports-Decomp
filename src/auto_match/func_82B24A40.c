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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern int fn_82ABE250();
extern int fn_82B207C8();
extern int fn_82B24768();
extern int fn_82B4B410();
extern int fn_82B82D28();
extern unsigned int iStack_48;
extern unsigned int uStack_44;


uint * fn_82B24A40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  bool bVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  undefined1 auStack_50 [8];
  int iStack_48;
  undefined4 uStack_44;
  uint auStack_40 [16];
  
  puVar5 = (uint *)fn_82ABE250(param_1,8,0x33);
  puVar2 = puVar5 + 1;
  puVar5[1] = (uint)puVar5 | 1;
  *puVar5 = (uint)puVar2 | 1;
  fn_82B82D28(param_2,param_3,&iStack_48,&uStack_44,auStack_40,0,param_4,0);
  if (((CONCAT44(auStack_40[0],auStack_40[0]) & 0xfffffffffffffffb) == 0) &&
     ((*(uint *)(iStack_48 + 8) & 0x3f80) == 0x100)) {
    fn_82B24768(param_1,puVar5,*(undefined4 *)(iStack_48 + 0x2c),uStack_44,param_4,auStack_50);
    fn_82B24768(param_1,puVar5,*(undefined4 *)(iStack_48 + 0x30),uStack_44,param_4,auStack_50);
    uVar1 = *puVar2;
    uVar7 = *(uint *)((-(uint)((uVar1 & 1) == 0) & uVar1) + 0x18);
    if ((((uVar7 & 0x18) == 0) || ((auStack_40[0] & 0x18) == 0)) &&
       (((uVar7 & 2) == 0 || ((auStack_40[0] & 1) == 0)))) {
      if (((uVar7 & 4) == 0) || (bVar4 = false, (auStack_40[0] & 1) == 0)) {
        bVar4 = true;
      }
    }
    else {
      bVar4 = false;
    }
    uVar7 = -(uint)((uVar1 & 1) == 0) & uVar1;
    if (bVar4) {
      uVar7 = *(uint *)(uVar7 + 0x18);
      if (((uVar7 & 4) != 0) && ((auStack_40[0] & 2) != 0)) {
        uVar7 = uVar7 - 4;
      }
      if ((uVar7 & auStack_40[0] & 4) != 0) {
        uVar7 = uVar7 - 4;
        auStack_40[0] = auStack_40[0] - 4;
      }
      if (((uVar7 & 1) != 0) && ((auStack_40[0] & 2) != 0)) {
        auStack_40[0] = auStack_40[0] - 2;
      }
      *(uint *)((-(uint)((uVar1 & 1) == 0) & uVar1) + 0x18) = uVar7 | auStack_40[0];
      return puVar5;
    }
    uVar7 = *(uint *)(uVar7 + 0x24);
    if ((((uVar7 & 0x18) == 0) || ((auStack_40[0] & 0x18) == 0)) &&
       (((uVar7 & 2) == 0 || ((auStack_40[0] & 1) == 0)))) {
      if (((uVar7 & 4) == 0) || (bVar4 = false, (auStack_40[0] & 1) == 0)) {
        bVar4 = true;
      }
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      uVar7 = *(uint *)((-(uint)((uVar1 & 1) == 0) & uVar1) + 0x24);
      if (((uVar7 & 4) != 0) && ((auStack_40[0] & 2) != 0)) {
        uVar7 = uVar7 - 4;
      }
      if ((uVar7 & auStack_40[0] & 4) != 0) {
        uVar7 = uVar7 - 4;
        auStack_40[0] = auStack_40[0] - 4;
      }
      if (((uVar7 & 1) != 0) && ((auStack_40[0] & 2) != 0)) {
        auStack_40[0] = auStack_40[0] - 2;
      }
      *(uint *)((-(uint)((uVar1 & 1) == 0) & uVar1) + 0x24) = uVar7 | auStack_40[0];
      return puVar5;
    }
    fn_82B207C8(puVar5);
  }
  if ((*puVar2 & 1) == 0) {
    uVar1 = *puVar5 & 0xfffffffe;
    iVar6 = uVar1 - 4;
    if ((iVar6 != 0) && (*(int *)(uVar1 + 4) + 1U <= *(uint *)(uVar1 + 8))) goto LAB_82b24cd0;
  }
  iVar6 = fn_82B4B410(puVar5,1);
LAB_82b24cd0:
  iVar3 = *(int *)(iVar6 + 8) * 0xc + iVar6;
  *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
  *(int *)(iVar3 + 0x10) = iStack_48;
  *(undefined4 *)(iVar3 + 0x14) = uStack_44;
  *(uint *)(iVar3 + 0x18) = auStack_40[0];
  return puVar5;
}

