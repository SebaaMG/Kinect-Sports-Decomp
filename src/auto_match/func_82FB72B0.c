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
extern unsigned int *auStack_70;
extern int fn_82FB6438();
extern int fn_82FB7070();
extern int fn_82FB8E58();
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_64;


int fn_82FB72B0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint *puVar6;
  uint *puVar7;
  longlong lVar8;
  undefined1 auStack_70 [12];
  undefined4 uStack_64;
  undefined4 uStack_60;
  uint uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ushort uStack_44;
  undefined4 uStack_40;
  
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  if (*(char *)(param_1 + 0x74) == '\0') {
    iVar4 = 0;
  }
  else {
    fn_82FB8E58(param_1 + 0x5c);
    iVar4 = *(int *)(param_1 + 0x54);
    if (iVar4 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x40) + 0x60) + 0xc);
    }
    iVar3 = fn_82FB6438(*(undefined4 *)(param_1 + 0x58),uVar5,uVar1);
    iVar2 = *(int *)(iVar3 + 0x30);
    if (iVar2 == 0) {
      iVar4 = fn_82FB7070(param_1,iVar3,iVar4,uVar1,0);
    }
    else {
      uStack_64 = *(undefined4 *)(iVar3 + 0xc);
      uStack_60 = *(undefined4 *)(iVar3 + 0x10);
      uStack_5c = *(uint *)(iVar3 + 0x14);
      uStack_40 = 0;
      uStack_58 = *(undefined4 *)(iVar2 + 4);
      uStack_54 = *(undefined4 *)(iVar2 + 8);
      uStack_50 = *(undefined4 *)(iVar2 + 0xc);
      uStack_4c = 0;
      uStack_44 = (ushort)((uint)(*(undefined4 **)(iVar3 + 0x30))[7] >> 0x1f) << 0xc |
                  uStack_44 & 0xfff;
      iVar4 = fn_82FB7070(param_1,auStack_70,iVar4,**(undefined4 **)(iVar3 + 0x30),0);
      if (iVar4 != 0) {
        if (*(int *)(iVar4 + 0x40) == 0) {
          iVar4 = (**(code **)(*(int *)(param_1 + 0x40) + 0x10))(param_1 + 0x40);
        }
        else {
          iVar2 = *(int *)(iVar3 + 0x30);
          puVar6 = &uStack_5c;
          puVar7 = (uint *)(iVar3 + 0x14);
          lVar8 = 6;
          uStack_64 = *(undefined4 *)(iVar2 + 0x14);
          uStack_60 = *(undefined4 *)(iVar2 + 0x18);
          uStack_5c = *(uint *)(iVar2 + 0x1c) >> 4 & 0x4000000 | uStack_5c & 0x3ffffff | 0x38000000;
          do {
            puVar7 = puVar7 + 1;
            puVar6 = puVar6 + 1;
            *puVar6 = *puVar7;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
          fn_82FB7070(param_1,auStack_70,iVar4,uVar1,0);
        }
      }
    }
  }
  return iVar4;
}

