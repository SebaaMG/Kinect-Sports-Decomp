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
extern unsigned int *auStack_90;
extern int fn_82E3BF28();
extern int fn_82E3E5A8();
extern int fn_82E50BE8();
extern int fn_82E70378();
extern unsigned int iStack_9c;
extern unsigned int lbl_8214C030;
extern unsigned int lbl_8214C034;
extern unsigned int lbl_8214C038;
extern unsigned int lbl_8214C03C;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_9e;
extern unsigned int uStack_a0;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong fn_82E3F220(int param_1,int *param_2,ulonglong param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar3;
  ulonglong uVar2;
  undefined4 *puVar4;
  ushort uVar5;
  undefined2 uStack_a0;
  ushort uStack_9e;
  int iStack_9c;
  undefined4 *apuStack_98 [2];
  undefined1 auStack_90 [16];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined2 uStack_70;
  
  if ((param_2 == (int *)0x0) || ((param_3 & 0xffffffff) == 0)) {
    lVar1 = -0x7fffbffd;
  }
  else {
    uStack_9e = 0;
    puVar4 = (undefined4 *)0x0;
    lVar1 = (**(code **)(*param_2 + 0x30))(param_2,&uStack_9e);
    if (-1 < lVar1) {
      uVar5 = 0;
      if (uStack_9e != 0) {
        do {
          puVar4 = (undefined4 *)0x0;
          uStack_a0 = 0;
          iStack_9c = 4;
          lVar1 = (**(code **)(*param_2 + 0x34))(param_2,uVar5,&uStack_a0,&iStack_9c);
          if (lVar1 < 0) {
            return lVar1;
          }
          if (iStack_9c != 2) {
            lVar1 = 1;
            goto LAB_82e3f3c8;
          }
          uStack_80 = lbl_8214C030;
          uStack_7c = lbl_8214C034;
          uStack_78 = lbl_8214C038;
          uStack_74 = lbl_8214C03C;
          uStack_70 = uStack_a0;
          iVar3 = fn_82E3BF28(param_1 + 0x1ac,&uStack_80,apuStack_98,auStack_90);
          if (iVar3 == 0) {
            uVar2 = fn_82E50BE8(0x70,0,0,0,0);
            if ((uVar2 & 0xffffffff) == 0) {
              puVar4 = (undefined4 *)0x0;
            }
            else {
              puVar4 = (undefined4 *)
                       fn_82E70378(uVar2,param_2,uStack_a0,param_3,param_4,
                                         *(undefined4 *)(param_1 + 100),
                                         *(uint *)(param_1 + 0x44) & 4);
            }
            apuStack_98[0] = puVar4;
            if (puVar4 == (undefined4 *)0x0) {
              lVar1 = -0x7ff8fff2;
              break;
            }
            lVar1 = fn_82E3E5A8(param_1 + 0x1ac,&uStack_80,apuStack_98);
            if (lVar1 < 0) goto LAB_82e3f3d4;
          }
          puVar4 = (undefined4 *)0x0;
          uVar5 = uVar5 + 1;
        } while (uVar5 < uStack_9e);
      }
      if (-1 < (int)lVar1) {
LAB_82e3f3c8:
        *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) | 8;
LAB_82e3f3d4:
        if (puVar4 != (undefined4 *)0x0) {
          (**(code **)*puVar4)(puVar4,1);
        }
      }
    }
  }
  return lVar1;
}

