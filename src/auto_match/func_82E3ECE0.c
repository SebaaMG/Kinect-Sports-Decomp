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
extern int fn_82E3E5A8();
extern int fn_82E50BE8();
extern int fn_82E6FEB8();
extern unsigned int iStack_7c;
extern unsigned int lbl_8202E618;
extern unsigned int lbl_8202E61C;
extern unsigned int lbl_8202E620;
extern unsigned int lbl_8202E624;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_7e;
extern unsigned int uStack_80;


longlong fn_82E3ECE0(int param_1,int *param_2,ulonglong param_3,undefined8 param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  ushort uVar4;
  undefined2 uStack_80;
  ushort uStack_7e;
  int iStack_7c;
  undefined4 *apuStack_78 [2];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined2 uStack_60;
  
  if ((param_2 == (int *)0x0) || ((param_3 & 0xffffffff) == 0)) {
    lVar1 = -0x7fffbffd;
  }
  else {
    uStack_7e = 0;
    puVar3 = (undefined4 *)0x0;
    lVar1 = (**(code **)(*param_2 + 0x30))(param_2,&uStack_7e);
    if (-1 < lVar1) {
      uVar4 = 0;
      if (uStack_7e != 0) {
        do {
          puVar3 = (undefined4 *)0x0;
          uStack_80 = 0;
          iStack_7c = 4;
          lVar1 = (**(code **)(*param_2 + 0x34))(param_2,uVar4,&uStack_80,&iStack_7c);
          if (lVar1 < 0) {
            return lVar1;
          }
          if (iStack_7c != 3) {
            lVar1 = 1;
            goto LAB_82e3ee68;
          }
          uStack_70 = lbl_8202E618;
          uStack_6c = lbl_8202E61C;
          uStack_68 = lbl_8202E620;
          uStack_64 = lbl_8202E624;
          uStack_60 = uStack_80;
          uVar2 = fn_82E50BE8(0x70,0,0,0,0);
          if ((uVar2 & 0xffffffff) == 0) {
            puVar3 = (undefined4 *)0x0;
          }
          else {
            puVar3 = (undefined4 *)
                     fn_82E6FEB8(uVar2,param_2,uStack_80,param_3,param_4,
                                     *(undefined4 *)(param_1 + 100),*(uint *)(param_1 + 0x44) & 4);
          }
          apuStack_78[0] = puVar3;
          if (puVar3 == (undefined4 *)0x0) {
            lVar1 = -0x7ff8fff2;
            break;
          }
          lVar1 = fn_82E3E5A8(param_1 + 0x1ac,&uStack_70,apuStack_78);
          if (lVar1 < 0) goto LAB_82e3ee74;
          puVar3 = (undefined4 *)0x0;
          uVar4 = uVar4 + 1;
        } while (uVar4 < uStack_7e);
      }
      if (-1 < (int)lVar1) {
LAB_82e3ee68:
        *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) | 2;
LAB_82e3ee74:
        if (puVar3 != (undefined4 *)0x0) {
          (**(code **)*puVar3)(puVar3,1);
        }
      }
    }
  }
  return lVar1;
}

