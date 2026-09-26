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
extern unsigned int *auStack_60;
extern int fn_82FA5060();
extern int fn_82FA5190();
extern int fn_82FB09A8();
extern int fn_82FB0E40();
extern int fn_82FB1078();
extern int fn_82FB11B8();
extern int fn_82FF9C88();
extern int fn_83007AE8();
extern unsigned int iStack_3c;
extern unsigned int lbl_831BC768;
extern unsigned int stack0x0000001c;
extern unsigned int stack0x00000024;
extern unsigned int uStack00000024;
extern unsigned int uStack_38;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;


undefined8
fn_82FB1470(int param_1,int param_2,undefined4 param_3,undefined8 param_4,ulonglong param_5)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 uVar8;
  uint *puStack0000001c;
  undefined4 uStack00000024;
  undefined1 auStack_60 [4];
  undefined4 uStack_5c;
  undefined4 uStack_58;
  int iStack_3c;
  undefined4 uStack_38;
  
  uVar1 = *(uint *)(param_2 + 4);
  puStack0000001c = (uint *)(param_2 + 8);
  uVar8 = 1;
  uVar7 = 0;
  uStack00000024 = param_3;
  if (uVar1 != 0) {
    do {
      if ((int)uVar8 == 1) {
        uVar8 = fn_82FF9C88(&stack0x0000001c,&stack0x00000024,auStack_60);
        if ((int)uVar8 != 1) {
          return uVar8;
        }
        if (iStack_3c == 0) {
          uVar8 = fn_82FB1078();
        }
        else {
          uVar8 = fn_82FB11B8(param_1,uStack_58,uStack_5c,iStack_3c,uStack_38);
        }
        if ((int)uVar8 != 1) {
          return 2;
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar1);
  }
  uVar1 = *puStack0000001c;
  puStack0000001c = puStack0000001c + 1;
  if (uVar1 != 0) {
    iVar3 = fn_82FA5060(lbl_831BC768,uVar1 * 5 & 0x1fffffff);
    if (iVar3 == 0) {
      return 2;
    }
    uVar7 = 0;
    if (3 < (int)uVar1) {
      puVar6 = (undefined8 *)(iVar3 + -8);
      do {
        *(uint *)(puVar6 + 1) = *puStack0000001c;
        *(uint *)((int)puVar6 + 0xc) = puStack0000001c[1];
        puVar6[2] = *(undefined8 *)(puStack0000001c + 2);
        puVar6[3] = *(undefined8 *)(puStack0000001c + 4);
        puVar6[4] = *(undefined8 *)(puStack0000001c + 6);
        puVar6[5] = *(undefined8 *)(puStack0000001c + 8);
        *(uint *)(puVar6 + 6) = puStack0000001c[10];
        *(uint *)((int)puVar6 + 0x34) = puStack0000001c[0xb];
        puVar6[7] = *(undefined8 *)(puStack0000001c + 0xc);
        puVar6[8] = *(undefined8 *)(puStack0000001c + 0xe);
        uVar7 = uVar7 + 4;
        puVar6[9] = *(undefined8 *)(puStack0000001c + 0x10);
        puVar6[10] = *(undefined8 *)(puStack0000001c + 0x12);
        *(uint *)(puVar6 + 0xb) = puStack0000001c[0x14];
        *(uint *)((int)puVar6 + 0x5c) = puStack0000001c[0x15];
        puVar6[0xc] = *(undefined8 *)(puStack0000001c + 0x16);
        puVar6[0xd] = *(undefined8 *)(puStack0000001c + 0x18);
        puVar6[0xe] = *(undefined8 *)(puStack0000001c + 0x1a);
        puVar6[0xf] = *(undefined8 *)(puStack0000001c + 0x1c);
        *(uint *)(puVar6 + 0x10) = puStack0000001c[0x1e];
        *(uint *)((int)puVar6 + 0x84) = puStack0000001c[0x1f];
        puVar6[0x11] = *(undefined8 *)(puStack0000001c + 0x20);
        puVar6[0x12] = *(undefined8 *)(puStack0000001c + 0x22);
        puVar4 = puStack0000001c + 0x26;
        puVar6[0x13] = *(undefined8 *)(puStack0000001c + 0x24);
        puStack0000001c = puStack0000001c + 0x28;
        puVar6 = puVar6 + 0x14;
        *puVar6 = *(undefined8 *)puVar4;
      } while (uVar7 < uVar1 - 3);
    }
    if (uVar7 < uVar1) {
      iVar5 = uVar1 - uVar7;
      puVar6 = (undefined8 *)(uVar7 * 0x28 + iVar3 + -8);
      do {
        *(uint *)(puVar6 + 1) = *puStack0000001c;
        *(uint *)((int)puVar6 + 0xc) = puStack0000001c[1];
        puVar6[2] = *(undefined8 *)(puStack0000001c + 2);
        puVar6[3] = *(undefined8 *)(puStack0000001c + 4);
        puVar4 = puStack0000001c + 8;
        puVar6[4] = *(undefined8 *)(puStack0000001c + 6);
        puStack0000001c = puStack0000001c + 10;
        puVar6 = puVar6 + 5;
        *puVar6 = *(undefined8 *)puVar4;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    uVar7 = *puStack0000001c;
    puStack0000001c = puStack0000001c + 1;
    uVar8 = fn_82FB0E40(param_1,uVar1,iVar3,uVar7);
    fn_82FA5190(lbl_831BC768,iVar3);
  }
  if ((((int)uVar8 == 1) &&
      (uVar8 = fn_83007AE8(param_1,&stack0x0000001c,&stack0x00000024,param_5),
      (param_5 & 0xff) == 0)) && ((int)uVar8 == 1)) {
    *(undefined2 *)(param_1 + 0x84) = *(undefined2 *)puStack0000001c;
    *(short *)(param_1 + 0x80) = (short)*puStack0000001c;
    *(undefined2 *)(param_1 + 0x82) = *(undefined2 *)(puStack0000001c + 1);
    *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)((int)puStack0000001c + 6);
    puVar2 = (undefined4 *)((int)puStack0000001c + 10);
    puStack0000001c = (uint *)((int)puStack0000001c + 0xe);
    fn_82FB09A8(param_1,*puVar2);
  }
  return uVar8;
}

