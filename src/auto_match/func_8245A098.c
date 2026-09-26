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
extern int fn_82230218();
extern int fn_82230300();
extern int fn_822C1928();
extern int fn_8260D428();
extern int fn_82F65AC0();
extern int fn_82F65B18();
extern unsigned int uStack_50;
extern unsigned int uStack_6c;
extern unsigned int uStack_8c;


void fn_8245A098(int param_1)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 ***pppuVar4;
  undefined4 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint *puVar8;
  undefined4 **appuStack_a0 [5];
  uint uStack_8c;
  undefined4 **appuStack_80 [5];
  uint uStack_6c;
  undefined1 auStack_60 [16];
  undefined4 uStack_50;
  
  puVar8 = (uint *)(param_1 + 0xcc);
  uVar2 = fn_822C1928(*(undefined4 *)(param_1 + 0xcc),0xffffffff821aa89c,0,1);
  uVar5 = *(undefined4 *)(param_1 + 0xcc);
  fn_82230300(auStack_60,0,0);
  fn_82230218(auStack_60,uVar5,uVar2,5);
  iVar3 = fn_8260D428(auStack_60,0,uStack_50,0xffffffff821bab74,5);
  if (iVar3 == 0) {
    uVar7 = 0;
    if ((int)(*(int *)(param_1 + 0xd0) - *puVar8) / 0x1c != 0) {
      lVar6 = 0;
      do {
        uVar1 = *puVar8;
        fn_82230300(appuStack_a0,0,0);
        fn_82230218(appuStack_a0,lVar6 + (ulonglong)uVar1,0,0x10);
        pppuVar4 = (undefined4 ***)appuStack_a0[0];
        if (uStack_8c < 0x10) {
          pppuVar4 = appuStack_a0;
        }
        iVar3 = fn_82F65AC0(pppuVar4,0xffffffff821bab7c);
        fn_82230300(appuStack_a0,1,0);
        if (iVar3 == 0) {
          uVar1 = *puVar8;
          fn_82230300(appuStack_80,0,0);
          fn_82230218(appuStack_80,uVar7 * 0x1c + (ulonglong)uVar1,0x10,0xffffffffffffffff);
          if (uStack_6c < 0x10) {
            appuStack_80[0] = appuStack_80;
          }
          uVar5 = fn_82F65B18(appuStack_80[0]);
          *(undefined4 *)(param_1 + 0x4f4) = uVar5;
          fn_82230300(appuStack_80,1,0);
          *(int *)(param_1 + 0x4f8) = *(int *)(param_1 + 0x4f4);
          if (*(int *)(param_1 + 0x4f4) < 1) {
            uVar5 = 10;
          }
          else {
            uVar5 = 7;
          }
          goto LAB_8245a1c8;
        }
        uVar7 = uVar7 + 1;
        lVar6 = lVar6 + 0x1c;
      } while ((uVar7 & 0xffffffff) <
               (ulonglong)(uint)((int)(*(int *)(param_1 + 0xd0) - *puVar8) / 0x1c));
    }
  }
  uVar5 = 0x10;
LAB_8245a1c8:
  *(undefined4 *)(param_1 + 0x84) = uVar5;
  fn_82230300(auStack_60,1,0);
  return;
}

