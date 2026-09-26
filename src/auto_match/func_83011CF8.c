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
extern unsigned int *auStack_b0;
extern int fn_82FA5190();
extern int fn_82FF5198();
extern int fn_83010770();
extern int fn_83011828();
extern int fn_83019E38();
extern int fn_83032FE8();
extern unsigned int lbl_831BC768;
extern unsigned int lbl_83264304;
extern unsigned int uStack_c0;


void fn_83011CF8(int param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  char cVar7;
  int iVar6;
  longlong lVar8;
  undefined8 uStack_c0;
  undefined4 *puStack_b8;
  undefined4 *puStack_b4;
  undefined4 auStack_b0 [44];
  
  puVar1 = *(undefined4 **)(param_1 + 0x70);
  puVar4 = (undefined4 *)0x0;
  do {
    while( true ) {
      while( true ) {
        puVar3 = puVar1;
        if (puVar3 == (undefined4 *)0x0) {
          fn_83011828(param_1,param_2,param_3,param_4);
          return;
        }
        puVar1 = (undefined4 *)puVar3[2];
        if ((((param_2 & 0xffffffff) == 0) ||
            (cVar7 = fn_83010770(param_1,param_2,puVar3[1]), cVar7 != '\0')) &&
           (((param_3 & 0xffffffff) == 0 || ((ulonglong)(uint)puVar1[0xd] == (param_3 & 0xffffffff))
            ))) break;
        puVar1 = (undefined4 *)*puVar3;
        puVar4 = puVar3;
      }
      if (((param_4 & 0xff) != 0) || (puVar1[0xc] == 0)) break;
      puVar1[0xc] = puVar1[0xc] + -1;
      puVar1 = (undefined4 *)*puVar3;
      puVar4 = puVar3;
    }
    uStack_c0 = CONCAT44(puVar1,(((U64)(uStack_c0) >> 32) & 0xFFFFFFFF));
    lVar8 = ((ulonglong)*(uint *)(param_1 + 0x90) - (ulonglong)(uint)puVar1[5]) +
            (ulonglong)(uint)puVar1[3];
    puVar1[3] = (int)lVar8;
    iVar6 = fn_83019E38(param_1 + 0x50,lVar8,&uStack_c0);
    if (iVar6 != 1) {
      auStack_b0[0] = 0;
      uVar2 = *(uint *)(puVar1[2] + 0x14) >> 8;
      if (uVar2 == 0x4011) {
LAB_83011dfc:
        (**(code **)(*(int *)puVar1[2] + 0x28))((int *)puVar1[2],auStack_b0);
      }
      else if (uVar2 == 0x5011) {
        fn_83032FE8();
        goto LAB_83011dfc;
      }
      fn_82FF5198(lbl_83264304,puVar1[10]);
      (**(code **)(*(int *)puVar1[2] + 8))();
      uVar5 = lbl_831BC768;
      (**(code **)*puVar1)(puVar1,0);
      fn_82FA5190(uVar5,puVar1);
    }
    puStack_b8 = (undefined4 *)*puVar3;
    if (puVar3 == *(undefined4 **)(param_1 + 0x70)) {
      *(undefined4 **)(param_1 + 0x70) = puStack_b8;
    }
    else {
      *puVar4 = puStack_b8;
    }
    if (puVar3 == *(undefined4 **)(param_1 + 0x74)) {
      *(undefined4 **)(param_1 + 0x74) = puVar4;
    }
    uStack_c0 = CONCAT44(puStack_b8,puVar4);
    *puVar3 = *(undefined4 *)(param_1 + 0x78);
    *(undefined4 **)(param_1 + 0x78) = puVar3;
    *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + -1;
    puVar1 = puStack_b8;
    puStack_b4 = puVar4;
  } while( true );
}

